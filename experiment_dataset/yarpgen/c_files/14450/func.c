/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14450
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
    var_16 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) (unsigned char)20)))) : (((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 4]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */int) arr_3 [(unsigned char)7] [(unsigned char)7] [i_0])) * (((((/* implicit */_Bool) (short)-28563)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_1] = (unsigned char)20;
                var_18 = arr_2 [i_0] [(unsigned char)6] [i_1];
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_19 += (unsigned char)45;
                            arr_11 [i_0] [(unsigned char)9] [i_0] [(unsigned char)9] [i_3] = ((/* implicit */unsigned char) max(((short)25422), (((/* implicit */short) (unsigned char)0))));
                            var_20 -= arr_1 [i_1] [i_2 + 1];
                        }
                    } 
                } 
            }
        } 
    } 
}
