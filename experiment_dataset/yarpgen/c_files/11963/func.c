/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11963
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0])) ^ (((/* implicit */int) (_Bool)1))))) ? (((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (_Bool)1)))))));
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((signed char)117), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (19U)))) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_22 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [(_Bool)1] [12U]))))) * (min((4049734033U), (((/* implicit */unsigned int) (unsigned char)207))))));
                    var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2] [i_2 - 1])))))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((long long int) arr_6 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)55757))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))) : (var_4))))));
                    arr_13 [i_4] [i_3] [i_2] |= ((/* implicit */signed char) ((unsigned short) -2147483647));
                    arr_14 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9750))))) - (((min((var_19), (((/* implicit */long long int) var_10)))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
