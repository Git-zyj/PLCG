/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136319
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
    var_17 = ((/* implicit */_Bool) var_0);
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) % (((/* implicit */int) (unsigned char)225)))))))), ((+(var_7)))));
    var_19 *= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(var_16))), (((/* implicit */long long int) var_11))))) || (((/* implicit */_Bool) var_11))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_13 [5U] [i_0] [i_2] [(unsigned short)12] = ((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3])) ? (arr_8 [i_1] [i_1] [i_2]) : (arr_8 [i_0] [i_0] [0ULL]))) & (arr_8 [i_0] [(unsigned char)3] [i_0]));
                            var_20 = ((/* implicit */int) arr_2 [2U] [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (((var_16) & (((/* implicit */long long int) ((int) -1317300410770544861LL)))))));
}
