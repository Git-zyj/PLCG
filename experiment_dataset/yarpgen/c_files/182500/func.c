/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182500
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)190))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)105))) ? (((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])) >> (((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 1] [i_2 + 3])) <= (((/* implicit */int) arr_5 [i_0 - 1] [i_2 + 2])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (signed char)20))));
                                var_21 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_4] [i_3 + 1] [i_4])) : (((/* implicit */int) arr_9 [i_3 - 1] [i_4 - 1] [i_4 - 1] [5LL])))) / (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_1]))));
                                arr_13 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (signed char)3);
                                arr_14 [i_0 - 1] [5ULL] [12LL] [i_3 - 2] [9LL] [i_4] [12LL] = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)3))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned long long int) var_8)))) / (((/* implicit */unsigned long long int) var_9))))));
    var_23 = ((/* implicit */unsigned long long int) var_11);
}
