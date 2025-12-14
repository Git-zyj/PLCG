/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153193
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1])) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0] [i_0 + 1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))) <= (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_2 + 1] [2U])))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1])) | (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_2 - 1]) : (arr_7 [i_2] [i_2] [i_2 + 1] [i_2]))))))));
                        var_12 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 2]))))));
                        arr_10 [i_0 - 1] [i_2 + 1] [i_0 - 1] = ((/* implicit */int) arr_2 [(signed char)2]);
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_13 = arr_0 [i_4];
                        arr_13 [i_0] [i_0] [i_2] [i_2 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned int) arr_5 [i_0] [14] [14] [i_0])) : (arr_12 [(short)5] [i_2])))))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(short)0] [i_4])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0 + 1] [i_2 + 1])) ? (arr_5 [i_4] [i_2 + 2] [i_2] [i_0]) : (((/* implicit */int) (!(arr_8 [i_1] [i_2] [i_1] [(short)18] [i_0]))))))));
                        arr_14 [(unsigned char)15] [(unsigned char)15] [13] [(unsigned char)15] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned short)14] [i_1] [i_2 - 1] [i_4] [i_0])) ? (arr_3 [12]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_4])) ? (((/* implicit */int) arr_1 [i_2 + 2])) : (arr_7 [i_0] [i_0] [i_0] [i_0 + 1])))) : (arr_12 [i_0 - 1] [i_2 + 2])))));
                        arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -1874175660)) ? (((/* implicit */int) (unsigned char)199)) : (1874175666)));
                    }
                    var_14 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))))));
                    var_15 = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]))))))));
                    var_16 = (~((~((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [(short)8] [i_2 + 1])))))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)56)) || (((/* implicit */_Bool) (short)511)))))));
}
