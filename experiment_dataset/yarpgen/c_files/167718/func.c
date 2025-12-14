/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167718
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
    var_19 += ((/* implicit */unsigned char) var_8);
    var_20 = ((/* implicit */signed char) var_9);
    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)18582)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [12] [i_0]) : (((/* implicit */unsigned long long int) var_4))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */short) (-(min((arr_4 [i_2 - 1] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_3] [i_2 - 1] [i_2] [i_2 - 1]))))));
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)3730), (((/* implicit */unsigned short) (unsigned char)117)))))) * ((+(arr_0 [i_2 - 1] [i_2 - 1])))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10155744630656266951ULL)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [(unsigned char)4] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [(signed char)20] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_7 [(signed char)6] [(short)22] [i_0] [i_0])) : (7435647029470705639ULL))) : (((/* implicit */unsigned long long int) ((((-5048394864391736023LL) + (9223372036854775807LL))) << (((arr_6 [(unsigned char)0] [i_0]) - (1060542527U))))))))));
        var_22 = ((/* implicit */unsigned long long int) max(((short)-32765), (((/* implicit */short) (signed char)121))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    arr_18 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_15 [i_0] [i_4]);
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((arr_4 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_5] [i_7 + 1] [i_4] [i_7 - 1] [i_7]), (((/* implicit */unsigned short) var_10))))))));
                                var_24 = ((/* implicit */unsigned short) min(((~(arr_4 [i_7 + 1] [i_7 - 1] [i_7 + 1]))), ((-(arr_4 [i_7 - 1] [i_7 + 1] [i_7 - 1])))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_5] [i_0] |= ((/* implicit */signed char) min((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [3LL] [i_4])))))));
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_40 [i_11] [i_9] [i_10] [i_10] [i_9] [i_8] = ((/* implicit */unsigned short) arr_26 [i_8]);
                        var_25 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? (arr_39 [i_8] [i_8] [i_9] [i_10] [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10])))))));
                        var_26 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_28 [i_9]), (((/* implicit */short) arr_35 [i_10] [i_10] [i_9])))))) & (arr_34 [i_10] [i_9] [i_10] [i_11])));
                        arr_41 [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (short)29648);
                        arr_42 [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_7 [(unsigned short)19] [i_9] [(unsigned char)16] [(unsigned short)19]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [i_8] [i_9]))))))));
                    }
                } 
            } 
        } 
        arr_43 [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-19240)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_8] [i_8] [i_8] [i_8]))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (2335183334346911460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        arr_44 [i_8] [0ULL] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8] [i_8])) ? (var_17) : (((/* implicit */int) var_0))))))), (max((((/* implicit */unsigned int) (short)8191)), (min((((/* implicit */unsigned int) (_Bool)1)), (3486943124U)))))));
    }
    for (short i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-((~(var_1))))))));
        arr_48 [i_12] = ((/* implicit */long long int) arr_30 [i_12]);
        var_28 ^= ((/* implicit */short) (-((+((-(((/* implicit */int) (short)0))))))));
    }
}
