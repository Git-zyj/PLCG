/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145353
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((~((~(1329142961118119849ULL))))) : (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [17LL] [i_1] [17LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3402324785210221556LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16249545767790944593ULL))))))))));
                var_18 = ((/* implicit */long long int) (~((~((~(arr_0 [i_0] [i_1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = (-(3402324785210221556LL));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)10] [i_3] [i_3] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                                arr_15 [i_0] [i_3] [i_2] [7LL] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2197198305918607023ULL))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) min((var_19), ((!((!(((/* implicit */_Bool) (unsigned short)50542))))))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(var_3))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_21 [12LL] [i_1] [(unsigned short)14] [12LL] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 - 2] [i_5 + 1] [i_2 - 2] [15LL] [i_5 + 1] [i_0]))) : (3402324785210221570LL)));
                                var_21 = (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-9223372036854775807LL - 1LL)));
                                var_22 = ((/* implicit */long long int) (+((+(var_11)))));
                                var_23 = ((/* implicit */int) (+(var_9)));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(var_10)))) ? (arr_16 [i_0 + 2] [i_1] [(_Bool)1] [i_0 + 2]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_7])))))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0 + 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)14985))))) : ((+(arr_0 [i_0 + 2] [i_0 - 1])))));
                    }
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        arr_30 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2879715801799548760LL)))) ? (((((/* implicit */_Bool) -2879715801799548753LL)) ? (-6639642035776604779LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-16LL)))))) ? ((~((~(var_11))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0 + 1])))))));
                        arr_31 [i_0] [i_1] [i_9] [i_1] [9ULL] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(1048575)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_9] [i_1] [i_1] [i_1] [i_0] [i_0]))))) : ((+(var_15)))))));
                        arr_32 [i_9] [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_6)) : (var_5)))) ? ((-(arr_27 [i_9]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))));
                    }
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) (+((+(-3402324785210221545LL)))));
                        arr_37 [i_0] [i_0] = ((/* implicit */long long int) (~((~(16249545767790944593ULL)))));
                    }
                    arr_38 [15LL] [5LL] [i_7] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) var_5))))))));
                    var_27 += ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_7] [i_7])))))) ? (((/* implicit */int) (!((!(arr_1 [i_0] [(unsigned short)5])))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [4LL] [4LL] [13ULL] [i_7])))))))));
                    var_28 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0])) ? (((((/* implicit */_Bool) -1265048605)) ? (6579286603958178088LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25271))))) : (((((/* implicit */_Bool) var_15)) ? (arr_36 [i_0] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                    arr_39 [i_0] [i_0] [i_1] [16LL] = (~(((((/* implicit */_Bool) (~(4470960393074569396LL)))) ? ((((_Bool)0) ? (-5939309942615362673LL) : (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
                }
                /* vectorizable */
                for (long long int i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0])) ? (arr_19 [i_0 - 2] [6LL] [4LL] [i_0 - 1] [i_0]) : (-803307795826035709LL))))));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+((+(var_7))))))));
                    var_31 = ((/* implicit */unsigned short) (+(-1048576)));
                }
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (unsigned short i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        {
                            arr_48 [i_0] [6LL] [i_12] [i_0] [(_Bool)1] = ((((/* implicit */_Bool) (+(-3402324785210221559LL)))) ? ((~(3959997404U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9381))))));
                            var_32 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (var_7)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((!((_Bool)1))))))));
    var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (-((~((~(8377082612563630886LL))))))))));
}
