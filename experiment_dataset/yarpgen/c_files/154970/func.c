/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154970
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
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((arr_9 [i_0] [i_1] [i_0] [i_0]) < (((/* implicit */int) arr_6 [(short)9]))))))), (((arr_8 [i_0] [i_1] [i_2]) / (((/* implicit */int) (short)-2166))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) var_11))))))) ^ (min((arr_7 [i_0 + 1] [i_1]), (((/* implicit */long long int) (signed char)106))))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((short) max((arr_15 [i_0 + 1] [i_0 - 1] [i_1] [i_4] [6] [i_4] [i_4]), (((/* implicit */long long int) arr_6 [i_2]))))))));
                                arr_18 [i_0] [23] [i_2] [i_1] [i_0] = var_9;
                                var_17 ^= ((((/* implicit */_Bool) ((((((-1) + (2147483647))) >> (((((/* implicit */int) (signed char)89)) - (89))))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_5)))))))) ? (((arr_8 [i_0] [i_0] [i_0 - 1]) / (arr_2 [i_0 + 1]))) : (((((/* implicit */int) ((arr_12 [i_0] [i_1] [i_1] [i_3] [0] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) var_11)))))) >> (((((/* implicit */int) var_9)) & (arr_3 [i_0] [i_1]))))));
                                arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                    var_18 ^= ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)74)) < (((/* implicit */int) (signed char)-74))))), ((signed char)74))))) / (min((arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [(_Bool)1] [i_0 + 1]), (arr_15 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (short)-20120)) : (((((/* implicit */_Bool) ((((var_12) + (2147483647))) << (((var_13) - (1130035914)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (98797049))) : (((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */int) var_4)))))))))));
    var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_7)) : (var_13)))))) ? (((int) (+(((/* implicit */int) (short)-32763))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) 8)) ^ (-5780011198223161641LL)))) ? (((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((signed char) var_5)))))));
    var_21 = ((/* implicit */_Bool) var_6);
}
