/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160640
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (11108669096166755087ULL)))))))));
                    var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_2 [i_1] [i_0]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)6))))) > (((((/* implicit */_Bool) arr_5 [(unsigned short)7] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_3 [9ULL])))))) : (((/* implicit */int) ((((unsigned int) arr_1 [i_1])) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))))));
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [2U]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : ((~(((/* implicit */int) arr_0 [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    var_13 |= max((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_1)), ((unsigned char)6)))) ? (max((var_4), (((/* implicit */long long int) (unsigned char)250)))) : (((((var_4) + (9223372036854775807LL))) >> (((var_9) - (16280030771133795412ULL))))))));
    var_14 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)31))))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >> (((((/* implicit */int) var_5)) - (42))));
}
