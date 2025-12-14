/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17722
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
    var_12 = var_10;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [1ULL] [(signed char)15] [(unsigned char)3] [i_3] [i_1] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_3] [i_3 + 1])), (((((/* implicit */_Bool) arr_1 [i_0] [i_3 + 1])) ? (((/* implicit */int) arr_1 [i_0] [i_3 - 1])) : (((/* implicit */int) var_0))))));
                                arr_12 [i_0] [i_1] [i_3] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (3762369367051638245LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                                arr_13 [i_0] [i_0] [i_1] [8ULL] [i_2] [(unsigned char)24] [i_1] = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1] = var_5;
                arr_15 [i_0] = ((/* implicit */unsigned short) ((short) max((var_8), (var_8))));
            }
        } 
    } 
}
