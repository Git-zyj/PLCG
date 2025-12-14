/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182496
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
    var_10 ^= ((long long int) (~(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                        var_11 -= ((short) 1);
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_12 = ((int) arr_12 [i_1] [i_2] [i_2]);
                        var_13 = max((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)114)))) * (((/* implicit */int) (signed char)-84))))), (arr_5 [i_0] [i_0]));
                        var_14 = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0] [i_4]));
                        var_15 -= ((/* implicit */int) arr_1 [i_2] [i_1]);
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (((((-(max((((/* implicit */long long int) arr_1 [i_0] [(unsigned short)16])), (arr_5 [i_0] [12]))))) + (9223372036854775807LL))) << (((unsigned long long int) arr_15 [i_0] [i_1] [(_Bool)0] [i_4])))))));
                    }
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((short) min((var_9), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])))))) | (((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) (-((-(((/* implicit */int) var_1))))))) | (min((((/* implicit */long long int) ((short) var_5))), (((var_9) + (var_3)))))));
}
