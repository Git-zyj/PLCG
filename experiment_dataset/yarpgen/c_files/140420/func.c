/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140420
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-46)))));
        var_12 = ((/* implicit */signed char) 68234652);
    }
    for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_13 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -68234653)) ? (var_8) : (arr_5 [i_1 - 1] [i_1 - 3])))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (_Bool)1)) : (-2095406018)));
            /* LoopSeq 4 */
            for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                arr_11 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (+((-2147483647 - 1))));
                var_15 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned int) var_4))), (14569236967451582852ULL)));
                arr_12 [i_1] = ((/* implicit */long long int) ((int) ((long long int) ((var_8) < (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))))));
                var_16 = ((/* implicit */unsigned long long int) (signed char)-35);
                var_17 |= ((/* implicit */unsigned long long int) (+(var_6)));
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
            {
                arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_1 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 4 */
                for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    var_18 = (~(((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4] [i_4] [i_2])) ? (191425395U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 2] [i_4] [i_5 - 1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) var_10);
                        arr_20 [i_2] [i_2] [i_4] [i_5 - 2] [i_6] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2]))));
                        var_20 = ((/* implicit */long long int) arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 2]);
                    }
                    arr_21 [i_1] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(var_4)))) % (arr_17 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 2] [20U])));
                    var_21 -= ((/* implicit */unsigned short) (-(arr_16 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_2])));
                }
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                {
                    arr_24 [i_1] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) ((unsigned char) var_9));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    arr_25 [i_1 - 3] [i_7] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_7]))));
                    var_23 += (-(((/* implicit */int) var_0)));
                }
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_0))));
                    var_25 = ((/* implicit */unsigned short) (-(8795096578985165706ULL)));
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */long long int) var_4)) != (((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_6)))));
                    arr_33 [i_1] [i_1] = 4898386382957999060LL;
                    arr_34 [i_4] [i_4] [i_1] [i_2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_1 + 1] [i_1] [i_1 - 3] [i_1 + 1])) ? ((~(1065656027266671949ULL))) : (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) var_1)))))));
                }
            }
            for (long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
            {
                var_27 += ((/* implicit */signed char) 3581389259646318827LL);
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) max((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_2)))))))));
            }
            for (long long int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
            {
                var_29 += ((/* implicit */_Bool) var_0);
                arr_39 [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), ((+(((/* implicit */int) arr_38 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 1]))))));
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1048560LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)0))))) : (((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) : (min((-1048561LL), (arr_23 [i_1 + 1] [i_1 + 1] [i_1] [i_11] [(unsigned char)10] [i_1 + 1])))))));
                /* LoopSeq 4 */
                for (short i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */long long int) (((+(arr_7 [i_1] [i_1 - 3] [i_1 - 2]))) > (min((arr_7 [i_1] [i_1] [i_1 - 3]), (arr_7 [i_1] [i_1 + 1] [i_1 + 1])))));
                    arr_42 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 3])) ? (((((/* implicit */_Bool) -2215492564894534718LL)) ? (var_8) : (((/* implicit */long long int) arr_17 [i_1] [i_2] [i_11] [i_11] [i_12])))) : (((/* implicit */long long int) ((unsigned int) 3581389259646318822LL))))) : (((/* implicit */long long int) ((unsigned int) arr_37 [i_1] [i_1 - 3] [i_12] [i_11])))));
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_30 [i_1] [i_2] [i_2] [(signed char)19])) % (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_12] [(unsigned short)13] [i_2]))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [(_Bool)1]))))))));
                    var_33 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1 - 2] [10U] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [8LL] [i_1] [i_1 - 2] [i_2]))) : (501385965933619903ULL)))));
                    var_34 = ((/* implicit */short) ((long long int) (~(1640850591354637605LL))));
                }
                /* vectorizable */
                for (short i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_1 - 1])) ? (arr_0 [i_2] [i_1 + 1]) : (arr_0 [i_2] [i_1 - 3])));
                    var_36 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 16213918821204202253ULL)) ? (((/* implicit */int) arr_9 [i_1 - 3] [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) (signed char)0))));
                    var_37 = ((/* implicit */signed char) ((short) var_6));
                    var_38 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (short i_14 = 0; i_14 < 22; i_14 += 3) /* same iter space */
                {
                    arr_47 [i_1] [i_1] [i_1] [(unsigned short)21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_2] [i_2] [1])))))) : (min((((/* implicit */unsigned long long int) (signed char)12)), (arr_7 [i_1] [i_1] [i_1 - 3])))));
                    arr_48 [i_1 - 1] [i_11] [i_1] [i_1 - 1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)16256)), (0)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) -1)) ? (9651647494724385909ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_11])))))))) ? (max((arr_5 [i_1] [i_14]), (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((36028797018963968LL) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5)))))));
                    arr_49 [i_1] [i_1] [i_1] [i_14] [i_11] = ((/* implicit */unsigned int) max(((-(6417761131149083539LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_3))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)131))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        arr_53 [i_1 - 1] [i_1] [i_11] [i_11] [i_15] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9651647494724385901ULL)) ? (arr_19 [i_1] [i_2] [i_11] [i_14] [i_15]) : (((/* implicit */int) var_9))))) : (arr_16 [i_1 - 2] [i_2] [i_1 + 1] [i_1]));
                        var_39 ^= ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                        arr_54 [i_1 + 1] [i_1 + 1] [i_11] [i_14] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 + 1])) ? (arr_28 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_11]) : (arr_28 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 1] [i_15])));
                    }
                    var_40 = ((/* implicit */signed char) arr_32 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]);
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) arr_13 [i_2] [i_2] [i_1 - 2] [i_2]))))))));
                    var_42 = ((/* implicit */signed char) arr_46 [i_1 + 1] [i_1] [i_1 + 1] [i_11]);
                    var_43 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((1927437245U) << (((max((var_6), (((/* implicit */long long int) (-2147483647 - 1))))) - (8708143382609619900LL)))))), (((((/* implicit */_Bool) arr_51 [i_1 - 1] [i_2] [i_2] [i_2] [i_2] [5U] [i_16])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_57 [i_1] [i_1] [i_11] [i_16]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    arr_58 [i_1] [i_2] [i_1] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) / (arr_57 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]))))));
                }
            }
            var_44 *= ((/* implicit */signed char) (~((+(((/* implicit */int) arr_26 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 3]))))));
            arr_59 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_2] [i_1])))) ? ((~((+(var_8))))) : (((long long int) (!(((/* implicit */_Bool) 18201610183496819577ULL)))))));
            var_45 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_5 [i_1 - 3] [i_1 + 1])), (arr_0 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1])) ? (arr_5 [i_1 - 1] [i_1 + 1]) : (arr_5 [i_1 - 3] [i_1 + 1]))))));
        }
        for (int i_17 = 4; i_17 < 18; i_17 += 3) 
        {
            var_46 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_1] [i_1] [i_1 - 3] [i_1 - 2])) >> (((((/* implicit */int) arr_9 [i_1 - 3] [i_1 - 3] [i_1 - 3])) - (235)))))))))));
            arr_64 [i_1] [(unsigned char)16] = ((/* implicit */unsigned int) var_9);
            var_47 -= ((/* implicit */_Bool) ((max((var_8), (((/* implicit */long long int) (_Bool)1)))) - (((((/* implicit */_Bool) var_5)) ? (arr_61 [i_1]) : (arr_61 [i_1 + 1])))));
        }
        var_48 += arr_3 [i_1 + 1];
    }
    var_49 = ((/* implicit */unsigned long long int) var_5);
}
