/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115569
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned int) var_7));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_5 [i_0]))));
                        var_21 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (5351012903989498547LL)));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_3 - 2] [i_2] [i_3])) == (((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_2] [i_3]))));
                        var_23 += ((/* implicit */unsigned int) (signed char)(-127 - 1));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
                        {
                            {
                                var_24 *= (_Bool)0;
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_14 [i_4] [i_1] [i_1] [i_1]))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((_Bool) 2001414464U)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 + 4] [i_5 + 3] [(_Bool)1] [(signed char)14] [(signed char)14]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 += ((/* implicit */long long int) 438392580);
    }
    var_28 = ((/* implicit */signed char) min((var_15), (((/* implicit */int) (_Bool)1))));
}
