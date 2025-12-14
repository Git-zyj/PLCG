/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189054
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
    var_16 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_17 |= var_7;
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_1 [22LL]))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((9592207023559582888ULL) != (((/* implicit */unsigned long long int) arr_1 [8LL])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            var_20 = ((/* implicit */short) ((_Bool) arr_2 [i_0] [i_0]));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_1] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((9592207023559582888ULL) << (((/* implicit */int) arr_2 [i_0] [i_4 + 2]))))) : (((/* implicit */_Bool) ((9592207023559582888ULL) << (((((/* implicit */int) arr_2 [i_0] [i_4 + 2])) + (89))))));
                            arr_15 [i_0] = ((/* implicit */short) 9592207023559582869ULL);
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                        }
                        var_22 = ((((((/* implicit */int) arr_2 [i_0] [i_1 - 1])) ^ (((/* implicit */int) arr_7 [i_0])))) < (((/* implicit */int) ((_Bool) -663077551494453270LL))));
                        var_23 = ((/* implicit */unsigned short) arr_10 [(signed char)3] [i_2] [i_1 + 1] [i_0]);
                    }
                } 
            } 
            arr_16 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_12 [i_0] [i_1 + 2] [i_1] [i_1] [i_1]));
            arr_17 [i_0] [(unsigned short)13] [i_0] = ((/* implicit */long long int) (unsigned short)16018);
            var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(var_2)))) < (((unsigned long long int) arr_5 [i_0] [i_0] [(short)4] [i_0]))));
        }
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((long long int) 8854537050149968724ULL)) / (((/* implicit */long long int) ((/* implicit */int) arr_21 [11] [i_5] [i_0] [i_7 + 1])))));
                        var_26 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */long long int) arr_10 [i_0] [i_5] [(_Bool)1] [i_7 + 1])) : ((~(var_2)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_8 = 2; i_8 < 22; i_8 += 3) /* same iter space */
                        {
                            arr_29 [i_0] [(unsigned short)1] [i_0] [(unsigned short)10] = ((/* implicit */signed char) (~(((long long int) var_6))));
                            arr_30 [13LL] [i_0] [i_6 + 3] [i_5] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_27 [i_6 + 3] [i_8] [i_6 + 2] [i_8 - 2] [i_8] [i_7 + 1] [i_6 + 1])));
                            var_27 = ((/* implicit */unsigned char) arr_27 [i_6 + 1] [i_6 + 1] [i_6 + 4] [i_8 - 1] [i_8] [15LL] [i_7 + 1]);
                        }
                        for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) /* same iter space */
                        {
                            var_28 += ((/* implicit */long long int) arr_25 [i_7 + 1] [i_6] [i_5] [(signed char)15]);
                            var_29 &= ((/* implicit */signed char) ((long long int) var_10));
                            var_30 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)50))))));
                            var_31 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) (-((((-(8854537050149968719ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_5] [i_5] [1U] [i_9])) >> (((((/* implicit */int) arr_22 [(_Bool)1] [i_5] [i_7 + 1] [i_0])) - (20987))))))))))) : (((/* implicit */unsigned short) (-((((-(8854537050149968719ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_5] [i_5] [1U] [i_9])) >> (((((((/* implicit */int) arr_22 [(_Bool)1] [i_5] [i_7 + 1] [i_0])) - (20987))) + (11455)))))))))));
                        }
                        for (short i_10 = 2; i_10 < 22; i_10 += 2) 
                        {
                            arr_35 [i_0] [12LL] [i_0] [i_0] [i_10] [i_7 + 1] = ((/* implicit */signed char) 10518801333421717661ULL);
                            var_32 = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_5] [(unsigned short)0] [(signed char)16] [i_5] [i_5] [i_5]))))) < (6202961986861458184LL))) ? ((~(((/* implicit */int) arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (signed char i_11 = 1; i_11 < 21; i_11 += 3) 
                        {
                            var_33 = (i_0 % 2 == 0) ? (((((arr_10 [i_7 + 1] [i_6 + 4] [(short)2] [i_7]) << (((((/* implicit */int) arr_33 [i_7 + 1] [i_6 + 4] [i_6] [i_0] [i_0])) - (22))))) == (((/* implicit */int) ((((/* implicit */_Bool) -6202961986861458208LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))))))) : (((((arr_10 [i_7 + 1] [i_6 + 4] [(short)2] [i_7]) << (((((((/* implicit */int) arr_33 [i_7 + 1] [i_6 + 4] [i_6] [i_0] [i_0])) - (22))) - (100))))) == (((/* implicit */int) ((((/* implicit */_Bool) -6202961986861458208LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))))));
                            var_34 -= ((9592207023559582896ULL) / (8854537050149968719ULL));
                            arr_38 [i_5] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_5 [i_6 - 1] [i_6 - 1] [i_7 + 1] [i_0]), (arr_5 [i_6 + 2] [i_5] [i_7 + 1] [i_7]))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_35 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_7)))), (max((((((/* implicit */_Bool) (unsigned short)17040)) ? (((/* implicit */unsigned long long int) var_7)) : (9592207023559582898ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17040))) : (var_10))))))));
    var_36 = ((/* implicit */short) var_9);
    var_37 = ((/* implicit */signed char) var_6);
}
