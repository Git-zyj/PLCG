/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17403
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 -= ((unsigned long long int) max((arr_4 [i_0]), (((/* implicit */short) var_3))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? ((+(((var_12) ? (1415421366U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_12)) : (var_6))), (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (((+(1773096556U))) << (((max((((/* implicit */long long int) 2521870730U)), (7068771494839240205LL))) - (7068771494839240188LL))))))));
                    var_17 = ((/* implicit */_Bool) 3687020546U);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_18 [i_7 - 1] [i_7 + 1] [i_7 + 1] [3U])))) ? (((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1] [8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2521870730U))) : (((/* implicit */unsigned int) (~(var_6))))));
                        var_19 = ((((/* implicit */_Bool) 1773096565U)) ? (1773096556U) : (1773096565U));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        var_20 = ((/* implicit */int) var_4);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_8] [i_2]))) == (var_10)));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2521870730U) : (((/* implicit */unsigned int) 1870520272))));
                            var_23 = ((/* implicit */int) (+(arr_9 [i_2] [i_2 - 1])));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                        {
                            var_24 = (short)1549;
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (9776343890770502603ULL)));
                            arr_29 [i_2] [(_Bool)1] [i_2] [i_8] [(_Bool)1] = ((/* implicit */short) (+(((((/* implicit */_Bool) 1773096566U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1]))))));
                            var_26 ^= ((/* implicit */unsigned long long int) ((int) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) ((short) 2521870739U))))));
                            arr_30 [i_6] [i_6] [i_5] [(_Bool)0] [i_6] [i_6] &= ((/* implicit */short) (-((-(max((((/* implicit */unsigned long long int) 1773096566U)), (var_10)))))));
                        }
                        var_27 = ((/* implicit */short) var_4);
                    }
                    /* vectorizable */
                    for (long long int i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        arr_33 [4LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29179)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
                        var_28 = var_10;
                    }
                    arr_34 [i_2] [0U] [i_6] = (i_2 % 2 == zero) ? (((((/* implicit */_Bool) ((1713966377U) << (((arr_9 [i_2] [i_2 - 1]) - (10231559688492267081ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */unsigned int) -1653960452)) : (2521870730U)))) : (((((/* implicit */_Bool) max((var_1), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((unsigned long long int) 8670400182939049007ULL)))))) : (((((/* implicit */_Bool) ((1713966377U) << (((((arr_9 [i_2] [i_2 - 1]) - (10231559688492267081ULL))) - (12416216054152041421ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */unsigned int) -1653960452)) : (2521870730U)))) : (((((/* implicit */_Bool) max((var_1), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((unsigned long long int) 8670400182939049007ULL))))));
                }
            } 
        } 
        var_29 = (i_2 % 2 == zero) ? (max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (arr_18 [i_2] [i_2] [(short)1] [(short)1]))), (((/* implicit */int) var_1))))), (((var_10) >> (((arr_8 [i_2]) - (1336134861))))))) : (max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (arr_18 [i_2] [i_2] [(short)1] [(short)1]))), (((/* implicit */int) var_1))))), (((var_10) >> (((((arr_8 [i_2]) + (1336134861))) + (67692523)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            var_30 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
            var_31 = ((/* implicit */short) (-(arr_8 [i_2])));
        }
        var_32 = (~((~(8670400182939049023ULL))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_13 = 3; i_13 < 13; i_13 += 1) 
    {
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (arr_1 [4]) : (((unsigned int) var_5)))))))));
        var_34 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_13 - 3]))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13 - 3]))) - (var_13)))));
        var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned int) max((var_11), ((short)18789))))))), (((((/* implicit */unsigned long long int) arr_1 [i_13 - 2])) & (17928953567297430397ULL)))));
    }
}
