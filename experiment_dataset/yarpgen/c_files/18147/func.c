/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18147
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
    var_15 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_16 *= ((/* implicit */_Bool) 112091535);
                        var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (_Bool)1)))))), (min((max((var_6), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) ^ (var_1))))))));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (_Bool)1)), (4398046502912LL))), (max((((/* implicit */long long int) min((var_9), (2934842677U)))), (max((4977098080895990340LL), (((/* implicit */long long int) (short)32766))))))));
                        var_19 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) ^ (max((4294967295U), (((/* implicit */unsigned int) arr_10 [i_2] [i_2])))));
                        var_20 = ((((/* implicit */_Bool) min((min((var_3), (arr_9 [i_1] [i_1]))), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1]))) : (min((arr_5 [i_0] [2U] [i_0] [i_0]), (((/* implicit */int) arr_3 [i_0] [i_1])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3262653287776210813ULL)) && (((/* implicit */_Bool) 4294967284U)))))) : (var_6)));
                        arr_15 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */int) var_7);
                        var_22 = ((/* implicit */short) ((_Bool) ((signed char) arr_10 [i_1] [i_2])));
                    }
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((var_12), (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_14)) : (var_12))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (var_4)))))))))));
                }
            } 
        } 
    } 
}
