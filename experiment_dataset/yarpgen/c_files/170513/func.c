/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170513
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
    var_12 = ((/* implicit */unsigned int) (~(-7331788609356957181LL)));
    var_13 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_14 &= ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) arr_10 [i_1] [i_1] [i_3] [i_3] [i_2] [(unsigned short)5]);
                        var_16 = var_4;
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((_Bool) var_5))));
                            var_18 = ((/* implicit */unsigned int) (~(-10)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 -= ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_2)))));
                            arr_17 [i_2] &= ((/* implicit */unsigned char) var_11);
                        }
                        var_20 ^= ((((/* implicit */_Bool) 1531034056)) ? (((/* implicit */int) arr_8 [(unsigned short)3] [i_0] [i_2])) : (var_11));
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_21 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_0);
                        var_21 = ((/* implicit */signed char) max((((long long int) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])), (((/* implicit */long long int) (_Bool)1))));
                        var_22 *= ((/* implicit */int) ((11411211314848394434ULL) & (((/* implicit */unsigned long long int) -7331788609356957210LL))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_1 [i_0 - 1]))));
                    var_24 = ((/* implicit */int) arr_10 [3ULL] [i_1] [i_7] [8] [i_1] [i_0]);
                }
                var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_1]))))));
                var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_0])) ? (arr_22 [i_0 - 1] [(short)5] [i_0 - 1] [i_0]) : (arr_22 [i_0 - 1] [(unsigned short)13] [i_0 - 1] [i_0])))) ? (((((/* implicit */_Bool) 2147483647)) ? (min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */int) var_3)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
                arr_24 [i_0] [i_1] [i_1] = ((/* implicit */int) max(((~(var_0))), (min((arr_7 [i_0 - 1] [i_0] [i_0 - 1]), (((/* implicit */long long int) var_1))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) min((((((/* implicit */int) var_2)) < (((/* implicit */int) var_10)))), (var_4)));
}
