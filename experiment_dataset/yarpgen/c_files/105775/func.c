/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105775
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
    var_12 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_2)))), ((+(((/* implicit */int) var_1))))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_3)), (3915290647U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_15 &= ((/* implicit */_Bool) (+(((((/* implicit */int) var_10)) >> (((arr_1 [i_1]) + (656251427)))))));
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_6 [i_2]))));
                        var_17 = ((/* implicit */unsigned int) arr_4 [i_0]);
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_18 += ((/* implicit */signed char) arr_10 [i_0 + 3] [i_1] [i_1 - 1] [i_4] [i_1 - 2]);
                        arr_14 [i_0] [i_2] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3915290647U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((-(3915290647U)))))) / (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_1] [i_1] [i_0])) ? (max((arr_9 [i_0] [i_0] [1U] [i_0] [1U] [i_4]), (((/* implicit */unsigned long long int) 3915290647U)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
                        arr_15 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3915290642U)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_2] [i_1 - 2] [i_0]))) + (arr_6 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_2])) ? (3915290642U) : (arr_10 [i_4] [i_2] [i_1] [i_1] [2ULL]))))) % (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0])), (-1183552887))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 3; i_5 < 9; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */int) (signed char)100)) == (((/* implicit */int) var_5))))), (max((arr_12 [i_0] [i_0] [i_5 - 2] [i_5] [i_5] [i_5]), (((/* implicit */short) var_5))))));
                        var_19 += ((/* implicit */unsigned short) min((379676648U), (3915290647U)));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((((/* implicit */long long int) arr_6 [i_0])) + (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 1183552887)) : (arr_3 [i_0] [i_0] [i_5]))))))) || (((/* implicit */_Bool) (+(arr_17 [(_Bool)1] [i_0] [i_5 + 1] [i_0] [i_5 - 3])))));
                    }
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            arr_26 [i_1] [i_0] = (-(-1183552887));
                            arr_27 [i_0 - 2] [i_0] [i_7] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_21 [i_6] [i_6] [i_0] [i_0 - 1] [i_0 - 1]))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) 379676648U)) != (0ULL)))), (arr_18 [i_0 - 1] [i_0] [i_7]))))) + (max((((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [7U] [i_1] [5ULL] [i_7]))))), (((/* implicit */long long int) ((3932160U) + (3915290642U))))))));
                        }
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */short) (((+(((/* implicit */int) arr_7 [i_6] [i_1 - 2] [i_0 + 2] [i_0 - 1])))) < (arr_1 [i_0 + 1])));
                            arr_30 [i_0] [i_2] = ((/* implicit */unsigned int) arr_21 [i_0] [9U] [i_0] [i_0] [i_8]);
                        }
                        var_23 = ((/* implicit */int) ((unsigned short) ((unsigned char) arr_10 [4U] [i_0 + 1] [i_1 - 1] [i_1] [i_2])));
                        arr_31 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (((+(arr_3 [3ULL] [i_1] [i_1]))) == ((+(3915290648U)))))) ^ (((/* implicit */int) arr_24 [i_6] [(unsigned short)9] [i_1] [i_0] [i_0]))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) (+(-1183552887)))) * (((((/* implicit */_Bool) arr_17 [2U] [i_2] [i_2] [i_6] [2U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_17 [i_0] [i_2] [i_2] [i_0] [i_0]))))))))));
                        var_25 = arr_28 [i_2];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_4)) & (((/* implicit */int) arr_34 [i_0] [i_0] [(signed char)7] [i_0] [(signed char)0]))))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (-1183552880)))) ? (((/* implicit */unsigned long long int) min((arr_35 [(unsigned char)6] [i_2] [i_1] [i_0]), (((/* implicit */int) arr_4 [i_0]))))) : ((+(18446744073709551615ULL)))))));
                                var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 10017587247494725794ULL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_1))))))));
                                arr_39 [i_0] [i_0] [i_0] [7LL] [8ULL] [i_0] = ((/* implicit */unsigned short) ((((arr_33 [i_0] [i_0 + 2] [i_0 + 1] [i_1 - 2] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_9] [(unsigned char)4]))))) | (((/* implicit */unsigned long long int) ((unsigned int) ((-1518522371) > (((/* implicit */int) arr_21 [(unsigned short)7] [(unsigned short)4] [i_0] [i_9] [i_10]))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (3984542029669971641ULL)))) ? (arr_5 [i_1]) : (((/* implicit */int) arr_28 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1183552894)) ? (3915290642U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24895)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17396))) * (0ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [(unsigned short)5])))))))));
                }
                for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_29 = ((/* implicit */unsigned int) max((((unsigned short) -5384904)), ((unsigned short)11)));
                    var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_11]))) <= (arr_25 [i_0] [i_11])));
                    var_31 = (+(3915290642U));
                }
            }
        } 
    } 
    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (-1183552880))) : (((/* implicit */int) var_10))));
}
