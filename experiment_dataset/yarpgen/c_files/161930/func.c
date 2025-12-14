/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161930
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
    var_19 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_20 = ((long long int) ((((/* implicit */int) arr_1 [i_1 + 1])) << (((((/* implicit */int) arr_1 [i_1 - 2])) - (205)))));
                    var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) >> (((-15) + (22)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) (~(((var_9) & (((/* implicit */long long int) arr_9 [i_3] [i_3] [i_3 - 1] [i_3]))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3 - 1] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((unsigned char) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65522)) : (320890420)))) == (((((/* implicit */_Bool) 2796705337U)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) 19)))))))) : (min((((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (arr_4 [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1]))))), (((((/* implicit */_Bool) arr_10 [i_1 - 2] [i_2])) ? (var_15) : (((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 2]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    arr_18 [i_0] [i_0] [i_5] [i_1 + 1] = ((/* implicit */int) (_Bool)1);
                    arr_19 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1216396851U)) ? (((/* implicit */int) (_Bool)1)) : (var_7)))) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) 23)) ? (((/* implicit */unsigned int) var_7)) : (arr_10 [i_0] [i_1])))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((int) 7ULL)));
                    var_23 = ((/* implicit */_Bool) var_1);
                    var_24 = arr_1 [i_1 - 1];
                    arr_23 [i_0] [i_6] [i_1] [i_6] = ((/* implicit */_Bool) var_7);
                }
                arr_24 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned char) var_3)), (arr_1 [i_1 + 2]))));
                arr_25 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-42), (((/* implicit */int) (_Bool)1))))) ? ((~(arr_15 [i_1 + 1] [i_1 + 2] [i_1 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1]))))))));
            }
        } 
    } 
}
