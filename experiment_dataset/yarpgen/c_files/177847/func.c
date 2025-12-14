/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177847
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
    var_11 = ((/* implicit */int) (+(var_5)));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((11U) >> (((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (1962806251U)))))) ? (var_3) : (var_9)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 1] [i_2] [i_3])))))) > (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_2] [i_3])) ? (arr_10 [i_1 + 1] [i_2] [i_1 + 1] [i_3]) : (((/* implicit */unsigned long long int) var_3))))));
                                var_14 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_1] [i_0] [i_4]);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-1133))) ^ (var_6)))));
            }
        } 
    } 
}
