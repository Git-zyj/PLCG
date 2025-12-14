/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129213
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (var_3))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((0) / (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)44)) && (((/* implicit */_Bool) 4294967295U))))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(signed char)6]))))))))))));
        var_19 = ((/* implicit */signed char) -1303487735);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [15ULL] = ((/* implicit */int) ((unsigned char) -1484696593));
        var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(3779057856U))))));
                            arr_19 [i_5 - 2] [10] [i_4] [10] [10] [i_1] = (signed char)-127;
                            var_22 = arr_17 [i_5] [i_5] [i_3 + 2] [i_5 + 1] [i_3 + 2];
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    {
                        arr_24 [i_1] [i_6] [i_2] [i_1] [i_1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_7 + 1] [1U]))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_14))));
                        var_24 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7 - 2] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 1]))));
                        arr_25 [8ULL] [i_6] [i_6] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [3U] [3U] [i_7 + 2])) ? (((/* implicit */unsigned int) arr_14 [15] [i_7 - 1] [i_7 - 1])) : (arr_16 [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 2] [i_7 - 1])));
                        var_25 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_15)) ? (-1516554028) : (arr_14 [(unsigned char)14] [(unsigned char)14] [(signed char)10])))));
                    }
                } 
            } 
            arr_26 [i_1] [i_1] [i_1] = arr_4 [i_1];
        }
        var_26 = ((/* implicit */signed char) ((int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
        arr_27 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_16)) ? (var_13) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)45))))))));
    }
    var_27 |= ((/* implicit */unsigned int) (+((+(var_6)))));
}
