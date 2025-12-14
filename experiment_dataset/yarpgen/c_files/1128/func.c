/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1128
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
    var_16 *= ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) (((-(arr_1 [i_0 + 1] [i_0]))) * (((/* implicit */unsigned long long int) (~(var_5))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */signed char) (+(var_4)));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1])))));
                        arr_10 [i_0] [6U] = ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_3 - 1]);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_14 [i_4] [i_4] [i_4] [11] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [8ULL] [i_2] [i_3] [i_4])) % (((/* implicit */int) arr_13 [i_0] [13LL] [13LL] [i_3 + 1] [(signed char)11]))))) ? ((~(476632973))) : (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 3] [i_3 + 3] [i_3] [i_3]))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((476632980) ^ (((/* implicit */int) (short)21417))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)120)) < (((/* implicit */int) var_0))))) : (((/* implicit */int) arr_4 [i_3 - 1] [i_3] [i_3 + 2])))))));
                        }
                        for (int i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) ((unsigned short) var_6));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-121)) ^ (((/* implicit */int) arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_5 + 1]))))) : ((-(arr_3 [i_0] [i_0] [i_0 - 1])))));
                            arr_18 [i_0] [i_1] [i_1] [i_2] [(_Bool)0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 476632980)) || (((/* implicit */_Bool) var_7))))) * (((/* implicit */int) ((-6145578122648961576LL) == (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                            arr_19 [i_0] = ((/* implicit */short) (~(-1482634128)));
                        }
                        arr_20 [i_3] [10] [(unsigned char)5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 + 1])) ? (arr_6 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0])))))) ? (((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21426))) : (-9203600534848545202LL))) : (var_4)));
                    }
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) ^ (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 223955396U))) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_0 + 1] [i_1] [(short)7] [i_1])) : (((/* implicit */int) var_0))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) var_13);
        arr_21 [i_0] [i_0] = ((/* implicit */int) ((short) (short)-5402));
    }
    for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 1) 
    {
        arr_25 [i_6] = ((/* implicit */int) ((min((((arr_24 [i_6]) + (var_4))), (((/* implicit */long long int) arr_23 [i_6] [i_6])))) >= (((/* implicit */long long int) ((((arr_22 [i_6]) + (2147483647))) << (((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_23 [i_6 + 2] [i_6]))))) - (70))))))));
        arr_26 [i_6 - 2] &= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) arr_22 [i_6])) / (((((/* implicit */_Bool) -9198110600013541497LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) : (arr_24 [i_6 + 1]))))), (((/* implicit */long long int) max((min((((/* implicit */int) (short)18679)), (arr_22 [i_6]))), ((-(((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            for (unsigned char i_9 = 4; i_9 < 16; i_9 += 4) 
            {
                {
                    arr_35 [i_7] [i_7] = ((/* implicit */int) ((arr_24 [(unsigned char)16]) << (((/* implicit */int) var_13))));
                    var_25 = ((/* implicit */int) min((var_25), (((arr_34 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1]) ? (((/* implicit */int) arr_34 [i_8] [i_8] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) arr_34 [i_8] [7LL] [i_8 + 2] [i_8 + 3]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                {
                    arr_41 [i_7] [i_10] [i_10] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_6)))) && ((((_Bool)1) || (((/* implicit */_Bool) 1744019672436180873LL))))));
                    arr_42 [i_7] [i_7] [14] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31767)) ^ (-476632973)));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) var_5);
        arr_43 [(unsigned short)5] [i_7] = ((/* implicit */unsigned char) arr_23 [i_7] [i_7]);
    }
}
