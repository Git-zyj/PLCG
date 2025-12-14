/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130262
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
    var_18 = (!(((/* implicit */_Bool) (+(916756515)))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((1145824598) - (((/* implicit */int) (signed char)-16))))) : (min((arr_7 [i_1 + 2] [2U]), (((/* implicit */long long int) (unsigned short)6707))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551614ULL) + (((/* implicit */unsigned long long int) -4871379966556946682LL))))) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (5854223536339966185LL)))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16376)))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_17))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1]) < (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_4])))))))))));
                                var_21 = ((/* implicit */_Bool) arr_7 [i_0] [i_1]);
                            }
                        } 
                    } 
                    arr_15 [(short)7] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_0 + 4])) + (18292)))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1]))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_2 [i_2]))));
                    arr_16 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_15))));
                }
            } 
        } 
    } 
}
