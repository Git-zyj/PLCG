/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162617
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
    var_20 = ((/* implicit */int) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_12 [(unsigned short)8] [(_Bool)1])))), (arr_5 [i_0 - 1] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((long long int) (unsigned short)52528)) : (((/* implicit */long long int) (-2147483647 - 1)))))));
                        arr_14 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] = ((/* implicit */unsigned short) 9223372036854775800LL);
                        var_22 &= ((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_0] [i_0])), (-1106783762)))) ? (max((((/* implicit */unsigned int) var_2)), (3201610264U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10))))))) : (((((_Bool) var_17)) ? (arr_3 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    }
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_4 + 2] = ((/* implicit */int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (arr_7 [i_0 - 1] [i_1])))) ? (arr_3 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_1] [i_1] [(unsigned char)15]))) : (6246563575785349523LL))))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_0 [0LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) arr_17 [(unsigned short)18] [i_1] [i_2] [i_4 - 1]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_13)))))));
                        var_24 = ((/* implicit */unsigned short) arr_1 [i_0 - 1]);
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)49)) || (((/* implicit */_Bool) 562056469)))))));
                    }
                    var_26 = ((/* implicit */int) ((arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1]) && (((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_0]))) : (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6246563575785349523LL))))))))));
                    arr_19 [i_0] [i_0] [1U] [i_2] = ((/* implicit */unsigned int) ((((arr_4 [i_0 - 1] [i_1 - 1]) ? (((/* implicit */unsigned int) var_11)) : (3201610264U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1 - 1]))))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((/* implicit */int) var_17)))))));
                }
            } 
        } 
    } 
}
