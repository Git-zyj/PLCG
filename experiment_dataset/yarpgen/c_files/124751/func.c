/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124751
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
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (short)21994);
                                var_17 = max((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9199861417584380388ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-21994))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (2368109575919897530ULL) : (var_11))), (((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) var_3))))))))));
                    arr_13 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((16078634497789654085ULL) >> (((((/* implicit */int) (short)21993)) - (21982)))));
                    var_19 = ((/* implicit */short) 18446744073709551615ULL);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)61294), (var_13)))) ? (max((0ULL), (((/* implicit */unsigned long long int) (signed char)-127)))) : (((((/* implicit */_Bool) 2429748689U)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20000)))))))));
}
