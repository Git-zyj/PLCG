/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17568
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
    var_18 = ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */long long int) var_17)), (max((((((/* implicit */long long int) -6)) + (arr_0 [i_0]))), (((/* implicit */long long int) (unsigned short)0)))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = (+(arr_2 [i_1] [i_1]));
        var_21 = ((/* implicit */short) arr_2 [i_1] [i_1]);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) > (arr_2 [i_1] [i_1])));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_23 &= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_6 [i_1] [i_2] [i_1]))));
            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11801366638792032702ULL)) ? (arr_5 [i_1]) : (arr_5 [i_2])));
        }
        for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_25 = ((/* implicit */int) arr_3 [i_4]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_3 - 2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 + 2] [(unsigned short)6] [i_3 - 3]))) : (arr_2 [i_3 - 1] [i_3 - 1])));
                            var_27 += (+(((/* implicit */int) var_11)));
                            var_28 = ((/* implicit */unsigned short) (short)28566);
                            arr_18 [(signed char)10] [(signed char)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) ^ (arr_9 [i_1] [i_1] [i_4])))) ? (arr_12 [i_3 + 2] [i_4] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                        }
                    } 
                } 
                var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)4481)) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) (short)4481))))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        arr_23 [i_1] [i_3] [i_1] [i_7] [i_3] [i_7] = ((/* implicit */int) arr_14 [i_3 - 3] [i_4] [i_8 + 2]);
                        var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1))))) && (((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 - 1]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */short) 11279133685653562848ULL);
                        var_32 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_33 = ((((/* implicit */_Bool) (unsigned short)42294)) ? (arr_16 [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3 + 1]) : (arr_16 [i_3 + 1] [i_3 + 2] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 + 1]));
                    }
                    arr_26 [i_1] [i_1] [i_1] [0U] = ((/* implicit */unsigned int) 671957938);
                    var_34 = ((/* implicit */long long int) arr_6 [0] [i_3 + 1] [i_4]);
                    var_35 = ((/* implicit */unsigned char) (~(arr_22 [i_3] [i_3] [i_3] [i_3 - 3] [i_3] [i_3])));
                }
                arr_27 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [7LL] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))) : (arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 1] [14])));
            }
            var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4009540736082280082LL))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 2) 
                        {
                            arr_35 [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-4473)) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)4481)))))));
                            arr_36 [i_1] [i_3 + 1] [i_10] [i_1] [i_11] [i_12] [i_12] = ((/* implicit */_Bool) arr_21 [i_1] [i_3] [i_3] [i_11] [i_12]);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            arr_39 [i_1] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1]);
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 + 2])) ? (143856150378343670LL) : (((/* implicit */long long int) (~(arr_16 [4] [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3 - 3]))))));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) arr_22 [(signed char)3] [i_1] [i_3] [i_10] [(unsigned short)13] [i_3]))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned char) ((arr_3 [i_3 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 - 2]))) : (-5298609536672734482LL)));
                            var_39 += ((/* implicit */unsigned int) var_15);
                            var_40 = ((/* implicit */int) (~(arr_2 [i_3 - 2] [i_3])));
                        }
                        var_41 &= ((/* implicit */_Bool) (~(var_4)));
                    }
                } 
            } 
            var_42 = ((/* implicit */signed char) (~(arr_16 [i_3 + 1] [i_3] [i_3] [9] [i_3] [i_1])));
        }
        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            var_43 = ((/* implicit */long long int) ((3317647183U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(unsigned char)13] [i_15] [i_15] [(_Bool)1] [10U])) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) arr_20 [i_1])))))));
            var_44 = ((/* implicit */unsigned char) (-(arr_38 [i_1] [i_1] [14U] [(short)12] [i_15] [i_15])));
            var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        }
    }
    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((4294967291U) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) var_14)) : (max((((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_16)))), ((+((-2147483647 - 1))))))));
}
