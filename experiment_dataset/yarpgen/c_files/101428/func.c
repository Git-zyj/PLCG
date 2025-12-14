/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101428
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
    var_20 = ((/* implicit */_Bool) -4355122595937132313LL);
    var_21 *= ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] [i_3 - 2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)37378)) : (((/* implicit */int) arr_8 [i_2])))), (((/* implicit */int) arr_3 [16] [i_3 + 2]))))));
                            arr_11 [i_2] [(signed char)4] [12] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [(unsigned short)0] = ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_1])));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 24; i_5 += 3) 
                    {
                        {
                            var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_4] [i_1] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_14 [i_5] [i_0] [i_0]))))))) ? (((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), (arr_6 [i_0] [(signed char)18] [i_4 + 3])))) : (((/* implicit */int) arr_8 [i_1]))));
                            var_23 = ((/* implicit */_Bool) arr_7 [i_0]);
                            var_24 += ((/* implicit */signed char) max((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) arr_8 [i_4 + 2])) ? (((/* implicit */int) arr_8 [i_4 + 1])) : (((/* implicit */int) arr_8 [i_4 + 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
