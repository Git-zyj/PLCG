/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155436
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) 2129346084)))));
                        var_12 = var_3;
                        arr_10 [19] [19] [i_2] [22] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -1)) : (arr_7 [i_0] [i_1] [i_1] [i_3] [i_2 - 1])));
                    }
                } 
            } 
        } 
        var_13 *= ((/* implicit */_Bool) arr_5 [i_0] [24] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_14 = (!(((/* implicit */_Bool) -1)));
        var_15 = ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_5 [i_4] [6] [i_4] [6]))) < ((+(((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) arr_11 [i_4] [i_4]))))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (int i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_25 [(short)3] [i_5] [i_4] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_21 [i_6 + 1] [i_7] [i_8] [i_8] [i_8])) << (((-5694716444531616881LL) + (5694716444531616888LL)))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)5690)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)206)))) + (((((/* implicit */_Bool) var_10)) ? (1509610706) : (((/* implicit */int) (unsigned short)3))))))) ? (21U) : (((/* implicit */unsigned int) min((1509610703), (1823736830))))));
                                arr_26 [i_4] [i_4] [i_6] [(unsigned short)4] [(_Bool)1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)11183))));
                                arr_27 [4U] [10LL] [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 1] = ((/* implicit */_Bool) min(((((-(((/* implicit */int) arr_22 [i_4] [i_4] [i_8])))) ^ (((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_17 = ((((_Bool) arr_20 [i_4] [(signed char)7] [i_6 + 1] [i_6 - 2])) || (((/* implicit */_Bool) ((unsigned short) arr_1 [i_6 + 1]))));
                        var_18 = ((/* implicit */short) (!(min(((!(((/* implicit */_Bool) arr_1 [i_4])))), (((((/* implicit */_Bool) (signed char)7)) && (((/* implicit */_Bool) var_3))))))));
                        var_19 = ((/* implicit */int) (-(min((((/* implicit */long long int) -25)), (max((var_8), (((/* implicit */long long int) (signed char)122))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) max((0), (((/* implicit */int) (unsigned short)35594)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3662983399U)) ? (((/* implicit */unsigned long long int) 804162657)) : (5332532621475684577ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)11157)) != (((/* implicit */int) (signed char)-122))))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_10 = 4; i_10 < 8; i_10 += 2) 
                    {
                        var_21 = ((long long int) (!(((/* implicit */_Bool) max((13073857496705102995ULL), (((/* implicit */unsigned long long int) arr_24 [i_4] [i_5] [i_5] [i_5] [i_10] [i_10] [i_10])))))));
                        var_22 &= ((/* implicit */unsigned char) (signed char)102);
                    }
                }
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) min((((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18ULL) : (5332532621475684576ULL)))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (66060288) : (var_10)))) || (((/* implicit */_Bool) max((var_1), (var_10)))))))));
}
