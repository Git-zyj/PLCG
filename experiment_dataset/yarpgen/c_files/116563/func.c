/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116563
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
    var_19 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (unsigned char)78);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned short)4876))))))) >= (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) -1220172998)) : (2364780459U)))) & (((unsigned long long int) arr_5 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned short)60666))));
                        var_23 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 2364780459U)), (((((/* implicit */_Bool) (unsigned short)60660)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (-951640149384624964LL))))))));
                        var_24 = ((/* implicit */unsigned int) (unsigned short)60659);
                    }
                } 
            } 
        }
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_25 = ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned char)207)))) / (((/* implicit */int) (signed char)(-127 - 1)))));
        /* LoopSeq 1 */
        for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            arr_19 [i_4] [i_4] [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60659)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)127))))) ? (max((max((((/* implicit */unsigned long long int) arr_14 [i_4])), (1754894832666402427ULL))), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69)))));
            var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (arr_14 [i_5 - 1]) : (arr_14 [i_5 + 1])))) || (((/* implicit */_Bool) ((long long int) arr_14 [i_5 + 1])))));
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((unsigned int) arr_15 [i_5 - 1] [i_5 - 1])) <= (((/* implicit */unsigned int) (-(arr_16 [i_5 + 1] [(unsigned char)0])))))))));
        }
        var_28 *= ((/* implicit */unsigned int) min((-2147483645), (((/* implicit */int) ((unsigned short) (_Bool)1)))));
    }
    for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 4; i_8 < 13; i_8 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        var_29 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 3233402104U)) ? (((/* implicit */long long int) 1223145457U)) : (arr_20 [i_6 + 2] [i_7]))));
                        var_30 = min((min((arr_25 [i_8] [i_8 - 2] [i_8 - 3]), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)4)), (arr_27 [i_8] [i_8])))))), ((+(-5955615335709671813LL))));
                        var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_28 [i_6 + 2] [i_6 + 2] [i_6] [i_6] [(signed char)8])))) | (((((/* implicit */_Bool) arr_28 [i_6 + 1] [i_6] [i_6] [i_6] [8LL])) ? (arr_28 [i_6 - 1] [i_6] [0LL] [i_6] [(signed char)12]) : (arr_28 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [6LL])))));
                        var_32 ^= ((/* implicit */long long int) ((((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4876)) ? (arr_18 [(unsigned char)8]) : (-2998471499507618011LL)))) || (((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6 - 1])))))));
                        var_33 = ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_6 + 1]))) ? (((-7108993486820973441LL) | (arr_5 [i_6 + 1]))) : ((~(arr_5 [i_6 - 2]))));
                    }
                    for (int i_10 = 4; i_10 < 15; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            arr_36 [i_6] [12] [i_6] [i_8] = ((unsigned int) max((arr_18 [i_7]), (arr_18 [i_6 - 1])));
                            var_34 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_35 [i_8 + 2] [i_6 + 2] [i_6 - 2] [i_6] [i_6])))));
                            arr_37 [i_8] [i_10] [i_8 + 1] [i_7] [i_8] = ((/* implicit */long long int) arr_22 [i_8 - 3] [i_8 - 3] [i_10]);
                            var_35 = ((long long int) ((((/* implicit */long long int) arr_16 [i_6] [i_8])) <= (-9118350085730964424LL)));
                        }
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)34))) >= (arr_32 [i_6 + 1] [i_6] [i_7] [14U] [i_6] [i_10])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) <= (((/* implicit */int) arr_1 [i_8 - 2] [i_7])))))))), (3U))))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((long long int) ((-272913870) & (((/* implicit */int) arr_8 [i_10] [(unsigned short)0] [i_10 - 3] [i_8]))))))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_38 ^= ((/* implicit */unsigned short) ((_Bool) arr_31 [i_6] [i_7]));
                        arr_40 [i_12] [i_12] [i_12] [(signed char)6] &= ((/* implicit */unsigned int) (+(arr_39 [i_6 - 1] [i_8 + 1] [i_8] [i_8])));
                        var_39 |= ((/* implicit */signed char) ((int) 6823737724011676356LL));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 3; i_13 < 15; i_13 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_6 - 2] [i_8 - 4] [i_8 - 4] [i_13] [i_13 + 1] [i_13])) ? (arr_32 [7] [i_6 - 1] [i_8] [i_8] [i_8] [i_8 + 1]) : (((/* implicit */long long int) -272913854))));
                        arr_43 [2LL] [(unsigned char)8] [i_7] [i_7] [(unsigned char)14] [i_7] |= ((/* implicit */unsigned short) -5955615335709671812LL);
                    }
                    var_41 = ((/* implicit */int) (-(max((arr_28 [i_6] [i_7] [i_7] [i_8 - 4] [i_8]), (((/* implicit */long long int) ((5955615335709671811LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                }
            } 
        } 
        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((7737473873108383110ULL), (((/* implicit */unsigned long long int) (unsigned char)170))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) < (0))))) : (-5955615335709671813LL)))) || (((((/* implicit */int) (unsigned short)9056)) <= (((/* implicit */int) (unsigned short)9042))))));
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 13; i_14 += 2) 
        {
            for (int i_15 = 2; i_15 < 13; i_15 += 4) 
            {
                {
                    var_43 = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(272913870)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)0)))) : (((arr_28 [i_15] [i_14] [i_14] [i_14] [i_15]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22)))))))));
                    var_44 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 10709270200601168511ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) : (-1LL))));
                    var_45 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_41 [i_14] [i_14] [i_14 - 1] [i_14] [i_6] [i_6 + 2])) < (((/* implicit */int) arr_41 [i_15] [i_14 + 2] [i_14 + 2] [i_14] [i_14] [i_6 + 1])))) || (((((/* implicit */int) (unsigned char)192)) != (((/* implicit */int) (unsigned char)80))))));
                }
            } 
        } 
        arr_49 [i_6 - 1] = min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)10)), (arr_4 [i_6])))), (3));
    }
    var_46 &= ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
    var_47 = ((/* implicit */long long int) min((var_47), ((~(((var_18) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2428092172U)) || (((/* implicit */_Bool) 2767752147U)))))) : (((5955615335709671811LL) / (var_13)))))))));
    var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (unsigned char)63)))))) ? (var_6) : (((/* implicit */unsigned long long int) var_5))));
}
