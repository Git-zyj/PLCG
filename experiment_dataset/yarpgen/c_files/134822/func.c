/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134822
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((signed char) ((((int) arr_2 [i_0])) + ((~(arr_1 [i_0])))));
                arr_5 [i_0] [i_1] [16] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned char) arr_3 [i_0]))))), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_15))))));
                var_21 *= ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned int) ((var_6) >= (((/* implicit */int) (unsigned char)255))))), (max((843480859U), (3451486415U))))));
                var_22 *= ((/* implicit */signed char) 3451486424U);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_11 [i_5 + 1]) : (((arr_11 [i_2]) % (((/* implicit */int) arr_12 [i_2] [i_3] [i_4 - 1]))))));
                            arr_15 [(_Bool)1] [i_2] = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                arr_16 [i_2] [i_3] = ((/* implicit */signed char) ((var_6) < (((/* implicit */int) var_7))));
            }
        } 
    } 
}
