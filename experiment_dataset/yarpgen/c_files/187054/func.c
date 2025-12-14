/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187054
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2]), (arr_6 [i_2 + 2] [i_2 - 3] [i_2 - 4]))))));
                            var_16 += ((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 3])) ^ ((~(((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)32640)) / (2075294744))) / (((/* implicit */int) arr_10 [1ULL] [i_0] [i_1] [12ULL]))));
                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_0] [(signed char)8] [i_1] [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4])))))));
        var_20 |= ((/* implicit */unsigned int) arr_12 [i_4]);
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_12 [i_4])) * (((/* implicit */int) arr_12 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4])))))));
    }
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_7))));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_11 [i_5])), ((((-(((/* implicit */int) var_14)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)2471)))))))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_15 [2LL] [i_5]))))) * ((+(var_8))))))));
        var_25 = ((/* implicit */short) var_2);
    }
    var_26 = ((/* implicit */long long int) var_3);
}
