/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101808
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = var_1;
                                var_15 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) ? (arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)57720)) : (((/* implicit */int) (unsigned short)17453))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14797)))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0]);
                arr_13 [i_0] [(unsigned char)16] = ((/* implicit */signed char) 5037929841899603424ULL);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) (-(((((var_5) + (2147483647))) << (((((/* implicit */int) var_9)) - (54442)))))));
}
