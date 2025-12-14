/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128971
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_18))) ^ (9223372036854775807LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) ((((/* implicit */int) (short)24307)) > (((/* implicit */int) var_4))))))));
                    arr_8 [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]))));
                }
                arr_9 [0] = ((/* implicit */long long int) var_14);
                var_22 = ((/* implicit */_Bool) max((arr_7 [i_1] [i_0] [(unsigned char)9]), (((/* implicit */unsigned long long int) ((long long int) (_Bool)0)))));
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned char) var_2);
    var_24 = ((/* implicit */unsigned char) var_8);
}
