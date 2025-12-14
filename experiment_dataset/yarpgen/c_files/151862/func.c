/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151862
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) ((signed char) var_14)))), (((((((/* implicit */int) var_1)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (var_13))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)6740)) : (((/* implicit */int) (unsigned char)1))))))) ? (((((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 2])) | (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))) : ((+(((int) 2145532910)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_3))));
                        var_18 *= ((/* implicit */unsigned int) (short)0);
                        arr_11 [i_2] [i_2] [(_Bool)1] = ((/* implicit */int) (~((-(((unsigned long long int) (unsigned char)46))))));
                        arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_2);
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_11))));
                                var_20 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [20] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_1 - 3])) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 3])) : (var_4)))) ? (-1807554377) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_14 [(unsigned char)23] [i_1 - 1] [i_1 - 1] [(_Bool)1] [i_1])))))));
                }
            } 
        } 
    } 
}
