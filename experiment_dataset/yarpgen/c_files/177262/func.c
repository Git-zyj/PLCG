/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177262
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
    var_19 = ((/* implicit */_Bool) (~(var_15)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 7; i_3 += 4) 
                    {
                        var_20 = (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))) ^ (((long long int) arr_4 [i_1] [i_2] [i_3])))));
                        var_21 = ((/* implicit */unsigned char) ((unsigned short) (~((~(((/* implicit */int) arr_4 [i_0] [i_2] [i_3])))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)125)) <= (((/* implicit */int) arr_10 [0LL] [7LL] [i_3 + 1] [i_3] [i_2])))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)63))))) ? (var_7) : (((/* implicit */long long int) var_9))))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
                    {
                        var_23 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [(unsigned char)3] [i_1 + 1] [i_0]))));
                        var_24 = ((/* implicit */unsigned char) min((min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)115)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48131))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned char)63)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39650)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (!(arr_1 [i_1])))) : (((/* implicit */int) min((var_8), (arr_3 [i_5] [i_1] [i_0]))))))));
                        arr_16 [(unsigned short)6] [i_1] [(unsigned char)8] &= ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_13 [i_5 + 2] [i_5 - 1] [i_5] [i_5]), (arr_13 [i_5 - 1] [6LL] [(unsigned char)3] [(unsigned char)3]))))));
                    }
                    var_26 -= ((/* implicit */_Bool) ((long long int) arr_11 [i_0] [i_0] [(unsigned short)4] [i_0] [i_0] [(unsigned short)7]));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_16))));
}
