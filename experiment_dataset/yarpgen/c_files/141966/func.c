/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141966
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) var_6)))));
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)31340))));
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])), (var_3)))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 4; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    arr_9 [3ULL] [i_1] [2] [i_1] = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2 + 1]);
                    var_20 = ((/* implicit */_Bool) arr_6 [i_1] [i_2 - 3]);
                }
                for (long long int i_3 = 4; i_3 < 19; i_3 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)34202))));
                    arr_13 [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (signed char)-5)) ? (arr_5 [i_3] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_3 - 3]))))))), (((long long int) arr_4 [i_1]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_4);
    var_23 = ((/* implicit */unsigned long long int) var_16);
    var_24 = ((/* implicit */int) var_13);
}
