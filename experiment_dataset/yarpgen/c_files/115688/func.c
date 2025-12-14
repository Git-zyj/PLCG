/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115688
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
    var_17 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(signed char)8] [(unsigned char)4] [4U] [8ULL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [8U] [i_1] [8U]))))) ? ((+(3163602351U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 1])))))) ? ((+(arr_6 [i_1] [(_Bool)1]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [5U]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [(signed char)8]))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63))) : (3163602332U)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (1566680809U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((((/* implicit */_Bool) 1131364972U)) ? (1131364950U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                arr_15 [i_3] = ((/* implicit */int) (!(max((((_Bool) arr_4 [(_Bool)1] [(signed char)4] [5U])), ((!(((/* implicit */_Bool) 1131364953U))))))));
                                arr_16 [i_3] [(signed char)2] [8U] [(signed char)2] [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_4 - 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */short) ((((/* implicit */int) var_7)) << (((((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) (signed char)116)) - (var_5))))) - (78260393)))));
    var_21 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_9)) : (((int) var_2))))) | (var_8)));
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(var_5)))), (var_16)))) >= (var_0)));
}
