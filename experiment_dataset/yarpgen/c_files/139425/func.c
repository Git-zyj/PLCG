/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139425
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
    var_12 = ((/* implicit */unsigned char) 3970045080155025487LL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 2])) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_0 + 1] [i_2]), (arr_5 [i_0 - 2] [i_0 + 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_4 [i_2] [i_0]) : (((/* implicit */int) arr_1 [i_0 + 2]))))) ? ((+(((/* implicit */int) var_2)))) : (((var_5) % (arr_4 [i_2] [i_2]))))) : (arr_8 [i_0 + 2] [i_0 + 2])));
            arr_10 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((/* implicit */int) ((short) arr_3 [i_0] [i_2]))) : (((/* implicit */int) arr_3 [i_0 + 2] [i_2]))));
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_14 = ((/* implicit */long long int) var_4);
                var_15 &= ((/* implicit */int) min((((/* implicit */unsigned short) (short)-30585)), ((unsigned short)7027)));
            }
            var_16 = ((2912341495U) <= (((/* implicit */unsigned int) 1269238784)));
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_17 ^= min((((unsigned short) max((((/* implicit */int) (short)(-32767 - 1))), (arr_4 [i_4] [i_4])))), (arr_14 [i_0 - 1] [i_4]));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (short)-30585))));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_0 + 2] [i_5])) : (max((2147483647), (((/* implicit */int) var_1)))))) != (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_13 [i_5] [i_4] [i_0])), (arr_17 [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : (((/* implicit */int) var_8)))))))));
                arr_18 [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_0] [i_0] [i_5]));
            }
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
            {
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_0 - 3])))))) + (((((/* implicit */_Bool) arr_16 [i_6] [i_4])) ? (((/* implicit */long long int) (-(var_7)))) : (min((arr_7 [i_0] [i_4] [i_6]), (((/* implicit */long long int) var_10)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    arr_23 [i_6] [i_4] [i_6] [i_0 + 1] [i_7] [i_7] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_7 [i_0 - 1] [i_0 - 1] [i_7 + 1])));
                    var_21 = ((/* implicit */short) var_7);
                    var_22 ^= ((/* implicit */int) (unsigned short)62009);
                }
                arr_24 [i_0] [i_4] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_19 [i_6] [i_0] [i_6] [i_0 - 2])) != (((/* implicit */int) arr_19 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2])))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */int) arr_22 [i_0] [i_0 - 3] [i_6] [i_4] [i_4] [i_0])) <= ((~(((/* implicit */int) arr_22 [1LL] [i_0 - 2] [i_6] [i_6] [1LL] [i_6]))))))));
            }
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
            {
                var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_8] [i_0 - 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 - 2]))))) : (((/* implicit */int) arr_14 [i_0 - 3] [i_0 - 1]))));
                var_25 = ((/* implicit */int) arr_15 [i_0 + 2] [i_4]);
            }
            arr_28 [i_0] [i_0 - 2] [i_0 + 1] = ((/* implicit */long long int) var_3);
        }
        var_26 = ((/* implicit */unsigned short) min((11U), (((/* implicit */unsigned int) (signed char)-1))));
        /* LoopSeq 2 */
        for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            arr_31 [i_9] = ((/* implicit */unsigned char) arr_1 [(_Bool)1]);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_9 - 1] [i_9 + 1]))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) var_10))));
            arr_32 [i_9] [i_9] = var_3;
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (signed char)3)) ^ (((/* implicit */int) var_3))))))));
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (arr_4 [i_10] [i_10]))))));
            /* LoopSeq 3 */
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                arr_41 [i_10] [i_10] &= ((/* implicit */unsigned short) arr_27 [i_11] [i_11] [i_11]);
                var_30 = ((/* implicit */unsigned short) arr_40 [i_0]);
            }
            for (unsigned int i_12 = 2; i_12 < 18; i_12 += 3) 
            {
                var_31 &= ((/* implicit */_Bool) ((unsigned int) ((int) var_2)));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55012)) ^ (((/* implicit */int) (unsigned short)35662))));
                var_33 = arr_35 [i_0 - 3] [i_10];
            }
            for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_14 = 2; i_14 < 16; i_14 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) 2097151LL))));
                    var_35 = ((/* implicit */unsigned short) (unsigned char)70);
                    arr_52 [i_0] [i_0] &= ((/* implicit */signed char) arr_17 [i_10]);
                    arr_53 [i_0 - 2] [i_0 - 2] [i_0] = ((((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_10])) ? (arr_34 [i_13] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_40 [i_0])) ? (arr_8 [i_0] [i_10]) : (((/* implicit */int) arr_20 [i_0 + 1] [i_0 - 2] [i_0])))));
                }
                for (int i_15 = 3; i_15 < 19; i_15 += 2) 
                {
                    var_36 ^= arr_16 [i_10] [i_15 - 2];
                    var_37 = ((/* implicit */int) ((arr_5 [i_0 - 2] [i_0 + 1]) / (((/* implicit */long long int) var_6))));
                }
                arr_56 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_13])) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0 + 1] [i_10]))))) ? (arr_54 [i_0 + 2]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (272480578U)))));
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) arr_44 [i_0 - 3] [i_0 + 1] [i_0 + 2]))));
                arr_57 [i_13] [i_10] [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_10])) ? (((/* implicit */int) arr_29 [i_10])) : (((/* implicit */int) arr_29 [i_10]))));
                arr_58 [i_0 - 3] [i_0 - 3] = var_3;
            }
            arr_59 [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63240)) % (((/* implicit */int) (unsigned short)30380))));
            var_39 = ((/* implicit */unsigned short) ((arr_35 [i_0 - 2] [i_0 + 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10])))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_16 = 2; i_16 < 17; i_16 += 4) 
    {
        var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
        arr_63 [i_16 - 2] = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)65521), ((unsigned short)0)))) + (max((arr_44 [i_16 + 2] [i_16 + 2] [i_16 + 3]), (((/* implicit */int) (_Bool)0))))));
        arr_64 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_37 [i_16] [i_16 - 1] [i_16 + 1]), (arr_37 [i_16] [i_16 + 1] [i_16 - 2])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_16] [i_16] [i_16 - 1])) && (((/* implicit */_Bool) (signed char)1)))))));
    }
}
