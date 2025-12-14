/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178217
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
    var_10 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (+((~(arr_1 [i_2])))));
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */int) arr_4 [i_1] [i_2]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                }
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)66)) >> (((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) - (16097))))) | (((/* implicit */int) var_3))))) ? (arr_5 [i_1]) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) | (((((/* implicit */int) arr_4 [i_0] [i_1])) | (arr_5 [i_1])))))));
            }
        } 
    } 
}
