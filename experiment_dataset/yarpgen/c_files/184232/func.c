/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184232
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 2])) ? (((arr_1 [i_0] [i_0 + 2]) >> (((var_10) - (697962031))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((arr_0 [i_0 - 2] [i_0 + 2]) != (arr_0 [i_0 + 2] [i_0 + 1]))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1]);
        var_17 = var_4;
    }
    for (signed char i_2 = 4; i_2 < 8; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (max((-1005140500), (((/* implicit */int) arr_7 [i_2 - 2])))) : (((/* implicit */int) arr_7 [i_2])))), ((-(((/* implicit */int) ((var_7) != (var_10))))))));
        var_18 = ((/* implicit */signed char) arr_8 [i_2]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_17 [i_2 + 2] [i_3] = ((/* implicit */_Bool) ((signed char) max((arr_10 [i_2 - 4] [i_2 - 4]), (arr_10 [i_2 + 2] [i_3]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        arr_20 [i_2] [i_3] [i_5] = (unsigned char)65;
                        arr_21 [i_2 - 1] [i_5] [i_5] = (unsigned char)89;
                        var_19 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (arr_12 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_20 = ((((/* implicit */int) (unsigned char)65)) != (((/* implicit */int) arr_16 [i_2 + 2] [i_2 + 2] [i_4] [i_2 + 2])));
                        arr_24 [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)167))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) arr_10 [i_2 + 4] [i_2 + 4]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_27 [i_2] [i_3] [i_4] [i_4] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_7]), (arr_8 [i_3])))) ? (((/* implicit */int) max((arr_18 [i_4] [i_3]), ((unsigned char)87)))) : (((/* implicit */int) (unsigned char)88))))) ? ((-(((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 2])))) : ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_7])))))));
                        arr_28 [i_2] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) var_9)) : (min((arr_12 [i_7] [i_4]), (((/* implicit */unsigned int) (unsigned char)65))))))) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (signed char)92))));
                        arr_29 [i_2] [i_2] [i_4] [i_7] [i_7] = ((/* implicit */_Bool) (unsigned char)88);
                        arr_30 [i_2 - 4] [i_7] [i_4] [i_7] = max((((/* implicit */int) (unsigned char)41)), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_7] [i_4])) : (((/* implicit */int) (unsigned char)181)))), (((/* implicit */int) arr_10 [i_2 - 3] [i_2 - 4])))));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2 - 3]))))))) ^ (((/* implicit */int) arr_11 [i_2] [i_2])))))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_12)))))) : (((/* implicit */int) (unsigned char)93))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_12))));
}
