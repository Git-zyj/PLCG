/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128094
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_2 [i_0] [i_1])))) | (((/* implicit */int) arr_2 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_8 [6LL] [i_2] [i_2] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_4 [i_0] [i_1] [i_2]))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (signed char)4))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) var_0)) : (arr_4 [i_0] [i_1] [i_2])))));
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-((-(arr_4 [(_Bool)1] [(_Bool)1] [i_0]))))))));
                    arr_9 [(_Bool)1] [(_Bool)1] [i_2] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                }
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    arr_13 [i_0] [(short)23] [(short)24] = ((/* implicit */unsigned char) var_3);
                    arr_14 [i_3] = ((/* implicit */short) ((long long int) (!(arr_10 [i_1] [i_1]))));
                    var_13 = ((/* implicit */short) (unsigned char)36);
                }
            }
        } 
    } 
}
