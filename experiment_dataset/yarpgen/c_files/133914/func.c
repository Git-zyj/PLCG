/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133914
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
    var_15 = ((((/* implicit */long long int) (~(var_0)))) ^ (0LL));
    var_16 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) min((((((unsigned long long int) (unsigned char)123)) >> (((((/* implicit */int) max(((unsigned char)132), (((/* implicit */unsigned char) (signed char)63))))) - (115))))), (((/* implicit */unsigned long long int) (-(arr_11 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1]))))));
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) min((var_2), (arr_11 [i_0] [7LL] [i_2] [i_3] [i_4] [i_0 + 1] [i_4])))) : (min((((((/* implicit */_Bool) var_13)) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
                                var_18 -= var_10;
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_0] [i_2] [3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((short) arr_6 [i_0 + 2] [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) var_12);
}
