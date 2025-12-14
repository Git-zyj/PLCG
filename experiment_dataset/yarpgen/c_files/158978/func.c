/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158978
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) >> (((((/* implicit */int) arr_0 [i_0])) + (79))))) % ((~(((/* implicit */int) var_13)))))))));
        var_20 -= ((/* implicit */signed char) ((1315579753U) << (((((/* implicit */int) (unsigned char)129)) - (122)))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) var_7)), (arr_0 [i_0])))) < ((-(((/* implicit */int) var_10))))))) >> (((var_1) - (1372086073U)))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2 - 2]))))) ? (((((/* implicit */int) arr_2 [i_2 - 1])) / (((/* implicit */int) arr_2 [i_2 - 2])))) : (((/* implicit */int) ((short) var_2)))));
                    var_23 += ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_1] [i_3 - 1] [i_2])) : (arr_1 [i_1])))) && (((/* implicit */_Bool) arr_6 [i_1]))))));
                    var_24 *= ((/* implicit */unsigned long long int) ((unsigned char) 25U));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            arr_13 [i_1] = ((/* implicit */int) arr_5 [i_1] [i_4]);
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
            arr_15 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) <= (var_1)));
            arr_16 [i_4] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_4]);
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) (unsigned char)249)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_5] = ((/* implicit */long long int) ((min((arr_19 [i_1]), (((/* implicit */int) arr_10 [i_5])))) <= ((+(arr_19 [i_1])))));
            var_26 = ((/* implicit */_Bool) min((var_26), ((((~(arr_19 [i_1]))) == (((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_1])) >= (arr_19 [i_1]))))))));
            arr_21 [i_1] [i_5] [i_5] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) * (15865754717964254062ULL))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)240)))) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) < (((/* implicit */int) (unsigned short)22335)))))));
                        arr_28 [i_7] [i_6] = ((/* implicit */unsigned char) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53065)))));
                        arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967274U))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                {
                    arr_37 [i_8] [i_1] = ((/* implicit */unsigned long long int) ((((long long int) arr_8 [i_1] [i_8] [i_9])) & (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_8])))))));
                    arr_38 [i_1] [i_8] [i_9] = ((/* implicit */unsigned short) (((-(min((((/* implicit */unsigned long long int) arr_4 [i_8])), (arr_18 [i_9] [i_8] [i_1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [i_8] [i_1])))));
                }
            } 
        } 
    }
    for (int i_10 = 1; i_10 < 13; i_10 += 2) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_1))) > (((/* implicit */int) ((((/* implicit */_Bool) 4294967279U)) || (((/* implicit */_Bool) (-2147483647 - 1))))))));
        arr_43 [i_10 + 1] = ((/* implicit */int) arr_10 [i_10 - 1]);
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_10 + 2] [i_10 + 1])) - ((~(((/* implicit */int) arr_36 [i_10 + 1] [i_10 + 1]))))));
    }
    for (unsigned char i_11 = 1; i_11 < 24; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 3; i_12 < 23; i_12 += 4) 
        {
            for (unsigned char i_13 = 1; i_13 < 22; i_13 += 3) 
            {
                {
                    var_30 |= ((/* implicit */unsigned short) arr_46 [i_12] [i_13]);
                    arr_51 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_2);
                    arr_52 [i_13] [i_12] [i_11 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_50 [i_11])))) ? (max((((/* implicit */int) ((unsigned short) (_Bool)0))), ((~((-2147483647 - 1)))))) : ((~(((/* implicit */int) arr_46 [i_11 + 1] [i_12 - 2]))))));
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) arr_44 [i_11 + 1]);
    }
    var_32 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (var_1)))) * (((/* implicit */int) var_2)))) < (((/* implicit */int) ((unsigned short) var_4)))));
}
