/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127933
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] = ((/* implicit */int) var_10);
                                var_18 ^= ((/* implicit */short) ((unsigned char) var_16));
                                arr_12 [i_0] [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((((/* implicit */int) arr_10 [i_3 + 2] [i_4] [i_3] [i_4] [i_4] [i_4] [i_4])), (min((((/* implicit */int) min((((/* implicit */short) (signed char)-8)), (arr_1 [i_1])))), (((((/* implicit */int) var_5)) % (arr_6 [i_0] [i_1])))))));
                                var_19 = ((/* implicit */int) ((signed char) min((arr_7 [i_0] [i_3] [i_0] [i_2]), (arr_7 [i_3] [i_3] [i_4] [i_2]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) min((((/* implicit */short) min((((/* implicit */unsigned char) (signed char)22)), (arr_0 [i_2])))), (arr_1 [i_0])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_11);
    var_22 = ((/* implicit */short) ((_Bool) min((var_7), (((/* implicit */int) var_16)))));
}
