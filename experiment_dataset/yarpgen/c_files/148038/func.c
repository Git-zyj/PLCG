/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148038
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12284)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (arr_0 [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((var_7) > (var_0))) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)-116))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) arr_6 [i_2]);
                var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))))))) >> (((((((/* implicit */_Bool) -29388083)) ? (((arr_8 [i_3] [0U] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -806722661)) & (var_0)))))) - (16258586721114327824ULL)))));
            }
        } 
    } 
}
