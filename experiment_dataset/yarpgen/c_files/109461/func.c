/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109461
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
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_4 [i_0 + 1] [i_1])), (arr_5 [i_0 - 1] [i_0] [i_0 + 2]))) % (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)36760)))))));
                    var_21 = (!(((/* implicit */_Bool) var_2)));
                    var_22 = ((/* implicit */unsigned short) 28LL);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [(unsigned char)10] [i_4] [(unsigned char)10] [i_2] = ((/* implicit */_Bool) var_19);
                                arr_13 [i_2] = ((/* implicit */unsigned long long int) var_3);
                                arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)39064)) | (((/* implicit */int) arr_4 [i_4] [i_0]))))))) ? ((~(((((/* implicit */_Bool) 2129929146059637606LL)) ? (((/* implicit */int) (unsigned short)36782)) : (((/* implicit */int) (unsigned short)11230)))))) : (((/* implicit */int) (unsigned short)16605))));
                                arr_15 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22170))));
                                var_23 = ((/* implicit */_Bool) ((((var_11) != (arr_11 [i_2]))) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_11 [i_2]))) : (arr_11 [i_2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_13))));
    var_25 -= ((/* implicit */long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28753))))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28775)) || (((/* implicit */_Bool) var_16)))))))));
}
