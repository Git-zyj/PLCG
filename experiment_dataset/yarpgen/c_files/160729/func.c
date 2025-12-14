/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160729
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0])))));
                var_10 -= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */_Bool) 4221737600U)) ? (8880696299092279716ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) - (8880696299092279686ULL)))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) > (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), ((-2147483647 - 1))))) : (((((/* implicit */unsigned long long int) var_5)) + (((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((var_5) >= (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */int) max(((short)-15202), ((short)14336)))) ^ (((/* implicit */int) max((var_1), (((/* implicit */short) var_9)))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_9)), ((-2147483647 - 1)))) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)0)))))) : (var_5)));
    var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min(((short)(-32767 - 1)), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (max((2009432717U), (((/* implicit */unsigned int) (unsigned short)49755)))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((((/* implicit */int) var_4)) / (((/* implicit */int) var_9)))))))));
}
