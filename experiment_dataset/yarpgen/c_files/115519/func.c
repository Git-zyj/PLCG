/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115519
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_1))))))), (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0]) : (arr_1 [i_0]))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_2))));
        var_15 *= ((/* implicit */unsigned short) min(((-(arr_1 [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_16 = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0])), (var_3)))) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                var_18 = (~((+(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) var_1)))))));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_9 [i_3] [i_2]), (arr_9 [i_0] [6U])))))))));
            }
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                var_20 = arr_4 [i_0] [i_0];
                arr_13 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) (+((~(var_13)))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_3))));
            }
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
            var_22 = arr_6 [(unsigned char)0];
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2825555212474161290ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3167017760U)))))) : (2740526084U)));
            var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((17111983560352894543ULL) | (((/* implicit */unsigned long long int) 1554441184U))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : ((((!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])))) ? ((+(((/* implicit */int) arr_9 [i_0] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_25 -= ((/* implicit */unsigned int) ((unsigned short) min((arr_15 [10]), (((/* implicit */unsigned int) arr_2 [i_0])))));
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                var_27 |= ((/* implicit */unsigned char) var_0);
            }
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                arr_24 [i_0] [i_0] = ((/* implicit */int) var_4);
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [(unsigned char)0])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_7] [i_7]))))) ? ((+(arr_11 [i_0] [i_5] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_5])))));
                var_29 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)29742)) ? (15621188861235390326ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1546))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
            }
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                arr_28 [i_0] [11ULL] = ((/* implicit */int) var_4);
                var_30 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(var_10)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15621188861235390325ULL)))))));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_8])) ? ((+(((((/* implicit */_Bool) var_11)) ? (arr_11 [i_0] [i_5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4633019035661281380LL)))) ? (((1554441212U) >> (((2740526083U) - (2740526054U))))) : (arr_15 [i_0]))))));
                var_32 += ((/* implicit */unsigned long long int) (-((+((~(((/* implicit */int) arr_20 [i_5] [i_5]))))))));
            }
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                arr_31 [(unsigned char)10] &= ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) arr_19 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0])) ? (arr_0 [(unsigned short)8]) : (arr_7 [i_0] [10] [i_9]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                var_33 = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_34 += ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_4)))), (var_1)))));
                    arr_35 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((arr_19 [i_0] [i_0] [i_9] [i_9]), (((/* implicit */int) arr_4 [5U] [i_0])))), ((-(((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) 2825555212474161290ULL)) ? (138386604) : (651099498))) : (var_1)));
                    var_35 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_33 [i_0] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_19 [i_0] [i_9] [i_9] [i_9])))))) : (min((2825555212474161291ULL), (((/* implicit */unsigned long long int) 1875505669))))))));
                }
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))))) ? (((long long int) min((var_13), (((/* implicit */unsigned long long int) arr_23 [i_11] [i_9] [i_5] [(unsigned short)10]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_15 [i_11]), (((/* implicit */unsigned int) arr_4 [i_0] [i_11]))))) ? (((/* implicit */int) var_8)) : (var_1)))))))));
                    arr_38 [i_0] [2ULL] [i_9] [i_11] [4LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */unsigned long long int) arr_6 [i_9])) : (var_10))))))));
                    arr_39 [i_0] [i_0] = ((/* implicit */long long int) min(((-(arr_29 [i_0] [4ULL] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) min((var_13), (arr_7 [i_0] [i_9] [i_0])))))));
                    var_37 = ((/* implicit */int) var_9);
                    var_38 = ((/* implicit */unsigned long long int) ((int) arr_5 [i_5] [i_5]));
                }
                arr_40 [0ULL] [i_9] &= ((/* implicit */unsigned char) min((((((((/* implicit */unsigned int) -441117237)) < (2740526084U))) ? (((/* implicit */int) arr_33 [i_0] [i_9])) : (((/* implicit */int) arr_36 [i_0] [i_5] [i_5] [i_0] [i_9])))), ((~(((/* implicit */int) arr_23 [i_0] [i_0] [(unsigned char)6] [i_9]))))));
                var_39 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_5)) : (var_9)))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_9])), (((((/* implicit */_Bool) arr_23 [(signed char)0] [6LL] [(signed char)0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (var_1) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_25 [i_0] [i_9] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_5] [i_0] [i_9]))))))));
            }
            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(arr_29 [i_5] [i_5] [i_0])));
            var_40 = ((/* implicit */long long int) min((var_40), (var_9)));
            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((var_13) - (13376012539542718924ULL)))))) ? (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) arr_6 [i_5])))) : ((+(arr_7 [i_0] [(unsigned short)3] [(unsigned short)3]))))))))));
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_10)))))))));
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) || (((/* implicit */_Bool) (+(min((((/* implicit */int) (_Bool)1)), (arr_32 [i_12] [(unsigned char)6] [i_12] [i_12])))))))))));
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                arr_47 [i_12] [i_12] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_13])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_33 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_5 [i_13] [i_13])) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) arr_15 [i_0]))))))));
                var_44 *= min((var_10), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)137)) ? (2825555212474161290ULL) : (6402305334997138077ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_15 [i_12]) : (((/* implicit */unsigned int) var_1)))))))));
                var_45 = ((/* implicit */_Bool) var_0);
                var_46 = ((/* implicit */_Bool) ((long long int) arr_25 [i_0] [i_0] [i_0] [i_0]));
            }
        }
    }
    var_47 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
}
