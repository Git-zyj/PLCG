/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146975
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) min((var_7), (var_4))))))), ((((!(((/* implicit */_Bool) var_9)))) ? (min((((/* implicit */long long int) var_4)), (-3388389058007350115LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [(signed char)23] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [(unsigned short)5]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_13 [i_1] [3ULL] [i_2 - 1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26979))) : (((((/* implicit */_Bool) arr_13 [i_1] [(short)18] [(short)23] [i_1])) ? (arr_13 [(short)14] [i_4] [i_2 - 1] [i_1]) : (arr_13 [i_1] [i_3] [i_2] [i_1])))));
                            arr_15 [i_1] [(unsigned char)1] [(unsigned short)3] [i_1] = ((/* implicit */signed char) (~((~(arr_3 [i_1] [(unsigned short)13] [i_1])))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((long long int) arr_5 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 + 1] [(signed char)8])) | (((/* implicit */int) (short)992))))))))));
                            var_18 = ((/* implicit */unsigned long long int) 1144889627U);
                        }
                        var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(short)8] [(unsigned short)3] [(short)13])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11390)))))) ? (((/* implicit */int) ((arr_0 [i_0]) || (((/* implicit */_Bool) arr_6 [(unsigned char)2] [(unsigned char)2]))))) : (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_1 [i_0] [(signed char)11])))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (unsigned char i_7 = 2; i_7 < 22; i_7 += 1) 
            {
                {
                    arr_22 [i_0] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) ((arr_12 [i_0] [(_Bool)1] [(_Bool)1] [i_6]) ? (((/* implicit */unsigned long long int) -8666529048184419869LL)) : (var_5)))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 4; i_8 < 22; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) var_12);
                                arr_28 [i_0] [(unsigned char)22] [i_0] [(unsigned short)17] [i_0] = ((/* implicit */short) (((!(arr_7 [i_0] [i_0]))) ? (((unsigned long long int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 22; i_10 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_6] [i_6] &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_6] [i_6] [i_7 - 2] [i_11])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [(_Bool)1] [i_7 - 2] [(unsigned char)14])) : (((/* implicit */int) arr_17 [14LL] [i_6] [i_7] [i_7 - 2] [i_11]))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [i_6] [(unsigned char)22] [i_6] [(unsigned char)12] [i_10 + 2] [i_12] [i_12]))));
                            arr_36 [i_7] [i_10] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_7 + 1]))));
                            var_23 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_24 &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_10))))));
                            arr_39 [i_10] [18LL] [i_7 - 2] [i_7] [i_7 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_7 + 1]))));
                        }
                        arr_40 [i_0] [i_0] [20] [i_7 - 1] [i_6] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_7 - 2] [i_7] [i_7 - 2] [i_7]))));
                    }
                    arr_41 [i_6] [i_6] [i_6] = min((((((/* implicit */_Bool) (unsigned short)14145)) ? (9909636883731579382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45638))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26979)) ? (((/* implicit */int) arr_4 [i_6] [2] [i_7])) : (((/* implicit */int) (short)-23964)))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) var_7);
}
