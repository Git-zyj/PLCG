/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120998
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [(unsigned short)4] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))) >= (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (28LL))))))) : (-29LL)));
                                arr_13 [i_0] [i_1] [14ULL] [i_1] [i_4] &= ((/* implicit */unsigned short) (-(28LL)));
                            }
                        } 
                    } 
                    var_10 ^= 416304637U;
                    var_11 = ((/* implicit */unsigned short) ((((((3119569434700141785ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42098))))) + (((/* implicit */unsigned long long int) (~(749125906)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [10U] [i_0 + 4] [i_2])))));
                    var_12 &= ((/* implicit */long long int) (signed char)80);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((min((var_1), (((/* implicit */long long int) ((-441399908) / (((/* implicit */int) (unsigned char)112))))))), (((/* implicit */long long int) (unsigned short)17942))));
}
