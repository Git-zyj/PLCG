/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107044
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_7))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_3 [i_0] [9U]))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [4U]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [(_Bool)1] [i_4]))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_9 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [0] [3U]))))))))));
                                arr_12 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3]))) : (arr_4 [(unsigned char)10] [7LL] [i_0])))) ? (((/* implicit */int) arr_8 [i_3] [5LL] [i_3])) : (((/* implicit */int) arr_10 [i_0] [(signed char)3] [i_2] [10ULL]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [(unsigned short)6] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_9 [3LL] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [(unsigned short)3] [(unsigned char)12])))) : (((arr_1 [i_0]) ? (arr_4 [5U] [2ULL] [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) (~(676675263U))))));
                                arr_13 [i_1] [i_3] [i_2] [(unsigned char)8] [i_1] [i_0] = ((/* implicit */unsigned int) arr_3 [1] [1]);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_8 [2U] [i_0] [i_0]))));
                arr_14 [10LL] [i_1] = ((unsigned int) arr_5 [i_0]);
            }
        } 
    } 
}
