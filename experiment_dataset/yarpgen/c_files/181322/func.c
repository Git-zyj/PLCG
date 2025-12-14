/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181322
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [(unsigned short)20]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [(unsigned char)16] [i_2 + 1] [i_2] [i_4]);
                                var_17 -= ((/* implicit */int) (-((-(((((/* implicit */_Bool) (unsigned short)3655)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) : (4001592119U)))))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((short)15872), ((short)-25982)))), (min((var_13), (((/* implicit */unsigned long long int) (unsigned char)210))))))) ? (((/* implicit */long long int) (-((+(((/* implicit */int) var_9))))))) : ((((-(arr_8 [i_0] [i_1] [i_0] [i_2]))) + (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27823)) ^ (((/* implicit */int) arr_1 [i_2])))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned long long int) arr_15 [i_5])), (max((arr_13 [i_5]), (((/* implicit */unsigned long long int) var_5)))))));
        var_21 = ((/* implicit */unsigned char) ((long long int) ((arr_13 [i_5 + 3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))))));
        var_22 = ((/* implicit */unsigned char) arr_14 [i_5]);
    }
    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 2) 
    {
        var_23 = arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 - 2];
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]))) - (max((((/* implicit */unsigned long long int) 3339015032U)), (15070396726130412286ULL)))));
        var_25 = ((/* implicit */long long int) max((((((((/* implicit */int) arr_11 [i_6] [i_6] [i_6])) << (((arr_18 [i_6]) - (2017221958))))) - (((/* implicit */int) arr_6 [i_6] [2U])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_6])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)0] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6] [i_6 + 3]))) : (var_11)))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) (-(1170240985U)));
}
