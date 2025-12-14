/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153828
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)246)) : (var_17)))));
                    arr_12 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_4 [i_0] [i_2])))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) /* same iter space */
                    {
                        var_20 += ((/* implicit */_Bool) (~(arr_14 [i_3] [i_3] [i_1 - 2] [i_1])));
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            var_21 -= ((/* implicit */long long int) var_0);
                            var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_3])) <= (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_4])))))) & (var_11));
                            arr_18 [i_4] [i_3] [i_4] [i_1] [i_0] |= ((/* implicit */unsigned short) arr_16 [i_0] [i_1]);
                        }
                        arr_19 [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_2] [i_3]);
                        arr_20 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((2062052810U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)9642)))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) >= (var_7))))) & (((((/* implicit */long long int) -1695246700)) + (arr_23 [i_0] [i_1] [i_2] [i_5] [i_1] [i_2])))));
                        var_23 = ((/* implicit */unsigned long long int) -1044232253);
                    }
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_24 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_6 [i_0] [20ULL] [i_0])) ? (arr_21 [(short)4] [i_1] [i_2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        arr_29 [i_0] [i_1] [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((short) (unsigned char)136));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                        var_26 = ((arr_8 [i_0 + 1] [i_1 - 2] [i_2 - 1] [i_6 + 1]) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 1] [i_2 + 1] [i_6 - 1])) : (((/* implicit */int) arr_8 [i_0 + 1] [i_1 - 1] [i_2 - 1] [i_6 + 2])));
                        arr_30 [i_0] [i_2] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) var_11)))));
                    }
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_15 [i_2] [i_1] [i_2] [(short)14]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_16 [i_8] [i_7])) ? (arr_1 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_7]))))))))));
                    arr_35 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_15 [i_0 - 1] [i_7] [i_7 - 1] [i_0]))));
                    arr_36 [i_8] [i_7] [i_8] |= ((/* implicit */int) arr_16 [i_0] [i_0]);
                }
            } 
        } 
        arr_37 [i_0] = ((/* implicit */unsigned char) -1539261408);
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 20; i_9 += 4) 
        {
            for (int i_10 = 1; i_10 < 18; i_10 += 4) 
            {
                {
                    arr_43 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_9] [i_0])) ? (arr_1 [i_9]) : (var_11))))));
                    var_29 = ((unsigned short) arr_17 [i_0] [i_9 - 1] [i_9] [i_10] [i_10 - 1]);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((long long int) -58932855))))) ? ((-(((/* implicit */int) var_10)))) : (min((((int) var_7)), ((-(((/* implicit */int) var_9))))))));
    var_31 ^= ((/* implicit */unsigned long long int) ((((max((var_7), (((/* implicit */long long int) var_4)))) % (((/* implicit */long long int) ((/* implicit */int) var_14))))) * (((/* implicit */long long int) (-(((/* implicit */int) (short)6287)))))));
    var_32 = ((/* implicit */short) var_3);
}
