/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102206
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
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */signed char) var_16);
                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((/* implicit */int) ((var_16) == (var_16))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (unsigned char i_3 = 4; i_3 < 10; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((int) var_17))) ? (arr_17 [i_2] [i_5 - 1] [i_4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 4]))))), (((/* implicit */unsigned long long int) var_12))));
                                arr_21 [i_3] = ((/* implicit */signed char) var_2);
                                arr_22 [i_3] [i_3 - 4] [i_3 - 4] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_15 [i_2 + 2] [i_3] [i_4] [(unsigned char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)25171)))) : (arr_19 [i_5 + 2] [i_5] [i_5] [i_2] [i_2 - 1] [i_2])))));
                            }
                        } 
                    } 
                    arr_23 [i_3] [i_3 - 1] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) var_4)), ((-(arr_12 [i_2 + 2])))))));
                    arr_24 [i_2] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (unsigned short)25171)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((~(var_11))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_21 = ((/* implicit */long long int) var_5);
}
