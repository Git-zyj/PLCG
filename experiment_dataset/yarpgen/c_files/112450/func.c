/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112450
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((var_0) ? (arr_5 [i_1] [i_1 - 2] [i_2 + 3] [(unsigned char)8]) : (arr_5 [i_1] [i_1 + 2] [i_2 - 1] [i_2])))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_2 [i_0]);
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3190663861U)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [i_2] [i_3]))));
                                var_16 = ((/* implicit */long long int) (((((~(((/* implicit */int) var_13)))) | (((/* implicit */int) ((((/* implicit */int) (short)-10541)) < (((/* implicit */int) (unsigned char)26))))))) == (min((arr_2 [i_0]), (((/* implicit */int) var_5))))));
                                arr_17 [i_2 - 1] [i_3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                arr_24 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_5])) ^ (((/* implicit */int) (unsigned char)212))))) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) min((var_4), (var_3))))));
                arr_25 [i_5] [i_5] [i_5] = (~(((((((/* implicit */int) (short)10513)) >> (((/* implicit */int) var_0)))) - (((/* implicit */int) var_6)))));
                var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_10)))) > (3654743401U))) || ((!(((/* implicit */_Bool) var_7))))));
                /* LoopSeq 2 */
                for (int i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 2; i_8 < 8; i_8 += 3) 
                    {
                        arr_32 [i_5] [(unsigned short)3] [i_5] [i_7] [3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [10LL] [i_7 + 2] [i_8 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [0ULL] [i_5] [i_7 + 1] [i_8 - 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)17))))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_8] [i_7 + 2] [i_8 - 2])) ? (((/* implicit */int) arr_11 [i_7 + 2] [i_6] [i_7 + 2] [i_8 - 2])) : (-1)))));
                        var_18 = ((/* implicit */unsigned long long int) ((max((arr_14 [i_5] [i_5] [i_6] [i_7] [i_8 + 1] [i_8] [i_8 - 2]), (((/* implicit */int) var_12)))) >> (((((/* implicit */int) ((unsigned char) arr_14 [i_5] [i_5] [i_6] [i_7 + 2] [i_8] [i_8 + 1] [i_8 - 1]))) - (163)))));
                        arr_33 [0ULL] [0ULL] [i_6] [i_5] |= max((min((arr_26 [i_5] [i_7] [i_6]), (((/* implicit */unsigned int) (unsigned char)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (8134119776361308572ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_6)))) : (((var_0) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) var_0))))))));
                    }
                    arr_34 [i_7] [i_7] [i_7] [i_5] = ((/* implicit */short) max((arr_31 [i_5] [i_5] [8U] [i_6] [i_5] [i_7 + 2]), (((/* implicit */unsigned short) var_12))));
                    var_19 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)22688))))));
                }
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    arr_37 [i_5] [i_9] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_5] [1LL] [i_5]))))) / (-5538875954703398953LL)));
                    var_20 = var_1;
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        for (unsigned char i_11 = 2; i_11 < 8; i_11 += 1) 
        {
            for (unsigned char i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                {
                    arr_46 [i_11] = ((/* implicit */unsigned char) (((~(((var_5) ? (arr_44 [(unsigned short)11]) : (((/* implicit */unsigned long long int) arr_43 [i_10] [i_11] [i_10])))))) * (((/* implicit */unsigned long long int) ((arr_43 [i_10] [i_11 + 4] [i_12 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11 - 1] [i_12 + 1]))))))));
                    arr_47 [(short)9] [i_11] [i_11] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_43 [i_10] [i_12 - 1] [i_12 - 1])) ? (arr_43 [(short)5] [i_12 - 1] [(short)11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))))) ^ (arr_43 [i_12 + 1] [i_12 + 1] [i_12])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2147483644)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (short)10515)))) && (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)218)), (var_4))))))))));
}
