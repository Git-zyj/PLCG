/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160144
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [(short)14] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1457544068)) ? (((/* implicit */int) (signed char)56)) : (-1457544068)))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 2] [22ULL] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_2))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1 - 1] [i_1 - 4] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [4LL] [i_2 + 2] [4LL])) >> (((((/* implicit */int) arr_6 [i_1] [i_2 + 3] [(unsigned short)22])) - (18850))))) < ((+(((/* implicit */int) arr_6 [i_1] [i_2 - 1] [i_2 - 2]))))));
                    var_16 = ((/* implicit */int) max((((unsigned char) arr_7 [i_0] [i_1 + 1] [i_2 + 1])), (((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_2 - 2] [i_1 + 1] [i_2 + 1])) >= (((/* implicit */int) arr_1 [i_2 + 2] [i_1 + 1])))))));
                }
                var_17 += ((/* implicit */long long int) arr_6 [i_0] [10] [i_0]);
                arr_10 [i_1] [i_1] [i_1 - 4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_3 [i_1 - 1] [i_1 - 2])))));
                arr_11 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) min((1457544068), (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1 - 3]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_9))));
}
