/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144644
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
    var_16 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4386475349245454604LL)));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (-1438682009)))) ? (((/* implicit */int) (unsigned char)84)) : (arr_0 [i_0] [i_0])));
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (unsigned char)112))));
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) arr_0 [i_1] [i_1]);
        var_19 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-106)) >= (((/* implicit */int) (unsigned char)165)))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) min((arr_0 [i_1] [i_1]), (((/* implicit */int) arr_3 [i_1]))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            arr_13 [6U] [i_3] &= ((/* implicit */short) 1461594345U);
            var_20 = ((/* implicit */short) 2342133110U);
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_21 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 1438681994)) >= (arr_14 [i_2 + 2] [11LL]))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */long long int) arr_16 [i_2 - 1] [i_4] [(short)8] [i_6])) / (var_9)));
                        var_23 *= ((/* implicit */int) ((arr_10 [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_5])))));
                        arr_21 [i_5] [4] [i_2 + 3] [i_2] &= ((/* implicit */unsigned int) arr_16 [i_6 - 2] [i_4] [i_5] [i_6]);
                        var_24 = ((/* implicit */long long int) (+(arr_1 [i_6 - 1])));
                    }
                } 
            } 
        }
        var_25 = ((((var_6) * (arr_14 [i_2] [i_2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2 + 3] [i_2]))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_4))));
        arr_22 [i_2] = ((/* implicit */long long int) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((var_5) | (((/* implicit */unsigned int) -1438681991)))))));
    }
    for (int i_7 = 1; i_7 < 10; i_7 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_1))));
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned char) (+(arr_14 [i_7 + 1] [i_7])));
        var_28 = ((/* implicit */short) ((max((arr_1 [i_7 - 1]), (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [i_7]))))))) & (((/* implicit */unsigned long long int) arr_18 [i_7 - 1] [i_7] [i_7]))));
    }
}
