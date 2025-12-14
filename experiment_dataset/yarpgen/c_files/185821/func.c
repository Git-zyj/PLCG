/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185821
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) ((_Bool) (short)-23433));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((arr_12 [i_2 + 2] [i_1 - 2]) | (((/* implicit */long long int) var_1))))));
                        arr_14 [i_1] [i_1 + 3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */int) ((signed char) (-(111474330U))));
                    }
                    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) min(((signed char)-110), ((signed char)-97))))));
                }
                var_19 = ((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)110))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_20 = ((int) ((signed char) (short)32766));
        var_21 = ((long long int) (-(var_6)));
    }
    var_22 += ((/* implicit */long long int) var_9);
}
