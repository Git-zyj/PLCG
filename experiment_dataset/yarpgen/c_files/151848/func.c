/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151848
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
    for (short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)59)) >= (((/* implicit */int) (short)3))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    arr_9 [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)37023)) % (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    var_21 &= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-71))));
                    var_22 |= ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)37012)) + (((/* implicit */int) (unsigned char)58))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [(unsigned char)23] [11ULL] [20ULL] [i_3] = ((/* implicit */_Bool) ((1844570653U) / (((/* implicit */unsigned int) -1256091283))));
                    var_23 = ((/* implicit */int) max(((short)1329), ((short)14)));
                }
                arr_13 [i_0] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((16489301819505994922ULL), (((/* implicit */unsigned long long int) var_7))));
}
