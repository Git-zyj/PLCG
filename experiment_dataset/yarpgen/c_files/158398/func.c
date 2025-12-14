/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158398
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
    var_19 = var_17;
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned char)5] = ((/* implicit */short) var_2);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_21 = ((/* implicit */unsigned int) var_16);
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_8)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_5 [i_1] = ((long long int) (-(((/* implicit */int) arr_4 [i_1] [(_Bool)1]))));
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_14)))))) ? ((~((~(((/* implicit */int) var_0)))))) : (((/* implicit */int) ((_Bool) var_6)))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-26132)) & ((+(((/* implicit */int) (unsigned char)172))))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_7)))) <= (((/* implicit */int) ((unsigned char) var_3)))))) : (arr_3 [i_1]))))));
        arr_7 [i_1] = arr_4 [i_1] [(signed char)8];
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_3 [i_2]))) ? (((/* implicit */int) ((short) ((unsigned char) var_15)))) : (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)26131))))) == (arr_0 [i_2] [i_2]))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_18)))))) ? (var_5) : (((/* implicit */int) (!(((((/* implicit */int) arr_13 [i_2] [i_3] [i_2])) >= (arr_3 [i_2]))))))));
            var_26 = ((/* implicit */short) (~(((arr_4 [i_3] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_0 [i_2] [i_3])))));
        }
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_17 [i_2] [2LL] = ((/* implicit */long long int) arr_1 [9]);
            var_27 = ((/* implicit */short) ((unsigned char) arr_0 [i_4] [i_4]));
        }
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (short i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    {
                        arr_28 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) var_5);
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_20 [i_5] [i_6] [(short)5]))));
                        var_29 = ((/* implicit */unsigned long long int) var_18);
                        arr_29 [i_6] [i_6] = (+(var_2));
                    }
                } 
            } 
        } 
        var_30 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_13 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_16))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            arr_32 [i_5] |= ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_9])) | ((~(((/* implicit */int) var_1))))));
            arr_33 [i_5] [i_5] [i_9] = arr_20 [i_5] [i_5] [i_9];
            var_31 = ((/* implicit */unsigned char) arr_27 [i_5] [i_5] [(unsigned short)6] [i_9] [i_9]);
        }
        for (long long int i_10 = 1; i_10 < 8; i_10 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) var_13);
            var_33 = ((/* implicit */signed char) arr_12 [12U]);
            arr_37 [i_5] [i_10] [i_5] = ((/* implicit */short) var_5);
            arr_38 [i_5] = (~(((/* implicit */int) var_4)));
        }
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    }
}
