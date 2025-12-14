/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163613
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_3 [i_1])))) > ((+(((/* implicit */int) var_0))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] = ((int) (+(((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 2]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_10 [i_0] [16] [i_0] [i_0] [i_0] |= ((/* implicit */short) ((min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) max((arr_6 [i_3]), (((/* implicit */unsigned char) arr_1 [i_1 + 1]))))))) ^ (((/* implicit */int) arr_0 [i_0] [i_3]))));
                        arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_2] [1ULL]))));
                    }
                }
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) min((((((var_9) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_5))) << (((((/* implicit */int) var_4)) + (60))))))));
    var_12 = ((/* implicit */unsigned short) min((var_5), (var_5)));
    var_13 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-5)), (max((var_0), (((/* implicit */unsigned short) var_3)))))))));
}
