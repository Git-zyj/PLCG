/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154866
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [(short)18])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [24] [i_2] [i_3]))))) : (var_4))))));
                            var_19 = ((/* implicit */signed char) max((((/* implicit */int) max((((-5177908161698998695LL) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            {
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_5 + 1] [i_5 - 1] [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((long long int) var_13)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
                var_21 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19572)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)118), (arr_8 [i_4] [i_4] [i_4] [i_4]))))) : (min((arr_2 [i_4] [i_4] [i_5]), (((/* implicit */long long int) var_6)))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
