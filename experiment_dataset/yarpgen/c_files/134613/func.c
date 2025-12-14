/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134613
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                    var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_0] [i_1])) > (((/* implicit */int) var_3))));
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (short)18449))) > (-2607994104352922686LL));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) var_5);
                                arr_14 [(short)11] [i_1] |= ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_14 -= ((/* implicit */unsigned char) (~(arr_3 [i_0] [i_0])));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_16 = (short)18425;
}
