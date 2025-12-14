/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129166
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_0 [i_1])))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = var_7;
                    var_12 = ((/* implicit */unsigned char) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 17729335279440232657ULL))))));
                    var_13 = ((/* implicit */_Bool) (unsigned char)160);
                    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [9ULL] [8U])))))) : ((+(((/* implicit */int) arr_7 [8U] [i_1] [(_Bool)1] [i_2]))))));
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_1] [i_3])) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0] [i_1] [i_3]))))));
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((_Bool) (short)-7406));
                    var_16 = ((/* implicit */unsigned int) arr_5 [i_0] [i_3]);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (short)8188))));
}
