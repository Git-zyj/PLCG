/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157561
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)74)) < (((/* implicit */int) (short)21019))));
                                var_13 = ((/* implicit */unsigned long long int) max((var_7), ((!(arr_4 [i_1] [i_1])))));
                                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_4 - 4]), (arr_3 [i_4 - 4])))) ? (((/* implicit */long long int) arr_3 [i_4 - 2])) : ((+(arr_13 [i_2 + 2])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-11137)) : (((/* implicit */int) var_7))))), (min((3017029222U), (((/* implicit */unsigned int) arr_10 [i_0 - 3]))))));
                }
            } 
        } 
        var_16 ^= min((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_13 [i_0]))) : (min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) (short)21019)))))), (((/* implicit */long long int) var_10)));
        var_17 = var_6;
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27825)) ? ((~(((/* implicit */int) arr_11 [i_0 + 4] [i_0 - 3])))) : ((+(((/* implicit */int) var_0))))));
    }
    var_19 ^= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 4039891964U)) ? (var_2) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)768))));
}
