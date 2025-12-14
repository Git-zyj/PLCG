/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110322
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_1 [i_0]))));
                    var_17 = ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1966080U)))) ? (((((/* implicit */_Bool) (short)2486)) ? (arr_4 [i_0]) : (var_0))) : (((/* implicit */int) (signed char)1))))) % (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (max((((/* implicit */unsigned int) var_1)), (1U))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) (+(max(((+(1884699340U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3347626472U)))))))));
                                arr_13 [i_4] [(short)7] [i_2] [(short)7] [i_4] = ((/* implicit */long long int) arr_7 [i_0 + 1] [i_1] [i_2] [16U] [i_4] [i_0 + 1]);
                                var_19 |= ((/* implicit */short) min((((((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_0 + 1] [i_3])) ^ (((/* implicit */int) arr_10 [i_3 + 1] [i_1] [i_1] [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (arr_10 [i_0 + 1] [i_2] [i_3 - 2] [i_4]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (((-(min((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_2])), (var_7))))) <= ((+(((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)18] [i_0] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-1))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                {
                    var_20 += max((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (-24831714)))) ? (var_13) : (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)20)), ((-(((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))))))));
                    var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((long long int) (unsigned short)35189))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_3)) - (18635)))))) : ((-(arr_21 [(unsigned char)8] [i_5] [i_5] [i_0]))))), (((/* implicit */long long int) ((min((((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [(_Bool)1] [i_5 + 1] [i_6 - 1])), (24831721))) % (((((/* implicit */_Bool) (signed char)-1)) ? (1879048192) : (((/* implicit */int) var_5)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_27 [(_Bool)1] [i_8] [i_6] [i_5] = ((/* implicit */short) (-(max((var_10), (((/* implicit */unsigned int) arr_10 [i_8] [i_7] [i_6 + 1] [19ULL]))))));
                                var_22 = ((/* implicit */int) min((((long long int) (-(((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) arr_4 [i_5 - 1]))));
                                var_23 = ((/* implicit */signed char) min(((~(((/* implicit */int) (signed char)34)))), ((-(((/* implicit */int) arr_10 [i_5] [i_5 - 1] [i_5 - 1] [i_0 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] = ((/* implicit */short) ((arr_30 [i_9] [i_9]) / (((/* implicit */long long int) (~(var_13))))));
        arr_32 [i_9] = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((16498231660890592385ULL) % (((/* implicit */unsigned long long int) arr_34 [24]))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 3; i_11 < 23; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) arr_34 [i_10]);
                    arr_40 [i_10] [i_11 + 2] [i_12] [i_12] = (!(((/* implicit */_Bool) ((unsigned char) 2673897216U))));
                }
            } 
        } 
    }
    for (short i_13 = 4; i_13 < 11; i_13 += 2) 
    {
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_6))));
        var_27 = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [(_Bool)1] [i_13] [i_13] [(_Bool)1])))))))));
    }
    var_28 = ((/* implicit */_Bool) (-((+(var_10)))));
}
