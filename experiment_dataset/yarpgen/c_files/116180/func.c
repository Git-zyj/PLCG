/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116180
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
    var_11 -= ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_12 [i_0 - 2] [0ULL] [0ULL] [i_0] [i_2]))))) != (((/* implicit */int) max(((unsigned short)65535), (arr_12 [i_0 - 2] [13] [13] [i_0] [13]))))));
                                var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0] [i_4])) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((((/* implicit */_Bool) (unsigned short)6396)) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) -8601790709903792893LL)))) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) arr_4 [i_3] [i_3] [i_0]))))))) : (((((/* implicit */unsigned long long int) (~(arr_6 [i_0] [i_0] [i_3] [6U])))) * (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (arr_5 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) ((short) (!((!(((/* implicit */_Bool) var_8)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)65)) && (((/* implicit */_Bool) var_4)))))) == (min((var_6), (((/* implicit */unsigned int) (unsigned short)6419)))))));
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (var_5)))) : (((unsigned long long int) (short)-1))))));
    var_17 ^= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((var_8) / (var_8))))))));
}
