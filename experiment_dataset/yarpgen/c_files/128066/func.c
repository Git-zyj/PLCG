/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128066
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (9223372036854775807LL)))))) : (max((((/* implicit */long long int) ((var_13) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (var_15))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_7 [i_3]))));
                                arr_13 [i_1] [i_0] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_0 - 2])) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1])))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)25499)), (-1LL)))) ? (arr_10 [(unsigned char)6] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3 - 1] [i_2] [i_3 - 1] [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3 - 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (max((1452878322U), (((/* implicit */unsigned int) arr_9 [i_1 - 3] [i_2] [(unsigned char)4] [i_4]))))))));
                                var_20 = ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_0] [i_2])))));
                }
            } 
        } 
    } 
    var_22 &= ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 2147483642)))))) ? (((/* implicit */long long int) -21)) : (((((/* implicit */long long int) -1524617222)) * (max((((/* implicit */long long int) 624382436U)), (var_2))))));
    var_23 -= ((/* implicit */_Bool) (+(((long long int) var_9))));
}
