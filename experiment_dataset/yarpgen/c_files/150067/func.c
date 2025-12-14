/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150067
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((arr_4 [i_0] [i_1 - 1]) >> (((arr_4 [i_0] [i_1 + 1]) - (5165163444030519964LL)))))) : (((/* implicit */_Bool) ((((arr_4 [i_0] [i_1 - 1]) + (9223372036854775807LL))) >> (((((arr_4 [i_0] [i_1 + 1]) + (5165163444030519964LL))) + (511744210578619182LL))))));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) arr_5 [i_1 + 1] [20] [20])) : (4294967295U)));
            var_17 |= ((short) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)4])))));
            var_18 = ((/* implicit */int) (~(var_7)));
            var_19 -= var_0;
        }
        for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1] [i_0 - 1])) ? (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)21))));
            arr_11 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_2 [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_4 [i_0] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2])))))));
        }
        for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) var_8);
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_18 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_0 + 2] [i_3 + 3]))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : ((+(arr_4 [i_0] [i_0])))));
            }
        }
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0 + 1]);
    }
    for (signed char i_5 = 4; i_5 < 16; i_5 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [(signed char)12] [i_5 - 2]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-108)))))) ? ((+(arr_4 [(unsigned short)0] [i_5 - 3]))) : (((/* implicit */long long int) (~(arr_5 [i_5 - 1] [i_5 - 4] [i_5]))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (signed char)110)), (arr_4 [i_6] [i_6]))), (((/* implicit */long long int) arr_8 [i_6]))))), (((unsigned long long int) ((arr_2 [i_6]) ? (((/* implicit */int) arr_3 [i_5 - 2] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1)))))));
            var_24 = ((/* implicit */signed char) min(((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))))), ((+(((/* implicit */int) min((var_10), (arr_8 [i_6]))))))));
        }
        for (int i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            var_25 *= ((/* implicit */short) ((arr_24 [(signed char)10]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [(signed char)18])) >= (((/* implicit */int) arr_25 [i_5] [13LL] [i_7]))))) != (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_26 [6U] [6U] [i_7])))))))))));
            arr_27 [i_5] [i_7 + 2] [i_7] = ((/* implicit */long long int) var_6);
        }
        arr_28 [i_5] = ((/* implicit */short) (signed char)-103);
    }
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((((/* implicit */long long int) ((short) (+(((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((4323671325409990065LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)94))))))))))));
    var_27 = ((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) (signed char)108)))), (((/* implicit */int) max((((/* implicit */short) var_11)), (var_13)))))));
}
