/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145076
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
    var_19 = ((/* implicit */int) var_7);
    var_20 = ((/* implicit */long long int) var_3);
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? ((((+(((/* implicit */int) arr_2 [i_0] [i_0 - 1])))) * (((/* implicit */int) arr_0 [7U])))) : (((/* implicit */int) arr_0 [(short)7])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_7 [14U] |= ((/* implicit */unsigned int) -241428140);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_18 [(unsigned char)2] [(unsigned char)10] [i_2] [8LL] [i_2] &= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) == (max((arr_6 [2LL] [i_2]), (((/* implicit */long long int) 0U)))))))));
                        var_23 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_1 [i_2]))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) 2776153695143071812LL);
                arr_21 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2776153695143071795LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2776153695143071800LL)))) ? (-2776153695143071812LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [19])))))));
                arr_22 [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10958)) >> (((2776153695143071812LL) - (2776153695143071803LL)))));
            }
        }
        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            arr_26 [i_1] [i_1] [i_6] = ((/* implicit */long long int) arr_24 [i_6]);
            var_25 = ((/* implicit */unsigned short) min((var_25), (arr_14 [i_1 + 3])));
            var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_1]))));
            arr_27 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (-(2478688767U)))) / (min((((/* implicit */long long int) arr_1 [i_1])), (arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 1])))));
        }
        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) (+(arr_5 [i_7])));
            var_28 = ((/* implicit */int) min(((+(((arr_5 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31174))))))), (((/* implicit */unsigned int) arr_30 [8LL] [i_1] [i_1]))));
            var_29 += ((/* implicit */unsigned short) -2776153695143071812LL);
        }
        var_30 = ((/* implicit */unsigned short) min(((~(arr_6 [i_1 + 3] [i_1]))), (((/* implicit */long long int) 2478688767U))));
    }
    for (int i_8 = 1; i_8 < 19; i_8 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 3; i_9 < 18; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                var_31 = ((/* implicit */signed char) 1816278543U);
                var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)2229))));
            }
            var_33 = arr_23 [14LL] [i_9];
            var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_9] [i_9 + 3] [i_8 + 1]))));
        }
        for (unsigned short i_11 = 2; i_11 < 19; i_11 += 3) 
        {
            arr_43 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)114)) == (((/* implicit */int) (_Bool)1))));
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_31 [i_8] [i_8])) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (399432947326288211ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [20ULL] [(_Bool)1] [i_11 + 1]))) : ((~(arr_28 [(unsigned char)6] [i_8] [(unsigned char)6]))))))));
            var_36 |= ((/* implicit */long long int) arr_16 [i_8] [21LL] [i_8] [i_8] [i_8 + 2] [i_11 + 1]);
            arr_44 [i_8] [i_11] [i_11] = ((/* implicit */int) arr_6 [i_11] [i_11]);
        }
        var_37 = ((((/* implicit */_Bool) (-(arr_32 [19U] [i_8])))) ? ((~((+(((/* implicit */int) arr_9 [i_8] [i_8])))))) : (((/* implicit */int) arr_30 [22U] [i_8] [20LL])));
        arr_45 [7LL] = ((/* implicit */_Bool) min((-2776153695143071809LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [(unsigned short)14] [i_8])) ? (arr_19 [(unsigned char)2] [i_8]) : (arr_19 [20U] [(unsigned char)0]))))));
    }
}
