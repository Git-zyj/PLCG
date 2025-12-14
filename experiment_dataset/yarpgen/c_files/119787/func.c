/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119787
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (2147483647)))), (((((/* implicit */_Bool) -2147483647)) ? (638067147139820284LL) : (var_2))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_13)), (var_2)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28419)) ? (var_8) : (((/* implicit */long long int) ((arr_2 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [3ULL] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))))));
            arr_5 [i_1] [i_1] &= ((/* implicit */int) ((((((-2147483647) >= (((/* implicit */int) arr_0 [i_0] [i_1])))) ? (((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (short)15354))))) / (((/* implicit */long long int) ((/* implicit */int) (short)-32760)))));
            arr_6 [i_0] [i_1] = ((((/* implicit */_Bool) (-((+(2147483634)))))) ? (var_8) : (((/* implicit */long long int) (-((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (!(((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned char)32))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_18 = ((/* implicit */long long int) (+(var_0)));
                var_19 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_8 [i_4] [i_2]))))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_20 = ((((/* implicit */_Bool) ((arr_12 [i_2]) & (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5] [i_3])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))))) : (arr_15 [i_2] [i_3 - 2] [i_2] [i_2]));
                var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) : (arr_8 [i_2] [i_5]))))));
                arr_18 [(short)6] [(short)6] |= ((/* implicit */int) (+(arr_9 [i_2] [i_3 - 2] [i_5])));
                var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) 6639651713064114053LL)) ? (((arr_7 [(unsigned char)21] [(unsigned char)21]) + (((/* implicit */unsigned long long int) 0U)))) : (((((/* implicit */_Bool) 2359831150U)) ? (((/* implicit */unsigned long long int) 2469019789U)) : (arr_9 [i_2] [i_3] [i_5])))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                arr_21 [i_2] [i_3] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)223)) & (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : (((arr_16 [(_Bool)1] [i_3] [i_6]) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_6] [i_3])))));
                arr_22 [i_6] [i_6] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 - 2])) ? (arr_8 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_3 - 2] [i_3 - 1]))) : (var_2)));
                var_23 |= (-(((/* implicit */int) (signed char)28)));
                arr_23 [i_2] [i_2] [i_2] [i_2] |= ((arr_19 [i_2] [i_3 + 2]) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [8ULL] [i_3 + 1])) ? (((/* implicit */int) arr_11 [i_2] [i_3])) : (((/* implicit */int) (signed char)-28))))));
            }
        }
        var_24 |= ((/* implicit */unsigned char) (-(((unsigned int) arr_7 [i_2] [i_2]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            arr_28 [i_7] [i_7] = ((/* implicit */int) ((unsigned int) var_12));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_16 [i_10] [11U] [11U])) : (((((/* implicit */_Bool) 7404308453006930544ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)26913)))))))));
                            var_26 *= ((/* implicit */unsigned char) ((arr_25 [i_8] [i_7] [i_2]) >= (((long long int) 3299065360U))));
                            arr_37 [i_2] [i_8] [i_8] [i_9] [i_10] |= var_2;
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) & (arr_19 [i_2] [i_2])));
                            arr_38 [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_7] [i_2])) ? (arr_35 [i_2] [i_2] [i_8] [(unsigned char)12] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_10] [i_7] [i_10] [i_9] [i_9] [i_10])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    {
                        var_28 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_2] [i_7] [i_12])) ? (arr_30 [i_12] [i_12] [i_12]) : (((/* implicit */long long int) var_5))));
                        var_29 = ((/* implicit */unsigned long long int) (unsigned short)43268);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            var_30 -= ((((/* implicit */_Bool) arr_15 [i_13 + 4] [i_13 + 1] [i_13 + 2] [i_13 - 1])) ? (arr_15 [i_13 + 4] [i_13 + 2] [i_13 + 4] [i_13 + 4]) : (arr_15 [i_13 + 4] [i_13 + 2] [i_13 + 3] [i_13 + 1]));
            arr_45 [i_2] [i_13] = ((/* implicit */long long int) arr_16 [i_2] [i_13 - 1] [(unsigned short)15]);
        }
    }
    var_31 = ((/* implicit */unsigned long long int) (-(((long long int) max((((/* implicit */unsigned long long int) var_9)), (var_6))))));
    var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)18288)) : ((+(((/* implicit */int) var_3))))));
    var_33 |= ((/* implicit */int) var_2);
}
