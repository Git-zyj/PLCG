/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149963
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
    var_12 = max((var_2), (((/* implicit */short) (!(((/* implicit */_Bool) var_1))))));
    var_13 -= var_6;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 6; i_0 += 1) /* same iter space */
    {
        var_14 = max((530850957), (((/* implicit */int) (_Bool)1)));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_7))));
        arr_3 [i_0] = (~(min(((-(var_11))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [(unsigned short)4])) | (var_8))))));
        var_17 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) max((var_5), (var_5)))), (max((arr_5 [i_1 + 4]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        var_18 += ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1 - 1]) < (arr_1 [i_1 + 2]))))) >= (max((arr_1 [i_1 + 4]), (var_8)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_11 [(_Bool)1] [2LL] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((signed char) arr_2 [0ULL]));
            var_19 = (!(((/* implicit */_Bool) (short)-32541)));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) || (((/* implicit */_Bool) ((int) arr_8 [i_2] [i_2] [i_1])))));
            arr_12 [i_2] = ((/* implicit */unsigned char) ((signed char) arr_1 [i_1]));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 4; i_4 < 7; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) var_0);
                            var_22 &= ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) (_Bool)1))), (arr_16 [(unsigned char)9] [i_3] [i_3] [i_4 + 3])))), ((-(((/* implicit */int) arr_8 [i_6 + 1] [i_4 - 2] [i_1 + 4]))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
                        {
                            arr_24 [(unsigned char)7] [i_5] = ((/* implicit */unsigned long long int) var_5);
                            arr_25 [i_1 + 3] [i_5] = max((((/* implicit */long long int) min((684260203U), (((/* implicit */unsigned int) (short)-32541))))), (max((((/* implicit */long long int) arr_21 [i_4 - 4] [i_4 + 3] [i_4])), (var_3))));
                        }
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_4 - 1])), ((-(arr_2 [6U]))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_35 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((unsigned short) arr_31 [i_1] [i_1] [i_1] [i_1] [(signed char)4] [i_1])));
                            arr_36 [i_1] [i_8] [i_9] = ((/* implicit */_Bool) arr_2 [i_10]);
                            var_24 = ((/* implicit */unsigned char) min((max((var_6), (var_6))), (((/* implicit */unsigned long long int) ((var_6) != (arr_19 [i_9] [i_9] [1] [i_8 + 1] [i_3] [i_1 - 1]))))));
                        }
                    } 
                } 
            } 
            arr_37 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */short) arr_13 [i_3])), (arr_4 [i_1])))), (max((((/* implicit */unsigned short) arr_29 [i_1] [i_1] [i_1] [(_Bool)1])), (arr_15 [i_3] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(short)0] [i_3] [i_1] [(short)0]))) : (min((((/* implicit */unsigned long long int) arr_29 [i_1] [i_3] [(unsigned char)2] [i_3])), (arr_27 [i_1 + 4] [i_1 + 1])))));
        }
        /* vectorizable */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)36))) || (((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_1 + 2] [i_11] [i_11])))));
            var_26 = ((/* implicit */unsigned char) ((_Bool) arr_10 [i_11] [i_1] [i_11]));
            var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_15 [0] [i_1 + 1] [i_1])) + (arr_22 [i_1] [i_1 + 3] [i_1] [i_1] [i_11] [i_11])))));
            var_28 = ((/* implicit */unsigned short) arr_32 [i_1 + 4] [i_11]);
            var_29 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
        }
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_30 = ((/* implicit */int) arr_40 [i_1]);
            /* LoopSeq 1 */
            for (unsigned char i_13 = 2; i_13 < 8; i_13 += 4) 
            {
                arr_45 [4LL] [i_12] [i_12] [i_1] = ((/* implicit */unsigned long long int) var_3);
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_13 - 1] [i_12] [i_1 + 4])) ? (arr_31 [i_1] [i_12] [i_12] [(unsigned char)9] [i_12] [i_13 + 1]) : (((/* implicit */int) arr_16 [i_13] [i_13 - 2] [i_13 - 2] [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)))) || ((!(((/* implicit */_Bool) arr_39 [i_1] [i_13]))))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)20001))))))))));
            }
            arr_46 [i_1] [i_12] [i_12] |= ((/* implicit */signed char) 997210103);
            var_32 = ((/* implicit */unsigned char) (+(((arr_28 [i_1 + 4] [i_12]) ? (((/* implicit */int) arr_28 [i_1 + 3] [i_12])) : (((/* implicit */int) arr_28 [i_1 + 2] [i_12]))))));
            var_33 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)0)))))))));
        }
    }
    var_34 ^= ((/* implicit */_Bool) var_10);
}
