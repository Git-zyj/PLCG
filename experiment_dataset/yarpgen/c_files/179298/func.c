/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179298
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
    var_13 = ((/* implicit */long long int) min((var_13), ((-(((((((/* implicit */int) var_8)) != (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) max((var_6), (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = min((((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_15 ^= max((((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [5LL] [i_3 + 2] [i_3 + 2] [i_3 + 4])) && (((/* implicit */_Bool) var_1))))), (min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)-77))))))), (arr_0 [(short)18] [i_0]));
                            var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 439905669)) ? ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_0]))))))) : (max((((/* implicit */int) var_5)), (var_7)))));
                            var_17 = ((/* implicit */unsigned int) var_6);
                            var_18 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2] [4ULL] [(signed char)23])) : (((/* implicit */int) var_10))))), (min((var_4), (((/* implicit */unsigned long long int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]))))));
                            var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((14554100460519978693ULL), (((/* implicit */unsigned long long int) (signed char)-106))))) ? (2147483622) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1 + 1] [(signed char)5])))), (((/* implicit */int) (short)19215))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (var_3))) | (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)221)) != (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (-1677589998)));
    var_21 = ((/* implicit */short) var_2);
}
