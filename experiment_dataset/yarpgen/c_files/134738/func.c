/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134738
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
    var_11 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (short)1051)), (var_7))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [11ULL] [11ULL] [i_2 + 1]))) : (var_4)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        var_13 ^= ((/* implicit */_Bool) ((short) var_3));
                        var_14 = ((/* implicit */int) 1743001691275222878ULL);
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(var_10))))));
                    }
                }
                var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_0])) / (var_7)))) ? ((-(2147483642))) : (arr_2 [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 + 2])) && (((/* implicit */_Bool) -901015887)))))));
                var_17 -= ((/* implicit */unsigned long long int) (short)-1);
            }
        } 
    } 
    var_18 = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((2147483627) >> (((var_9) - (16881126189276577439ULL)))))), (var_1)))), (min((((/* implicit */unsigned long long int) -2147483622)), (var_9))));
}
