/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102584
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
    var_17 = ((/* implicit */long long int) var_10);
    var_18 = ((((((/* implicit */_Bool) var_8)) || (((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_13))))) ? (min((var_12), (((/* implicit */long long int) min((var_15), (-1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (var_7)))) ? (((int) var_6)) : (((/* implicit */int) (unsigned char)101))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_19 += ((/* implicit */long long int) (-(((/* implicit */int) ((((arr_4 [i_3 - 4] [i_0] [i_0]) + (var_14))) >= (var_3))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */long long int) var_9);
                                arr_12 [i_1] [i_3 - 3] [i_2] [i_1] [i_1] = ((/* implicit */signed char) max((3725316253173131379LL), (((/* implicit */long long int) ((((var_10) + (2147483647))) >> (((arr_1 [i_1 + 1]) - (608322841))))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                arr_15 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3 - 4] [i_1] [i_3] [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_1] [i_1]))) : (arr_0 [i_1 - 1])));
                                var_21 -= ((/* implicit */int) ((long long int) -1));
                            }
                            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                            {
                                arr_19 [i_1] [i_1] [2LL] [i_3] [i_6] = var_13;
                                var_22 -= ((/* implicit */short) ((unsigned char) (short)11977));
                            }
                            var_23 ^= ((/* implicit */int) ((long long int) min((-1LL), (((/* implicit */long long int) var_6)))));
                        }
                    } 
                } 
                var_24 = var_11;
                /* LoopNest 3 */
                for (long long int i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            {
                                arr_28 [i_9] [i_9] [i_1] [8] [i_9] = ((/* implicit */signed char) 1);
                                arr_29 [i_0] [i_1] [i_1] [i_0] [(short)9] [(unsigned char)9] [i_9] = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) 0)) : (-5463275756364135162LL))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) 2147483647))))))));
                                arr_30 [i_0] [i_0] [i_7] [i_0] [i_9] &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)96)) != (max((((/* implicit */int) (unsigned char)38)), (-2048)))));
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) min((min((((/* implicit */long long int) var_0)), (var_13))), (((((/* implicit */_Bool) 1185045365)) ? (-8417113938613884439LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28))))))))));
}
