/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131418
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (+(var_7)));
                                var_14 = ((/* implicit */signed char) arr_6 [i_3]);
                                arr_11 [(unsigned char)23] [i_1] [i_2] [i_2 + 3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) & (((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_4]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_11)) ^ (var_4)))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))) != (12995041673784807989ULL)));
                arr_13 [i_0] [i_0] = ((/* implicit */int) 3160480608U);
            }
        } 
    } 
}
