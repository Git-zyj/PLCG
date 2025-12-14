/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16630
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((int) 1885893060));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_1 + 2] [i_2] [i_3] = ((/* implicit */unsigned long long int) 1885893060);
                        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((var_4) ? (((arr_0 [i_2]) & (((/* implicit */unsigned long long int) 3772326685U)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0]))))));
                    }
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_18 &= ((/* implicit */short) (+(((((/* implicit */int) (short)32767)) + ((-(((/* implicit */int) (short)32765))))))));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned int) arr_8 [i_1 - 2] [0ULL] [i_4])))));
                    }
                    arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [22U])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (short)-21367);
}
