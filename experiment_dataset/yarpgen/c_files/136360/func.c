/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136360
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-32759)), (arr_2 [(unsigned short)0] [i_0])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))) ? (max((arr_11 [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) || (((/* implicit */_Bool) ((short) (unsigned short)35291)))))))));
                                arr_13 [i_2] [(unsigned char)9] [i_3] [i_2] [i_1] [i_1] [i_0] = ((unsigned long long int) var_12);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
    var_19 = ((/* implicit */unsigned int) min(((+(var_6))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
}
