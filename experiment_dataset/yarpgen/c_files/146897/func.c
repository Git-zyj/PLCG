/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146897
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((unsigned int) var_17)) : (((3908779342U) >> (((18446744073709551615ULL) - (18446744073709551586ULL)))))))) ? (var_1) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3 + 3] [0LL] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_7 [(unsigned short)15] [i_3] [i_2] [i_0])))), (((((((/* implicit */int) arr_3 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_4] [i_2] [i_0] [i_0])) + (111))))))));
                                var_20 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((var_16) + (9223372036854775807LL))) >> (((((((((/* implicit */_Bool) 386187954U)) ? ((-2147483647 - 1)) : ((-2147483647 - 1)))) - (-2147483611))) + (46)))))), (((((/* implicit */_Bool) -2147483637)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned long long int) (signed char)-33)), (var_10)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((max((max((var_1), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) (~(-4897975124376432101LL)))))) >> ((~(((/* implicit */int) ((signed char) 2147483647)))))));
            }
        } 
    } 
}
