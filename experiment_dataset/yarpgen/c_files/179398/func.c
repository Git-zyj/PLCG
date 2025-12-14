/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179398
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) 32985348833280LL)) - (arr_8 [i_0 - 3] [i_0 + 1])))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_6))));
                                arr_13 [i_0] [i_1 - 2] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6035))) : (arr_8 [1ULL] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))), (var_18)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1012497142)) ? (((/* implicit */int) max((arr_2 [i_0] [i_1] [7ULL]), (((/* implicit */unsigned char) var_18))))) : ((+(-1012497136)))))) ^ (((unsigned long long int) (short)-6035)))))));
                }
            } 
        } 
    } 
    var_23 = var_12;
    var_24 = ((/* implicit */int) var_18);
}
