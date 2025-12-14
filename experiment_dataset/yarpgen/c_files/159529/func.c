/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159529
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
    var_10 *= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) var_8);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_12 = ((/* implicit */_Bool) ((long long int) min((arr_7 [i_1] [i_2 - 2] [i_2 - 2]), (((/* implicit */unsigned int) ((unsigned char) arr_3 [i_1] [i_0]))))));
                    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1]))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (signed char)-79);
}
