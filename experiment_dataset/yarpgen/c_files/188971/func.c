/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188971
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])))))));
        arr_2 [i_0 + 1] = ((/* implicit */signed char) ((((arr_1 [i_0] [i_0 + 1]) / (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= ((+(arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [6ULL] [i_0])) ? (374524729) : (arr_1 [i_0] [(unsigned short)4])))) : (1002495536U)))));
        arr_4 [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_1 [i_0 + 1] [(unsigned short)10])))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((-2147483647 - 1)) : (2147483647)))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((-(arr_1 [i_0] [i_0 + 1]))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 14U)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (arr_1 [i_0] [i_0 + 1]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_2])) : (arr_7 [i_1] [i_2])))) ? ((~(arr_7 [i_1] [i_1]))) : (((((arr_7 [i_1] [i_2]) + (2147483647))) << (((((/* implicit */int) arr_0 [i_1] [i_2])) - (28962)))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_2])))) : (((arr_7 [i_2] [i_1]) - (-1634408057)))));
            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-24226)) ? (((/* implicit */int) (short)9959)) : (((/* implicit */int) (unsigned short)0))));
        }
        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((((/* implicit */_Bool) 3292471760U)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (signed char)-105)))) : (((((/* implicit */int) (short)0)) % (((/* implicit */int) arr_5 [i_1]))))))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            {
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_3]))))) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_3])) ? ((~(((/* implicit */int) (signed char)-61)))) : (((/* implicit */int) arr_14 [i_3])))) : (((/* implicit */int) arr_14 [i_3]))));
                arr_17 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4] [i_3])) ? (((/* implicit */int) arr_15 [i_4] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3]))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_16 [(short)4] [(short)4]))));
            }
        } 
    } 
    var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : ((-(((((/* implicit */_Bool) 1588003879)) ? (var_8) : (var_11)))))));
}
