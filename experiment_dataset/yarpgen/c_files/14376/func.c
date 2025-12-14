/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14376
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_11), ((+(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))), (((/* implicit */long long int) (+(arr_3 [i_0]))))))))));
                var_12 = ((((/* implicit */_Bool) 3198147352U)) ? (1096819925U) : (2755381269U));
                var_13 = var_5;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_14 += ((((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_2))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [9U] [i_1] [i_2] [i_3])))))) ^ (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) (unsigned char)149)) : (arr_3 [i_0])))) ? (min((var_4), (((/* implicit */long long int) (unsigned char)201)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)201)) << (((9563288524824277572ULL) - (9563288524824277564ULL)))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 11; i_4 += 2) 
                            {
                                var_15 ^= ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_4 - 2]))) : (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((arr_13 [i_4] [i_4] [i_1] [i_4 + 2] [i_1] [9LL] [i_4 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                var_16 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (8883455548885274040ULL)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_5);
}
