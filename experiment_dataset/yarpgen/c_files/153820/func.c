/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153820
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((min(((!(((/* implicit */_Bool) arr_1 [i_0])))), (((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_1 [i_0])))))) ? (arr_3 [i_0]) : (min((((((/* implicit */_Bool) arr_1 [(short)9])) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 += ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_1 - 1] [7] [i_2 + 3])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_2] [i_2 + 2]))))));
                    arr_10 [(signed char)9] [i_0] [(signed char)9] = ((/* implicit */unsigned int) ((signed char) arr_6 [i_0] [7] [i_2]));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_2 [10ULL])) : (((/* implicit */int) arr_11 [(signed char)2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [16ULL]))))) : (((/* implicit */int) ((_Bool) arr_6 [(signed char)9] [(signed char)14] [(unsigned short)2]))))))));
        arr_13 [i_3] = ((/* implicit */short) min((((unsigned short) arr_1 [i_3])), (((/* implicit */unsigned short) ((_Bool) arr_1 [i_3])))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)14]))) != (arr_3 [16ULL])))), (((((/* implicit */_Bool) arr_0 [20LL])) ? (arr_12 [(_Bool)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)8])))))))) ? (max((max((((/* implicit */long long int) arr_6 [i_3] [i_3] [i_3])), (arr_7 [i_3] [i_3] [(signed char)8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_2 [4LL])) : (((/* implicit */int) arr_11 [16ULL]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [2])) == (((((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)18]))) / (arr_7 [i_3] [18U] [i_3]))))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [(unsigned char)7] [i_4] [(unsigned short)6])), (arr_3 [(signed char)8])))), (min((arr_0 [(unsigned short)0]), (((/* implicit */unsigned long long int) arr_14 [i_4])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_5 [12U])) : (((/* implicit */int) arr_6 [(short)2] [i_4] [(unsigned short)7]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(short)22])) ? (arr_14 [i_4]) : (arr_14 [i_4])))) : (arr_15 [i_4]))))));
        arr_17 [i_4] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_9 [i_4]))))), (min((arr_3 [12LL]), (arr_3 [(unsigned short)16])))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_23 = max(((~(arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]))), (((/* implicit */long long int) arr_14 [i_4])));
                        arr_25 [13] [i_5] [(signed char)7] [i_7] [i_4] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [i_4] [(unsigned short)19] [i_4]))));
                        arr_26 [i_7] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_7]))))) ? (((((/* implicit */_Bool) arr_19 [i_7] [(signed char)4] [i_4])) ? (((/* implicit */long long int) arr_3 [i_7])) : (arr_22 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6 + 1] [i_7] [i_7]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7])) ? (((/* implicit */int) arr_6 [(signed char)2] [i_7] [(signed char)2])) : (((/* implicit */int) arr_21 [12]))))) ? (((/* implicit */int) ((signed char) arr_22 [i_5]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7]))))))))));
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_24 [i_4]), (arr_3 [(short)20])))) ? (min((((((/* implicit */_Bool) arr_14 [i_4])) ? (arr_24 [i_4]) : (((/* implicit */unsigned int) arr_14 [i_4])))), (((/* implicit */unsigned int) arr_20 [i_4] [i_4] [i_4])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4])) ? (arr_18 [i_4] [i_4] [11U]) : (arr_18 [i_4] [i_4] [i_4]))))));
    }
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_11)))), (var_14))))));
}
