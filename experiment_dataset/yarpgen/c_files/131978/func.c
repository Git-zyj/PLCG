/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131978
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((((unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-63)))))));
        arr_2 [11ULL] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)107)) || ((!(((/* implicit */_Bool) (unsigned char)185)))))), ((!((!(((/* implicit */_Bool) 41191530U))))))));
    }
    var_20 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) != (3935989461U)));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (1565251404U)));
        var_22 *= ((/* implicit */signed char) arr_1 [(_Bool)1]);
    }
    for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)71))))))));
        var_24 -= ((/* implicit */unsigned char) (+(((1865072151U) + (2897574190U)))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((int) arr_8 [i_2]))))) ? (max((arr_1 [9U]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2]))))))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (unsigned char)71))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (((((/* implicit */_Bool) (unsigned char)82)) ? (-2037306525503165684LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [1LL])))))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_26 &= ((/* implicit */unsigned char) (+(var_10)));
                        var_27 ^= ((/* implicit */long long int) arr_10 [i_3]);
                    }
                    arr_20 [i_3] [2] [2] &= ((((/* implicit */_Bool) arr_0 [i_3 - 2])) ? (((((/* implicit */_Bool) arr_16 [4])) ? (arr_15 [i_3 - 2] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-90))))));
                }
            } 
        } 
        var_28 -= ((/* implicit */int) min((((/* implicit */long long int) (signed char)-89)), (max((5439806065526643925LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 2897574187U)) ? (1719728116) : (1719728116))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    var_29 += ((/* implicit */int) arr_9 [i_3 - 1] [i_7]);
                    var_30 += ((/* implicit */unsigned int) arr_21 [i_3 - 1]);
                    var_31 = ((/* implicit */unsigned int) max(((unsigned char)76), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        arr_29 [i_3] [(unsigned short)0] [i_8] [i_9] [i_8] [10LL] = ((/* implicit */unsigned char) (((!(((arr_26 [i_3] [i_7 + 3] [i_8] [i_9]) <= (arr_26 [i_3] [i_7] [i_8] [i_7]))))) ? ((+(((/* implicit */int) min((var_11), ((unsigned char)9)))))) : (((/* implicit */int) ((unsigned char) max((var_18), (((/* implicit */unsigned char) arr_4 [i_3]))))))));
                        arr_30 [i_3] = ((/* implicit */long long int) (((+(((/* implicit */int) var_16)))) - (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_3])) || (((/* implicit */_Bool) (unsigned char)83)))) || ((!(((/* implicit */_Bool) arr_3 [i_3])))))))));
                        var_32 -= ((/* implicit */int) (signed char)89);
                        arr_31 [i_8] [i_8] [(_Bool)1] [i_7] &= ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_8))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_10 = 3; i_10 < 16; i_10 += 3) 
    {
        for (int i_11 = 2; i_11 < 14; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 4; i_13 < 16; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 2) 
                        {
                            {
                                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2897574199U)) ? (((/* implicit */unsigned long long int) -1818101958696084385LL)) : (15449719874579606587ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) -2332802785561736051LL))))));
                                var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4580525695733908269LL)) ? (((/* implicit */unsigned int) 1197053932)) : (1565251416U))))))) + ((-((-(-1197053910)))))))));
                                var_35 = ((/* implicit */long long int) arr_39 [i_10 - 2] [i_10 - 2]);
                                var_36 *= ((/* implicit */_Bool) ((int) ((arr_40 [i_10 - 1] [(_Bool)1] [12LL] [10U] [(unsigned short)10] [(unsigned char)4] [i_14 - 3]) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_1 [i_12]))));
                            }
                        } 
                    } 
                    arr_43 [i_10 - 3] [i_10 - 3] [i_12] = ((/* implicit */unsigned short) var_14);
                    var_37 *= ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
}
