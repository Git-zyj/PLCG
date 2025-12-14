/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15248
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) -894819105)) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-72)), (var_1))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_11) >= (((/* implicit */int) (signed char)-72)))))) > (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (arr_0 [(_Bool)1]))) : (((arr_0 [i_0]) >> (((1704514331U) - (1704514283U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) arr_1 [i_0] [i_0]))))) - (1)))));
    }
    for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        var_19 = 2590452965U;
        /* LoopNest 2 */
        for (unsigned short i_2 = 4; i_2 < 10; i_2 += 1) 
        {
            for (unsigned int i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) 1704514332U)) ? (((/* implicit */int) (signed char)81)) : (var_14))), (((/* implicit */int) ((short) arr_9 [i_3] [(_Bool)1]))))) + (((/* implicit */int) ((arr_0 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_2] [i_3 + 1] [(signed char)3])) <= (((/* implicit */int) (signed char)-72))));
                        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)-30);
                        arr_16 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-127))));
                    }
                }
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) var_7);
}
