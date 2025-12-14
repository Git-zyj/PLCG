/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154650
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) (unsigned char)0)) ? (var_17) : (((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */_Bool) 2415979182667407272ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-88)))) : (((/* implicit */int) arr_2 [i_1 - 1])))));
                var_19 ^= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)32)))), (((/* implicit */int) arr_2 [i_0]))));
                arr_6 [i_0] [(short)10] = ((/* implicit */unsigned int) (((((~(var_12))) + (2147483647))) >> ((((~(((/* implicit */int) (short)511)))) + (530)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 22; i_3 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? ((~(arr_7 [i_3 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) 1464902935)) || (((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 - 3])))))));
                var_21 = ((/* implicit */signed char) 12496830341277551698ULL);
                arr_12 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) * (54043195528445952ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) & (((/* implicit */int) (short)540)))))));
                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-58))));
                var_23 += 9221120237041090560ULL;
            }
        } 
    } 
}
