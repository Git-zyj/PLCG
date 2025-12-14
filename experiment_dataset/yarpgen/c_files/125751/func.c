/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125751
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
    var_16 = ((/* implicit */signed char) min((var_16), (var_5)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) min((4294967284U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) < (11U))))));
                                arr_13 [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0 - 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (signed char i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_18 = var_6;
                            var_19 = ((/* implicit */unsigned short) ((var_0) ? (((/* implicit */int) ((signed char) 817987337))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_1 + 1] [i_5] [i_6] [i_6 - 2] [i_6 - 1])), (((unsigned short) arr_8 [i_1] [i_6])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 4; i_7 < 21; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned int) arr_7 [i_0] [6]);
                            var_21 -= ((/* implicit */signed char) ((int) arr_21 [i_7 + 1] [i_7 - 2] [i_7 + 2]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) var_14)) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 3]))) ^ (3387658294U))), (((/* implicit */unsigned int) arr_14 [i_0] [i_1 - 2] [i_9] [0LL])))) : (((/* implicit */unsigned int) var_9)));
                            var_23 = ((/* implicit */long long int) 511);
                        }
                    } 
                } 
            }
        } 
    } 
}
