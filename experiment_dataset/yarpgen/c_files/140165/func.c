/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140165
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
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)15))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned short)24708)) : (((/* implicit */int) (unsigned short)26043)))) >> (((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)127)))) - (220)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)136))))) >= (var_1)))) : (((int) (+(var_14))))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (max((((unsigned long long int) arr_5 [i_1] [i_1] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (var_14)))))))))));
                var_17 -= ((/* implicit */int) (+(min((((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (unsigned char)7))))), (var_4)))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65530))))) : (var_5))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        arr_10 [i_2 + 1] [i_2] = ((/* implicit */unsigned short) (unsigned char)151);
        arr_11 [i_2 + 1] [i_2] = ((/* implicit */unsigned int) arr_8 [i_2 - 1]);
        var_19 = ((/* implicit */int) var_4);
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_18 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_3 + 1]))));
                    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) 1107600260U)) ? ((-(16777215))) : (((/* implicit */int) (signed char)-110))))));
                    var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1] [i_3 + 4]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 3; i_5 < 19; i_5 += 4) 
    {
        arr_22 [i_5 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))));
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_17 [i_5 - 3] [i_5 + 3] [i_5] [i_5])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_9 [i_5 + 3])))));
        arr_23 [i_5 + 2] = (-(((/* implicit */int) arr_4 [i_5 - 2])));
        arr_24 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned short) (-((~(arr_9 [i_5])))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13286)) ? (arr_5 [i_6] [i_7] [i_7]) : (arr_5 [i_6] [i_7] [i_6]))))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_6])))))));
        }
        arr_29 [i_6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (var_4)))));
        var_25 = ((/* implicit */signed char) var_5);
        arr_30 [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_27 [i_6] [i_6] [i_6]))));
        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_6] [i_6]))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)10)) : (var_3))) & (0))) >= ((-(((/* implicit */int) var_11))))));
}
