/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11009
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_3), (var_3)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min(((unsigned short)30730), (((/* implicit */unsigned short) (signed char)-55)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) & (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [(unsigned short)6]) != (arr_0 [2LL]))))))) != ((+(arr_0 [i_0 - 4])))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (46)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) & (arr_0 [i_0])))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-107)) + (2147483647))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (153)))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (arr_0 [i_0 - 4]) : (arr_0 [i_0 - 4])))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_11)), (arr_1 [i_2 + 1])))) ? (((((/* implicit */int) arr_1 [i_2 - 2])) / (((/* implicit */int) arr_1 [i_2 - 3])))) : (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_2 - 1]))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [(signed char)6])))))) ? ((~(((/* implicit */int) arr_4 [4U] [i_1] [4U])))) : (((((/* implicit */int) arr_4 [i_1] [i_2] [2U])) + (((/* implicit */int) (unsigned short)19039)))))))))));
                        var_21 &= ((/* implicit */unsigned int) (signed char)0);
                        var_22 = ((/* implicit */unsigned int) arr_3 [i_1]);
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)127))))));
    }
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4])) / (((/* implicit */int) arr_11 [i_4]))))) ? (((/* implicit */int) arr_12 [i_4])) : (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) arr_12 [i_4]))))))), (((1458078241U) >> (((((/* implicit */int) (unsigned char)120)) - (106)))))));
        arr_13 [i_4] [i_4] = min((max((((/* implicit */unsigned char) var_4)), (arr_12 [i_4]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (var_15))))))));
        arr_14 [i_4] [(unsigned short)4] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_11 [i_4]))))));
    }
}
