/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187833
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min(((unsigned char)5), (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [(unsigned char)8] [(unsigned char)12] [(unsigned char)1] [(unsigned char)4] [i_3] [(unsigned char)2])) < (((/* implicit */int) (unsigned char)255)))))))) > (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_8)))) > (((/* implicit */int) min(((unsigned char)64), ((unsigned char)0)))))))));
                                arr_15 [(unsigned char)12] [i_1 - 3] [i_2] [i_3] [(unsigned char)4] [i_0] [i_2] |= arr_8 [i_0] [(unsigned char)18] [(unsigned char)22] [i_3] [(unsigned char)18];
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_10 [i_1 + 1]), (arr_10 [i_1 + 1])))) * (((/* implicit */int) ((unsigned char) arr_10 [i_1 - 2])))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned char)255)) - (248))))))) ? (((/* implicit */int) ((unsigned char) var_4))) : (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1]))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_3)))))));
                arr_16 [(unsigned char)6] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)127))))) ? (((((/* implicit */_Bool) max(((unsigned char)171), ((unsigned char)255)))) ? (((/* implicit */int) min(((unsigned char)125), ((unsigned char)5)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_13 [i_0] [(unsigned char)21] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (unsigned char)128)) - (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) arr_10 [i_1 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (unsigned char i_8 = 3; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                arr_35 [i_6] [(unsigned char)12] [i_7] [i_6] [i_6] = (unsigned char)4;
                                arr_36 [i_5] [(unsigned char)8] [i_5] [(unsigned char)2] [i_6] = ((unsigned char) ((unsigned char) ((((/* implicit */int) (unsigned char)89)) >> (((/* implicit */int) arr_26 [i_5])))));
                                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned char)24)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) min(((unsigned char)208), (arr_21 [i_6] [i_7])))) : (((((/* implicit */int) arr_1 [i_9])) / (((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_6] = ((/* implicit */unsigned char) (((+(((/* implicit */int) min(((unsigned char)3), (var_4)))))) != (((((/* implicit */int) min((var_4), (arr_27 [i_5] [(unsigned char)3])))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) arr_3 [i_6] [i_6] [i_6]))))))));
                var_16 ^= ((/* implicit */unsigned char) (-(min((((((/* implicit */int) arr_7 [i_5] [i_5] [i_6] [i_6] [i_5] [(unsigned char)2])) - (((/* implicit */int) (unsigned char)36)))), (((/* implicit */int) var_6))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
    {
        for (unsigned char i_11 = 3; i_11 < 7; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                {
                    var_17 = ((unsigned char) ((unsigned char) (unsigned char)56));
                    arr_44 [(unsigned char)8] [(unsigned char)6] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)119)) | (((/* implicit */int) arr_13 [(unsigned char)6] [i_11 + 1] [(unsigned char)0] [(unsigned char)0] [i_12]))))) ? (((/* implicit */int) max((arr_13 [i_10] [i_11 - 1] [i_11 - 1] [(unsigned char)8] [i_12]), ((unsigned char)255)))) : (((((/* implicit */_Bool) arr_13 [i_10] [i_11 + 3] [(unsigned char)22] [(unsigned char)18] [i_10])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_13 [(unsigned char)2] [i_11 + 3] [(unsigned char)22] [(unsigned char)20] [i_12]))))));
                    arr_45 [(unsigned char)2] [i_11 + 1] [(unsigned char)2] [i_11] = arr_34 [i_10];
                    arr_46 [i_10] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) min(((unsigned char)109), ((unsigned char)127))))));
                }
            } 
        } 
    } 
}
