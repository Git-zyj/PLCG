/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187490
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
    for (long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)67);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_13 = ((unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2] [i_2])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (var_12)));
                    var_14 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 3] [i_0 + 2])))));
                    var_15 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (~(661890062U)))) && (var_4))));
                    var_16 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) ((arr_2 [i_0] [i_1] [(_Bool)1]) & (arr_2 [i_0] [i_0] [i_2])))));
                }
            }
        } 
    } 
    var_17 &= ((/* implicit */_Bool) var_3);
}
