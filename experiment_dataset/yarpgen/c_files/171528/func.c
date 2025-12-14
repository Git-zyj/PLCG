/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171528
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_12 -= ((/* implicit */signed char) 9223372036854775807LL);
        var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0]))))));
        var_14 = ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            arr_5 [4LL] [i_1 + 1] [4LL] &= -1449978501;
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((((/* implicit */int) arr_2 [i_0] [i_0])) & (-960669218)))));
            arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) ((960669217) | (((((/* implicit */_Bool) (signed char)127)) ? (-960669218) : (((/* implicit */int) var_10))))))) ? (((arr_3 [i_0] [i_1]) / (min((((/* implicit */int) (signed char)-106)), (960669200))))) : ((+(((/* implicit */int) var_4)))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */int) ((arr_10 [i_0] [i_2] [i_2]) == (960669217)))) == (((/* implicit */int) arr_0 [i_0] [i_0 + 3]))));
            var_16 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2] [i_2]))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_17 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (arr_14 [i_4] [i_4] [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 1] [i_0 + 3])))));
                        var_17 = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_2]);
        }
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -960669216)))) ? (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 2] [i_0])) ? (3631920589U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 3; i_7 < 12; i_7 += 2) 
                {
                    arr_27 [i_0] [i_5] [i_6] [i_5] [i_7 - 2] |= ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0]))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_9))));
                    var_21 |= ((/* implicit */unsigned char) ((unsigned long long int) arr_26 [i_0 - 1] [i_0 - 1] [i_7 - 1]));
                }
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((int) ((unsigned int) (short)20021)));
                        var_23 *= arr_33 [i_0 + 1] [i_0 + 3] [i_8 + 2] [i_0 + 1];
                        var_24 += ((/* implicit */signed char) ((unsigned short) 2521230762757567654LL));
                    }
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
                    arr_34 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */short) (+(arr_3 [i_0] [i_5])));
                }
                arr_35 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0 + 3]))));
            }
            arr_36 [i_0] [i_5] = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [i_0 - 1]);
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5964101476537562862LL)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5])) : (4373020637686770079ULL)))) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (arr_14 [i_5] [i_5] [i_5] [i_5] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22887))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_0] [i_5] [i_5] [i_0 + 3])) ? (arr_14 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_5] [i_5]) : (arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_5] [i_5])))));
        }
        for (unsigned char i_10 = 2; i_10 < 13; i_10 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13417)) ? (-960669216) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_10] [i_0] [i_0] [i_10]))) & (1407229439U)))))));
            var_28 = ((/* implicit */unsigned long long int) min((arr_14 [i_0 + 1] [i_10] [i_0] [i_10] [i_0] [i_10]), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
            var_29 += ((/* implicit */int) max((((((((/* implicit */_Bool) 2076919239)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_10]))) : (4003595484U))) ^ (((/* implicit */unsigned int) (-(arr_24 [i_0] [i_10])))))), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_24 [i_0] [i_0])) ? (((/* implicit */int) arr_28 [i_10] [i_10] [i_0] [i_10])) : (((/* implicit */int) arr_4 [i_10])))), ((~(var_6))))))));
            arr_39 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 960669217)) ? (-960669217) : (((/* implicit */int) (signed char)124)));
        }
        for (int i_11 = 1; i_11 < 11; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                arr_44 [i_0] [i_11] = ((/* implicit */signed char) (short)-20026);
                var_30 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_12]);
            }
            for (long long int i_13 = 1; i_13 < 13; i_13 += 2) 
            {
                var_31 -= ((/* implicit */unsigned short) ((((((466133542U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_11]))))) != (min((((/* implicit */unsigned int) var_2)), (3631920589U))))) ? (3787176021704141318ULL) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_31 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_13])) : (var_9)))))));
                var_32 = ((/* implicit */signed char) 960669220);
            }
            arr_48 [i_0] [i_0] [i_0] = min((min((((/* implicit */int) min((arr_43 [i_0] [i_11]), (((/* implicit */short) arr_47 [i_0]))))), (((((/* implicit */_Bool) arr_21 [i_11] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0])) : (((/* implicit */int) (unsigned short)30676)))))), (((((/* implicit */_Bool) (-(960669226)))) ? (((int) var_9)) : (((/* implicit */int) max((arr_47 [i_0]), (arr_42 [i_0] [i_11] [i_11])))))));
            var_33 += ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0]);
            arr_49 [i_0] [i_11] [i_0] = ((/* implicit */unsigned char) (((~(((-6205077858990830429LL) ^ (arr_12 [i_0] [i_0] [i_0] [i_11]))))) * (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) arr_10 [i_11] [i_11 + 1] [i_0])), (67092480LL))) == (((long long int) arr_20 [i_11] [i_11] [i_11] [i_11]))))))));
        }
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        var_34 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) -2076919239)) : (2681880716627648081LL)))));
        var_35 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8519195295863511495ULL)) ? (arr_50 [i_14]) : (((/* implicit */int) arr_51 [i_14] [i_14]))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)960)) ? (((/* implicit */int) arr_51 [i_14] [i_14])) : (((/* implicit */int) (unsigned char)165))));
        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (-(((/* implicit */int) arr_51 [i_14] [i_14])))))));
    }
    var_38 = ((/* implicit */unsigned short) ((unsigned char) var_6));
    var_39 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -6205077858990830443LL)) ? (var_0) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1830278730)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-13418)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (signed char)-1)))))))));
}
