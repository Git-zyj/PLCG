/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130759
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
    var_12 = ((/* implicit */unsigned char) var_8);
    var_13 = ((/* implicit */unsigned short) var_1);
    var_14 ^= var_8;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_15 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15185)) && (((/* implicit */_Bool) var_7))));
                arr_7 [i_0] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)75)) || (((/* implicit */_Bool) (~(1048512U))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_13 [i_1]);
                                arr_18 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1]))) + (((long long int) (unsigned char)181)))) : (arr_0 [i_0])));
                                arr_19 [i_0] [i_1] [i_2] [i_3 - 2] [i_0] [i_1] [i_3 - 2] = ((/* implicit */long long int) ((arr_11 [i_1] [i_1] [i_2] [i_3] [i_4]) > (((/* implicit */unsigned long long int) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
