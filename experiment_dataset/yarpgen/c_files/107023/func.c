/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107023
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((min((arr_0 [i_0 - 2]), (((/* implicit */unsigned int) var_2)))), (arr_0 [i_0])));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [0U] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)31);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (~(min((arr_6 [i_0] [i_1]), (arr_6 [i_2] [i_1]))))))));
                        var_17 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) && (((/* implicit */_Bool) 2147483647)))))));
                        arr_12 [i_0] [10] [i_2] [10] = ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_3]))) : (var_8))) < (((/* implicit */unsigned int) min((arr_8 [i_0 - 2] [i_3] [i_1]), (((/* implicit */int) var_14)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (short)23758))))))) ? (min((min((var_6), (((/* implicit */long long int) arr_4 [i_0])))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]))))))) : ((~(-7566554410683443105LL)))));
                        arr_16 [i_0] = -934332462;
                        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) min((arr_11 [i_0 - 1]), (arr_11 [i_0 - 2])))) : (arr_3 [i_1] [0LL])));
                    }
                }
                var_19 -= ((/* implicit */short) min((min((arr_3 [i_0 + 1] [(unsigned short)12]), (((/* implicit */unsigned int) arr_7 [i_0] [14ULL] [i_0] [i_0 - 3])))), (min((arr_3 [i_0 + 2] [2U]), (arr_0 [i_0 + 2])))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_12))))));
}
