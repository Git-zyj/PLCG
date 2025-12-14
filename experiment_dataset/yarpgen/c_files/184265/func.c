/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184265
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
    var_19 &= ((/* implicit */signed char) ((int) min((var_8), (((/* implicit */int) (unsigned short)24543)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_12 [(signed char)2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                                arr_13 [i_0 + 1] [i_2] [i_2 + 1] [i_3] [i_4] = ((/* implicit */signed char) var_7);
                                var_20 &= ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) (unsigned short)24544)), (arr_4 [i_1] [i_4])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = (~(((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [4] [i_0 - 2] [i_1])) >> (((arr_1 [(unsigned short)6]) + (3570658421070995025LL)))))) | (min((var_17), (((/* implicit */long long int) var_8)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_8);
}
