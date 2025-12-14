/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149978
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
    var_15 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((max((((/* implicit */int) var_6)), (arr_0 [i_0 + 1]))) / (max((arr_7 [i_2 - 1]), (arr_7 [i_2 - 1])))));
                            arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */long long int) max((2057387805064089227ULL), (((arr_4 [i_0] [i_1] [i_2]) ? (min((((/* implicit */unsigned long long int) var_5)), (13401810943341198980ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                            var_17 &= ((/* implicit */int) arr_2 [i_3]);
                        }
                    } 
                } 
                var_18 *= ((/* implicit */signed char) var_8);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_17 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */long long int) (!((!(var_7)))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) <= (((1138554475365430202ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19554)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = (!(((/* implicit */_Bool) var_14)));
    var_21 = ((/* implicit */long long int) var_0);
}
