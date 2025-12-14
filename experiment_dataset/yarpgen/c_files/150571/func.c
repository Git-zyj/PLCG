/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150571
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_11)) / ((~(((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_0 [i_1 - 3] [i_1])))));
            var_17 = ((/* implicit */_Bool) var_8);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)18003)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((1476810136) > (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) arr_4 [10] [i_2 - 1] [10])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_0]))));
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 15; i_3 += 2) 
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_2])), (max((arr_5 [i_0] [i_3 - 2]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3])))))), (((/* implicit */unsigned long long int) (unsigned short)65520))));
                arr_13 [i_2] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_3]);
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (short)26295)) & (((/* implicit */int) ((_Bool) 5228943357930641478LL))))))));
            arr_17 [(unsigned short)3] = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(5908525435393139470LL)))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_2))))));
            var_19 = ((/* implicit */short) ((unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)63536)) : (((/* implicit */int) (unsigned short)16873)))))));
            var_20 &= var_11;
            arr_18 [i_0] [(unsigned short)15] [i_0] = ((/* implicit */short) min(((_Bool)1), (((arr_1 [i_0]) && (((/* implicit */_Bool) arr_14 [11LL] [i_0] [i_4]))))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_21 = ((/* implicit */short) min((var_21), (arr_11 [i_0] [(short)8])));
            var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_5]))) : (6778258677444960705LL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)59)) <= (1523874432)))) : (((/* implicit */int) (unsigned short)45220))))));
        }
        arr_23 [i_0] = ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) ((unsigned char) (-(0ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [2])) / (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_2 [i_0])))))))));
        var_23 = ((/* implicit */long long int) min((16940340146435983158ULL), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
    }
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned short) ((max((arr_5 [(unsigned char)7] [i_6]), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)147))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_10) / (((/* implicit */unsigned long long int) var_14)))))))));
        var_25 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_0))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned short) ((_Bool) (_Bool)1)))) : (((((/* implicit */int) arr_10 [i_7] [(short)17])) * (((/* implicit */int) arr_10 [i_7] [i_7])))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 16; i_10 += 4) 
                    {
                        for (short i_11 = 3; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((max((min((var_6), (arr_1 [i_7]))), (arr_34 [i_10 + 1] [i_11] [i_11] [i_11 + 3]))) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)240))));
                                arr_40 [i_11] [i_11] [i_10] [i_11] [i_11 + 4] [i_11 + 4] = ((/* implicit */unsigned char) var_14);
                                arr_41 [i_7] [9LL] [i_10] [i_10 + 2] [i_11 + 3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [3LL] [i_9]))) <= (((long long int) (unsigned char)2))));
                                var_28 = ((/* implicit */unsigned long long int) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
