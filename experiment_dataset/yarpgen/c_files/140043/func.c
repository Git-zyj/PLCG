/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140043
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
    var_19 = (-(var_11));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) -2147483637))))) >> ((((~(((/* implicit */int) min((var_15), ((unsigned char)22)))))) + (42)))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                {
                    var_22 = (~((-(arr_9 [i_3 + 1] [i_3 - 1] [i_3]))));
                    var_23 = ((/* implicit */short) (+(var_3)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 2) 
                            {
                                var_24 *= ((/* implicit */signed char) min(((((+((-2147483647 - 1)))) / (((/* implicit */int) (unsigned char)12)))), ((+(((/* implicit */int) arr_23 [i_6 + 1] [(unsigned char)22] [4LL] [i_6 + 1] [i_6 + 1]))))));
                                arr_28 [2ULL] [i_5] [i_6 - 1] [i_5] [i_7] [i_8] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_27 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]), (arr_27 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])))), ((+(((/* implicit */int) arr_27 [i_6 - 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned char i_9 = 2; i_9 < 22; i_9 += 3) 
                            {
                                arr_31 [(signed char)22] [i_5] [i_5] [(unsigned short)6] [i_7] [i_5] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(21LL))))));
                                arr_32 [5ULL] [i_4] [i_4] [i_5] [i_6 + 2] [i_4] [i_9 - 2] = ((/* implicit */long long int) (+((-(min((arr_24 [i_4] [i_5] [i_6] [i_7] [i_9] [(unsigned char)4]), (((/* implicit */int) (unsigned char)39))))))));
                                var_25 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)36))))) ? ((-(2147483647))) : (((((/* implicit */_Bool) (unsigned char)22)) ? (2147483637) : (-2147483647)))))));
                                arr_33 [i_4] [i_5] [i_6] = ((/* implicit */long long int) arr_12 [i_4]);
                                arr_34 [i_4] [i_5] [i_6] [i_7] [i_9 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((-2147483629) / (((/* implicit */int) (unsigned short)26540)))))))));
                            }
                            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                            {
                                var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned char)255))) ? ((+(arr_17 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) (~(arr_24 [i_4] [i_4] [i_5] [i_6 + 2] [(unsigned char)11] [i_10]))))))) ? ((+(((/* implicit */int) arr_13 [i_10])))) : (max(((~((-2147483647 - 1)))), ((~(((/* implicit */int) arr_26 [i_4] [i_4] [i_4]))))))));
                                var_27 = ((/* implicit */int) var_18);
                                arr_37 [i_10] [i_7] [i_5] = ((/* implicit */int) arr_12 [i_6]);
                            }
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_14 [i_7])) ^ (((/* implicit */int) var_4)))) != (((/* implicit */int) (unsigned char)119))))) + (((/* implicit */int) ((short) arr_19 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 2])))));
                            arr_38 [i_5] [i_7] [14LL] [i_5] [i_5] [i_4] = ((/* implicit */long long int) (((~(2147483647))) / (((/* implicit */int) (unsigned short)15331))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) arr_12 [i_13]);
                                arr_49 [i_4] [i_5] [i_11] [i_12] [i_11] = ((/* implicit */short) (+(((((((/* implicit */int) (signed char)60)) <= (((/* implicit */int) (unsigned short)50193)))) ? (6LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))))));
                                var_30 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_47 [i_13])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [(short)16] [i_12] [i_12]))))))))));
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */signed char) min((min((((9223372036854775798LL) / (2305843009213693951LL))), (((/* implicit */long long int) arr_22 [i_4] [i_4] [(signed char)9] [i_4])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)15)))))));
            }
        } 
    } 
}
