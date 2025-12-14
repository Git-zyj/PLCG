/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145773
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
    var_11 = (signed char)-21;
    var_12 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (min((var_3), (((/* implicit */unsigned short) var_9))))))) >> (((var_0) - (1399616412U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) min((arr_2 [i_0 - 1] [i_0 - 2]), (((/* implicit */long long int) 1265109174U))))) && (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_10)), (1265109174U))) - (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3029858121U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 9223372036854775807LL);
            }
        } 
    } 
    var_13 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) max((var_9), ((signed char)40)))) ? (3029858135U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))))))));
}
