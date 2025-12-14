/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187678
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
    var_16 *= ((/* implicit */unsigned short) var_8);
    var_17 = ((/* implicit */short) var_7);
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 58720256U)) ? (((/* implicit */int) (short)16647)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4236247039U)))))))) && (((/* implicit */_Bool) 4236247039U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (short)27978))))) ? (arr_3 [22U] [22U]) : (((/* implicit */unsigned int) 1071644672)))))));
                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 7323802086672463378ULL)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (short)63)))), (((int) arr_5 [i_1] [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
    {
        for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_14 [20LL] &= ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_2 - 1])))) & (((/* implicit */int) arr_7 [i_2 - 1]))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2] [2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((-(3758096384U)))));
                    var_22 = ((/* implicit */unsigned short) ((unsigned int) var_14));
                }
            } 
        } 
    } 
}
