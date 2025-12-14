/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151432
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 6; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned char) max((max((-588496046), (((/* implicit */int) (unsigned char)216)))), (((((/* implicit */int) (unsigned char)241)) / (((/* implicit */int) (unsigned char)255))))));
                            var_12 = ((/* implicit */int) min((var_12), ((-(((/* implicit */int) min((var_6), (var_6))))))));
                            var_13 = (unsigned char)123;
                        }
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_14 = (i_1 % 2 == 0) ? (((((/* implicit */_Bool) -220968266)) ? (((((max((arr_9 [i_0] [i_1] [i_0] [i_2] [i_1] [i_5]), (var_10))) + (2147483647))) << ((((+(220968266))) - (220968266))))) : (1413128514))) : (((((/* implicit */_Bool) -220968266)) ? (((((((max((arr_9 [i_0] [i_1] [i_0] [i_2] [i_1] [i_5]), (var_10))) - (2147483647))) + (2147483647))) << ((((+(220968266))) - (220968266))))) : (1413128514)));
                            arr_15 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (var_9) : (arr_14 [i_0] [i_0] [i_2] [i_3] [i_5]))) != (((int) -460004541))));
                            var_15 = (+(min((var_4), (var_5))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 7; i_6 += 4) 
                        {
                            arr_18 [i_1] [i_2] [i_1] = arr_17 [i_0] [i_0] [i_0] [i_0] [i_1];
                            arr_19 [6] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) min(((-(min((var_5), (arr_17 [i_0] [i_1] [i_2] [i_2] [i_1]))))), (min((((/* implicit */int) arr_3 [i_0] [i_1])), (((((/* implicit */int) arr_2 [i_0])) << (((var_1) + (1265868679)))))))));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */int) var_7);
                            var_16 = ((/* implicit */unsigned short) var_3);
                        }
                        arr_21 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) -1622132943);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) (unsigned char)133);
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 8; i_7 += 4) 
    {
        var_18 = ((/* implicit */int) var_11);
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7 + 1]))));
                            arr_34 [i_7] [i_7] [9] [i_7] [i_7] = var_1;
                            var_20 -= ((var_5) / (((/* implicit */int) (unsigned char)193)));
                        }
                        for (int i_12 = 2; i_12 < 7; i_12 += 3) 
                        {
                            arr_38 [i_7] [i_12] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_2))))));
                            arr_39 [i_7] [i_12] [(unsigned char)5] [i_12] [i_7] = ((/* implicit */_Bool) var_0);
                            var_21 = ((((/* implicit */_Bool) arr_24 [i_7 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_22 ^= arr_36 [i_13] [i_7] [i_7] [i_7 + 1] [(unsigned char)0] [i_13];
                            var_23 = var_5;
                            arr_43 [i_7] [i_8] [i_9] [i_10] [7] = (unsigned char)242;
                            var_24 ^= ((/* implicit */unsigned char) arr_16 [i_7 + 2] [i_8] [(unsigned short)6]);
                            arr_44 [i_7] [i_8] [i_8] [i_10] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_7]))));
                        }
                        var_25 = ((/* implicit */unsigned short) var_1);
                    }
                    for (int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_47 [i_7 - 1] [i_7] [i_9] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)13))));
                        var_26 &= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)17)) / (1532988978))) + ((-2147483647 - 1))));
                        var_27 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_4)))) ? (var_4) : (((((/* implicit */int) (unsigned short)49341)) << (((/* implicit */int) var_6))))));
                    }
                    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_9])))) < (((/* implicit */int) arr_24 [i_7 - 2]))));
                }
            } 
        } 
        var_29 &= ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        var_30 = ((((/* implicit */int) var_7)) - (((arr_45 [i_7] [i_7] [i_7] [i_7 - 1]) / (var_0))));
    }
    var_31 = ((/* implicit */unsigned short) var_10);
    var_32 = ((/* implicit */int) ((((/* implicit */int) var_3)) == (min((var_5), (((/* implicit */int) var_2))))));
}
