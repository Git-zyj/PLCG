/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176736
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (var_13)))));
    var_16 = ((/* implicit */unsigned char) min((var_14), (min((((((/* implicit */int) (unsigned char)150)) / (var_6))), (var_7)))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((/* implicit */int) ((((/* implicit */_Bool) 16039648393639687620ULL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (14323390870562469640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */int) var_12);
                                var_18 = ((/* implicit */unsigned char) min(((~(((((/* implicit */int) arr_7 [i_2] [i_1] [i_2] [i_0])) / (var_7))))), (((((int) var_7)) | (min((arr_0 [i_0] [i_2]), (-2121190321)))))));
                                var_19 &= ((/* implicit */unsigned char) (~((-((+(4123353203147081961ULL)))))));
                                var_20 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_4 [i_0]))))))));
                                var_21 = ((((/* implicit */_Bool) (+(((int) var_6))))) ? (((/* implicit */unsigned long long int) ((int) var_6))) : (min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10742))) : (arr_8 [i_0] [i_1] [(unsigned char)10] [i_3]))), ((~(var_12))))));
                            }
                        } 
                    } 
                    var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [(_Bool)1])) ? (var_9) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) ((arr_19 [i_5] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        {
                            var_24 = (-(arr_11 [i_5] [(short)2] [i_7] [i_9]));
                            var_25 *= ((/* implicit */unsigned long long int) ((var_10) <= ((-(var_4)))));
                            arr_31 [i_5] [8LL] [i_5] [i_7] |= ((/* implicit */unsigned char) (~(var_10)));
                            arr_32 [i_9] = (+(((((/* implicit */unsigned long long int) 1637176384)) / (14323390870562469669ULL))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_5)) ? (15293460013968226322ULL) : (((/* implicit */unsigned long long int) arr_15 [i_5] [12] [i_5] [i_5] [i_5] [(unsigned char)12] [i_6]))))))));
        }
        var_27 = var_14;
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))))))));
        arr_33 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_28 [i_5] [i_5] [i_5] [i_5] [(unsigned char)0])), (((((/* implicit */_Bool) ((int) arr_16 [i_5]))) ? (((/* implicit */unsigned long long int) var_13)) : (min((((/* implicit */unsigned long long int) arr_3 [i_5] [i_5])), (4123353203147081961ULL)))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_29 -= ((/* implicit */unsigned short) 1500669141);
        /* LoopSeq 1 */
        for (unsigned char i_11 = 4; i_11 < 10; i_11 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) var_4);
            var_31 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) (-2147483647 - 1))) / (4123353203147081945ULL)))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (int i_13 = 3; i_13 < 10; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        {
                            var_32 = ((((((/* implicit */_Bool) arr_50 [i_10] [i_11] [i_11] [(unsigned short)3] [i_14] [i_13 - 1])) ? (var_1) : (((/* implicit */int) arr_38 [(_Bool)1])))) | ((-(var_7))));
                            var_33 = ((/* implicit */_Bool) 14323390870562469645ULL);
                            var_34 = ((((/* implicit */_Bool) (short)12)) ? (2147483639) : (-2147483639));
                        }
                    } 
                } 
            } 
            var_35 = (+(((/* implicit */int) arr_22 [i_11 - 2] [i_11 - 2] [i_11 - 3] [i_11 - 2])));
        }
        var_36 += ((/* implicit */unsigned char) -2147483640);
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_37 += ((/* implicit */unsigned char) var_6);
        arr_53 [i_15] = ((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((((((/* implicit */int) var_0)) ^ (465129919))) ^ (((/* implicit */int) ((4123353203147081928ULL) >= (((/* implicit */unsigned long long int) var_13))))))))));
        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (-(((14323390870562469655ULL) + (((/* implicit */unsigned long long int) arr_0 [i_15] [i_15])))))))));
        arr_54 [(unsigned short)5] [i_15] = ((/* implicit */int) arr_10 [i_15] [i_15] [i_15] [i_15]);
    }
}
