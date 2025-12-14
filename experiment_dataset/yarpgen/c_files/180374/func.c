/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180374
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
    var_18 = ((/* implicit */_Bool) (~((+(var_2)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)32))))) ? (((/* implicit */unsigned int) ((((((((/* implicit */int) (short)-21767)) + (2147483647))) >> (((((/* implicit */int) (short)21777)) - (21775))))) | (((/* implicit */int) (short)21779))))) : (((((arr_3 [i_0] [i_0]) >> (((/* implicit */int) (_Bool)1)))) << (((((-776953665403854487LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-21767))))) + (776953665403871128LL))))));
                        arr_11 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_10);
                        var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_3 [i_0 + 2] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0])) ? (var_15) : (arr_3 [i_0 - 1] [i_0])))));
                        /* LoopSeq 2 */
                        for (int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            arr_15 [i_0] [(short)0] [(short)0] [(_Bool)1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_12 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1]), (arr_12 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3 + 2])))) >> (((/* implicit */int) ((arr_13 [i_0 + 2] [i_1] [i_2] [(_Bool)1] [i_4]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2] [(unsigned short)1] [i_3 - 2] [i_4]))))))));
                            var_21 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) arr_4 [i_2] [i_3 - 2])), (arr_3 [i_0 + 1] [i_1])))));
                            arr_16 [i_3] [i_1] [i_2] = ((/* implicit */unsigned int) arr_0 [i_2] [i_2]);
                            var_22 ^= ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0 - 1] [i_0 - 1])) ? (arr_1 [i_0 - 3]) : (((/* implicit */int) ((_Bool) (short)21758)))));
                            var_23 *= ((/* implicit */unsigned short) arr_14 [i_0] [i_4 + 4] [i_0 - 1]);
                        }
                        for (int i_5 = 1; i_5 < 19; i_5 += 1) 
                        {
                            arr_19 [i_2] [(unsigned short)1] [i_2] [i_3] [i_5] [(unsigned short)11] = ((/* implicit */int) ((unsigned int) ((unsigned long long int) (short)21766)));
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_2] [i_2] = max((((/* implicit */unsigned int) (short)-21767)), (((((/* implicit */_Bool) (unsigned short)27537)) ? (((/* implicit */unsigned int) (+(var_8)))) : (((206985043U) << (((((/* implicit */int) (signed char)-98)) + (116))))))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((1459439428), (((/* implicit */int) (_Bool)1))))) ? (arr_5 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_17)))))) / (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_18 [i_0] [i_0 - 3] [i_0] [9] [i_0]))))))));
        var_25 = ((/* implicit */short) var_0);
    }
    for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
    {
        var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_6] [i_6])) || (((/* implicit */_Bool) ((unsigned int) arr_10 [i_6 + 1] [(_Bool)1] [i_6])))));
        var_27 = ((/* implicit */long long int) arr_7 [i_6] [i_6 - 3] [i_6] [i_6]);
        var_28 = ((/* implicit */unsigned char) arr_23 [i_6]);
    }
}
