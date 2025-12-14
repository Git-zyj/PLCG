/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115781
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)20388)), (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-2)), (var_2)))) ? (((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) (unsigned short)45137)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_7)))))))))));
    var_15 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) / (var_8))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_9)) * (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_3 [i_1]))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 4; i_2 < 18; i_2 += 4) 
                {
                    arr_9 [(unsigned short)14] [i_2] [i_0] [i_2] = ((long long int) arr_2 [i_2 - 3] [i_0]);
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (short)-19)))))) <= (min((((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))))));
                }
                /* vectorizable */
                for (short i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_12 [i_3] [i_0] [(short)5] [(short)5]));
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [8ULL]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (arr_6 [(short)8] [i_3 - 2] [i_3] [i_0]));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (signed char)7))));
                    var_19 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_3]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), ((signed char)44)));
                                var_21 = ((/* implicit */unsigned short) 12987270213784136869ULL);
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_22 = max(((unsigned short)52870), (((/* implicit */unsigned short) min((arr_8 [i_0] [i_0] [i_6]), (arr_8 [i_0] [i_0] [i_6])))));
                    arr_23 [i_6] [14ULL] [(signed char)10] [i_0] = ((/* implicit */signed char) arr_17 [(short)15] [(short)15] [i_0]);
                    var_23 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_7)), (arr_20 [i_0] [i_0] [i_6]))) << (((min((((/* implicit */unsigned long long int) arr_21 [(short)4] [i_0])), (5459473859925414749ULL))) - (21917ULL)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_0] [(signed char)18] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) == (((var_8) - (arr_4 [i_0] [i_0])))))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_7)), (arr_20 [i_0] [i_0] [i_6]))) << (((((min((((/* implicit */unsigned long long int) arr_21 [(short)4] [i_0])), (5459473859925414749ULL))) - (21917ULL))) - (5459473859925392827ULL)))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_0] [(signed char)18] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) == (((var_8) - (arr_4 [i_0] [i_0]))))))))));
                }
            }
        } 
    } 
}
