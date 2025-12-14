/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119777
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) var_0);
                var_17 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)32767)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                var_18 = var_13;
                arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (2577073712U) : (max((489614885U), (((/* implicit */unsigned int) (short)-30334)))))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) (short)(-32767 - 1))))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned short) max((((/* implicit */long long int) arr_11 [i_2] [i_3] [(short)2])), (144097595889811456LL)))))));
                arr_13 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_7)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) (unsigned char)172)) - (134)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((~(var_11)))))) ? (min((min((var_9), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((signed char) (unsigned char)11))))) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) & (max((-144097595889811459LL), (((/* implicit */long long int) (short)22359))))))));
    var_21 *= var_14;
    var_22 = ((/* implicit */long long int) var_3);
}
