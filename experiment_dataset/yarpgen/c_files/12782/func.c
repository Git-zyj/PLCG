/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12782
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 += ((/* implicit */int) var_11);
    var_17 = ((/* implicit */short) (-(var_0)));
    var_18 = ((/* implicit */unsigned char) var_10);
    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((var_0) - (10345191430681674637ULL)))))) ? (min((((/* implicit */int) var_2)), (var_14))) : (var_9)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_20 += max(((~((-(arr_3 [i_3] [i_4]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1 - 1]))))));
                                var_21 ^= ((/* implicit */unsigned short) (((((+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1])))) + (2147483647))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [3] [3])), (arr_3 [(unsigned char)10] [i_3])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((signed char) arr_9 [(unsigned short)18] [i_2] [i_1] [i_0]))))) - (59125)))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [21ULL] [i_4] = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                                var_22 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((var_11) ? (((/* implicit */int) arr_4 [i_4] [i_3])) : (((/* implicit */int) arr_1 [i_0])))) - (17516)))))) ? (((((/* implicit */int) (signed char)11)) << (((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [19] [19] [(signed char)20] [i_0]))) + (2019006523))))) : (((/* implicit */int) var_7)));
                            }
                        } 
                    } 
                    arr_14 [i_0] [(short)14] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)222)) / (((/* implicit */int) var_1))))) ? (arr_2 [i_1 + 1] [i_1 + 1]) : ((+(var_13))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)30161))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_9))))))));
                    var_23 = ((arr_9 [i_1] [(unsigned short)14] [i_1 - 1] [i_1 - 1]) + (((((((/* implicit */_Bool) (unsigned short)35374)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_9 [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */int) var_7)))))));
                    arr_15 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1]))) % (var_13))))));
                    var_24 = ((/* implicit */signed char) (unsigned char)250);
                }
            } 
        } 
    } 
}
