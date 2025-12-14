/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12932
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
    var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))) + (var_8));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))));
                        var_17 = var_5;
                        var_18 = ((/* implicit */signed char) arr_3 [i_1 - 1] [i_3 + 1] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (var_8) : (var_10))))));
                            var_20 = ((/* implicit */signed char) arr_15 [i_0] [i_3] [(_Bool)1]);
                            var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (((((/* implicit */_Bool) -1208643397)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) var_12)) : (arr_0 [(unsigned char)3])))) && (((/* implicit */_Bool) (~(26ULL))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 686386220)) ? (-1208643384) : (-1208643381)))) && (((/* implicit */_Bool) ((unsigned long long int) 1208643397)))));
                            arr_19 [i_0] [i_0] [i_3 - 1] [i_0] = 1208643383;
                            var_24 = ((/* implicit */int) var_0);
                        }
                    }
                    var_25 = ((/* implicit */signed char) arr_14 [i_1] [i_1 + 1] [i_0] [i_1] [i_1 + 1] [i_2]);
                    var_26 = ((/* implicit */unsigned long long int) (((-(-13))) << ((+(((/* implicit */int) (unsigned char)0))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */short) arr_23 [i_6 + 1]);
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((max((((/* implicit */unsigned long long int) var_0)), (var_8))) + (((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6 + 2] [i_7]))) : (var_2))))), (((((/* implicit */_Bool) ((unsigned long long int) (short)0))) ? (((/* implicit */unsigned long long int) ((int) var_8))) : (((unsigned long long int) var_6)))))))));
            arr_29 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)-124)))) % ((~(((/* implicit */int) arr_26 [i_6 + 2] [i_6 + 2] [i_7]))))))) | (((18446744073709551601ULL) >> (((((/* implicit */int) (signed char)-1)) + (63)))))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_13)))))) & (arr_23 [i_6])));
        }
    }
    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
    {
        var_29 -= ((/* implicit */int) ((max((0U), (((/* implicit */unsigned int) (-2147483647 - 1))))) / (min((arr_22 [i_8 - 1]), (arr_22 [i_8 + 2])))));
        var_30 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_12)), ((-(arr_27 [i_8 - 1] [i_8 + 2] [i_8 + 1])))));
        var_31 = max((max((((/* implicit */unsigned int) var_9)), (((((/* implicit */unsigned int) ((/* implicit */int) (short)3))) | (var_12))))), (((/* implicit */unsigned int) arr_28 [i_8] [i_8 + 2])));
    }
}
