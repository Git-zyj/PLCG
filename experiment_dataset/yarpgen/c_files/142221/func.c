/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142221
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [(_Bool)1] [(_Bool)1] [i_0] [(short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) var_11)) : (arr_6 [i_1 - 1] [i_1 + 1] [(unsigned short)9] [i_0])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */long long int) -1432548076);
                                arr_15 [7LL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [11LL] [11LL] [i_2] [(unsigned char)4] [i_2])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_4]))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */signed char) ((((((/* implicit */long long int) 3319163195U)) ^ (2205631811511809LL))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))));
                }
            } 
        } 
        var_14 += ((/* implicit */unsigned short) var_11);
        arr_17 [i_0] = ((/* implicit */unsigned int) (unsigned char)165);
        var_15 = ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0]) : (arr_4 [i_0]));
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3712))) & (165400011U)));
    }
    var_16 = ((/* implicit */unsigned char) 2649013995918839953LL);
    var_17 -= ((/* implicit */unsigned char) ((-582524214) | ((~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (signed char)-122)))))))));
    /* LoopSeq 3 */
    for (short i_5 = 2; i_5 < 12; i_5 += 2) 
    {
        arr_21 [i_5] &= ((/* implicit */long long int) min(((unsigned char)7), ((unsigned char)33)));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */int) arr_9 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5])) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [(unsigned char)11] [i_5 - 2])), ((unsigned char)253)))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 165400011U))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_24 [i_6] &= ((/* implicit */long long int) arr_9 [i_6] [(unsigned char)13] [i_6] [i_6]);
        arr_25 [(_Bool)1] = var_6;
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_6])) - (((/* implicit */int) arr_7 [i_6])))) - (((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) arr_7 [i_6])))))))));
        var_21 = ((/* implicit */unsigned char) arr_4 [i_6]);
        var_22 = ((/* implicit */_Bool) 2147483584LL);
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        arr_30 [(_Bool)1] &= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_27 [(unsigned short)12])))), (var_10)));
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 2; i_9 < 13; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    {
                        arr_37 [i_7] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_29 [i_7] [i_9 - 2]), ((unsigned char)202))))))) | (((/* implicit */int) (unsigned char)202))));
                        arr_38 [(unsigned char)1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_8] [i_9] [i_7])))) == (((/* implicit */int) (unsigned char)212))))) % (((/* implicit */int) (unsigned char)224))));
                    }
                } 
            } 
        } 
    }
}
