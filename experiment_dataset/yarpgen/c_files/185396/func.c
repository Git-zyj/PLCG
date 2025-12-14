/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185396
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
    var_16 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (signed char)-54)), (2287828610704211968ULL))))))));
                var_18 = ((/* implicit */signed char) min(((+(arr_6 [i_0 + 1] [i_1 - 1]))), (((long long int) arr_1 [i_0 - 1]))));
                arr_7 [i_0] [(short)4] [i_0 + 1] &= ((/* implicit */int) ((short) (_Bool)1));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > ((-(min((((/* implicit */unsigned long long int) var_13)), (8222938239932882571ULL)))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ ((+(var_6)))))));
                            var_21 = ((/* implicit */unsigned short) 16158915463005339650ULL);
                            var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_1 + 4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1 + 3]))))));
                        }
                    } 
                } 
                var_23 += (+(min((8222938239932882571ULL), (2047ULL))));
            }
        } 
    } 
}
