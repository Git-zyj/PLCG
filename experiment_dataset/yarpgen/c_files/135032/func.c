/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135032
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_5 [i_1 + 2] [i_2 + 1])))) ? (((/* implicit */int) ((arr_5 [i_1 - 2] [i_2 + 1]) >= (arr_5 [i_1 - 1] [i_2 + 1])))) : (((/* implicit */int) ((arr_5 [i_1 + 1] [i_2 - 1]) < (arr_5 [i_1 + 1] [i_2 + 2])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 4) 
                        {
                            arr_16 [i_4] [i_3] [i_2] [i_2] [16LL] [16LL] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0])) == (((/* implicit */int) (unsigned char)146)))))));
                            var_16 = (-(arr_6 [i_2]));
                        }
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_5 [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 + 1] [i_1 - 1])))), (((arr_10 [i_2] [i_1 + 1] [i_1 + 1] [i_2]) / (arr_10 [i_2] [i_1 + 1] [(unsigned char)15] [i_2])))));
                    }
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        var_18 -= ((((/* implicit */int) ((((/* implicit */int) (unsigned char)118)) <= (((/* implicit */int) (unsigned char)146))))) != (((((/* implicit */int) arr_8 [i_1 + 1] [i_2 + 1])) >> (((/* implicit */int) arr_8 [i_1 + 1] [i_2 + 1])))));
                        arr_19 [i_2] [i_1] [i_0] = (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_15 [(unsigned char)10] [i_1] [i_5] [i_5] [i_0] [i_2 + 2] [i_5]))));
                    }
                    for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [16U] [i_0] [i_0]))))) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2])) : (((/* implicit */int) (unsigned char)141)))) | (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_6 + 2])) ? (((/* implicit */int) arr_12 [6U] [i_6 - 2] [i_2 + 1] [i_1 + 1])) : (((/* implicit */int) arr_12 [8LL] [i_6 + 1] [i_2 - 1] [i_1 + 2])))))))));
                        arr_22 [i_2] [i_2 - 1] [i_2] = ((((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2] [(unsigned char)4] [(_Bool)1]))))) != (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) : (arr_7 [i_2] [i_2] [6LL]))))) ? ((-(arr_7 [i_2] [i_2 + 1] [i_6 + 1]))) : (((/* implicit */long long int) ((arr_2 [i_6 + 2]) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)134)))) : (arr_15 [i_0] [i_1] [i_1 + 2] [i_2 - 1] [i_2] [(_Bool)1] [(_Bool)1])))));
                    }
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */_Bool) ((long long int) var_13));
    var_21 &= ((/* implicit */unsigned char) var_1);
    var_22 = ((/* implicit */unsigned char) var_2);
}
