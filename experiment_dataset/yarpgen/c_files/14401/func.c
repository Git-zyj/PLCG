/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14401
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : ((-(18446744073709551615ULL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((18446744073709551603ULL) / (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_1);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_2)) - (81)))))))))) - (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7102))) : (0ULL))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_16 ^= ((/* implicit */_Bool) var_1);
}
