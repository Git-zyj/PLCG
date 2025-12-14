/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132534
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
    var_14 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)1)))), (min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_10))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_0 [i_0 + 2]));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0 - 3] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 3])) ? (arr_5 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2])))));
                    var_15 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_2] [i_1])))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_16 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 3] [i_2]))));
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_4 - 1] [i_3] [(unsigned short)4] [i_4 + 1]))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_4]) >> (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_3 [i_0 - 3])) : (((/* implicit */int) arr_13 [i_1] [i_3] [i_1] [i_1] [i_1] [i_0]))));
                            arr_17 [i_0] [(unsigned short)4] [i_1] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0 + 2] [(short)0] [i_0 + 1] [i_0] [i_0 - 1] [i_0])) >> (((/* implicit */int) arr_13 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [(unsigned short)2]))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)36140)) == (((/* implicit */int) (short)-18743))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_20 &= ((/* implicit */_Bool) var_4);
                            arr_20 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)29482)) == (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-26928))))));
                            var_21 = ((/* implicit */_Bool) var_5);
                            arr_21 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (short)-26948)) : (((/* implicit */int) (signed char)-4))));
                        }
                        var_22 = ((/* implicit */short) ((unsigned int) arr_16 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 1] [i_1]));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_24 [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_2] [i_1])) ? (((/* implicit */int) (!(arr_12 [(_Bool)1])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))))));
                        arr_25 [i_0] [i_0 + 2] [i_1] [(unsigned char)3] [i_6] = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) (signed char)123)))));
                    }
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [i_0] [(_Bool)0] [i_0] [i_0] [i_0 - 2] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_14 [(unsigned short)9] [i_0] [i_0] [i_0 + 2] [i_0])) : (((/* implicit */int) (unsigned short)7909)))) : (((/* implicit */int) arr_3 [i_0 - 3]))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_4 [i_8]))) / ((~(((/* implicit */int) (unsigned short)16))))));
                    var_24 = arr_16 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 3] [i_0 + 2];
                }
            } 
        } 
    }
    for (unsigned int i_9 = 2; i_9 < 7; i_9 += 3) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_15 [i_9 - 1] [i_9] [i_9 + 3] [i_9] [i_9])))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)26930))))) ? (((/* implicit */int) (short)26967)) : (((/* implicit */int) ((unsigned char) var_7)))))));
        arr_36 [i_9] [i_9] = ((/* implicit */_Bool) arr_23 [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9]);
        var_25 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_9])) + (2147483647))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) (short)1020))))) ? (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) arr_33 [i_9 + 3] [i_9 - 2])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_14 [i_9] [i_9] [i_9] [i_9 - 1] [(signed char)3]))))))) - (43592)))));
    }
    for (short i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        arr_39 [i_10] = ((/* implicit */unsigned int) ((arr_38 [i_10]) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)4)))))) : ((~(((/* implicit */int) arr_38 [i_10]))))));
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_10]))))) ? (((arr_38 [i_10]) ? (((/* implicit */int) arr_38 [i_10])) : (((/* implicit */int) arr_38 [i_10])))) : ((-(((/* implicit */int) arr_38 [i_10]))))));
    }
    var_27 = ((/* implicit */short) ((max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) var_2)))))) + ((~((+(((/* implicit */int) var_6))))))));
}
