/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171336
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (arr_0 [(short)8]) : (var_9)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_0])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) max((-7479127294161138104LL), (arr_0 [i_0])))) <= (((((/* implicit */_Bool) (unsigned short)59678)) ? (arr_5 [(unsigned short)9]) : (arr_3 [i_1]))))))));
                arr_9 [i_0] [i_0] [i_0] [(short)5] = ((/* implicit */unsigned short) (~(max((var_9), (((/* implicit */long long int) var_5))))));
            }
            arr_10 [i_0] = ((/* implicit */unsigned long long int) ((7479127294161138104LL) / (((/* implicit */long long int) 1667584910))));
            arr_11 [4ULL] = ((/* implicit */unsigned short) max(((~(arr_0 [i_1 - 3]))), (((/* implicit */long long int) ((unsigned char) 1667584903)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = (!(((/* implicit */_Bool) var_8)));
                            arr_21 [i_0] [i_5] [i_1] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_17 [i_0])))), (((int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 12; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_6] [i_4] [i_6] [i_6] = ((/* implicit */_Bool) ((int) min((((/* implicit */int) var_0)), ((~(((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_3] [i_1] [5U])))))));
                            arr_25 [i_0] [i_1] [i_1] [i_3] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */short) var_3)), (arr_7 [i_1 + 1] [i_1 + 1] [i_6 - 3]))));
                            arr_26 [i_0] [i_1] [i_3] [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_6 - 2] [i_1 + 2] [i_1 + 2])) ^ (((/* implicit */int) arr_14 [i_6 - 2] [i_6] [i_1 - 3]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [(short)9] [i_0])) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0)))))))) : ((~(1789029793))));
                        }
                        for (int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            var_14 *= ((/* implicit */unsigned char) (-((((!((_Bool)0))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4] [i_0])) ^ (((/* implicit */int) (signed char)119))))) : (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_1] [(unsigned short)5] [i_3] [i_4] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0])))))));
                            var_15 ^= ((/* implicit */short) -698033529);
                        }
                        var_16 = min((((/* implicit */int) (unsigned char)50)), ((+(((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)-1)))))));
                        arr_29 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */long long int) min(((-(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) arr_16 [i_0] [i_0])))))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))));
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) max((2013265920LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_8])))))))) ? (((/* implicit */int) ((((unsigned long long int) arr_15 [i_0] [i_0] [i_8])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) 888520192567069341LL))))))))) : (((((/* implicit */_Bool) (unsigned short)9166)) ? (((/* implicit */int) arr_14 [13ULL] [i_8] [i_8])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_8])))))))));
            arr_34 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_1))) * ((-(((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_8] [i_0] [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_0] [(short)13] [(signed char)11] [i_8] [i_8] [i_8]))))) : (min((((/* implicit */unsigned int) (signed char)40)), (0U)))));
            /* LoopNest 3 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (unsigned int i_10 = 3; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            arr_43 [8LL] [(short)4] [i_9] [i_8] [i_10] [i_11] = ((/* implicit */unsigned char) max((arr_22 [i_0] [12] [i_8] [i_10 + 2] [i_11]), (((/* implicit */unsigned int) arr_30 [(unsigned short)5] [i_11]))));
                            var_18 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_2))))))), (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [8] [i_0] [i_10] [i_10 - 3]))) ^ (9188023092217269951ULL))))));
                            var_19 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) min((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_10] [i_0] [i_10])), (arr_38 [i_0] [6LL] [(short)2] [i_10]))))), ((+(((/* implicit */int) arr_37 [(short)7] [(short)7] [12ULL] [(short)7] [12ULL] [i_10 - 1]))))));
                        }
                    } 
                } 
            } 
            arr_44 [i_8] [i_0] [i_0] = ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]);
            var_20 = ((((/* implicit */int) (signed char)-4)) * (((/* implicit */int) (short)0)));
        }
        var_21 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0]))) : (2032318409U))) : ((~(12U))))));
        /* LoopSeq 3 */
        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
        {
            arr_49 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)7), (((/* implicit */short) arr_32 [13LL] [i_12])))))) & (((unsigned long long int) var_0))))));
            var_22 |= ((/* implicit */unsigned long long int) ((_Bool) -3LL));
        }
        for (signed char i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
        {
            arr_53 [(signed char)0] [(signed char)0] = ((/* implicit */unsigned int) (~(max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) min((arr_28 [i_0] [i_13] [i_0] [(_Bool)1] [i_0]), (arr_36 [i_13] [i_0] [i_13] [i_0]))))))));
            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
            arr_54 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_10), (((/* implicit */unsigned long long int) 8269097224901369329LL)))) << (((((/* implicit */int) ((signed char) arr_12 [i_0] [i_13] [i_0] [i_0]))) + (184)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_13]))))) : (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_14 = 0; i_14 < 14; i_14 += 2) /* same iter space */
        {
            arr_57 [i_0] [i_14] [i_0] = ((/* implicit */signed char) (-((-(223166601U)))));
            arr_58 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_0] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */short) arr_2 [i_0])), (var_8)))))) : (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [6U] [i_14] [(unsigned short)5] [6U] [i_0] [6U] [0]))) : (arr_3 [i_14]))), (((((/* implicit */_Bool) var_2)) ? (arr_51 [(unsigned short)3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        }
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((var_2), (((/* implicit */int) var_8)))), ((-(((/* implicit */int) var_5))))))))))));
    var_25 = ((/* implicit */unsigned short) max((((/* implicit */short) var_4)), (var_8)));
    var_26 -= (-(((/* implicit */int) var_6)));
}
