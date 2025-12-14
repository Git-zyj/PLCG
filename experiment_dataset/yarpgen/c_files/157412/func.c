/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157412
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
    var_11 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))) : (((long long int) var_9)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) ((((/* implicit */_Bool) -1884533893)) && (((/* implicit */_Bool) -489878463734055746LL))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(var_8)))), (15951761909252944489ULL)));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) -489878463734055734LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_1]))))) : (var_6));
                                arr_18 [11LL] [i_0] [9] [9LL] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3ULL)))))));
                                arr_19 [i_0 - 1] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */long long int) var_1);
                                arr_20 [i_0] [(unsigned char)15] [i_2] [(unsigned char)15] [i_3] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 489878463734055746LL))))), (max((((/* implicit */unsigned int) (unsigned char)192)), (arr_15 [i_0] [i_1] [i_0] [i_3] [i_0])))))), (((((/* implicit */unsigned long long int) 1324769638U)) ^ (14636643107600960067ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 &= ((/* implicit */unsigned short) ((short) (-(2147483647ULL))));
    var_13 += ((/* implicit */_Bool) var_7);
    var_14 = ((/* implicit */_Bool) (unsigned short)20245);
}
