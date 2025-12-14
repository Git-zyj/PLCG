/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128087
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [(signed char)8] [i_0] [18] = ((/* implicit */long long int) min((((((/* implicit */int) (short)0)) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)0))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    var_18 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)65535)), (3746328642U)));
                    var_19 = (~(((/* implicit */int) (_Bool)0)));
                }
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)56683))));
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_11 [i_3 + 1] [i_3 - 1])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])))) >= (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (short)-1)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_7))))) : (min((min((((/* implicit */long long int) var_8)), (-8900818810264388300LL))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_3)))))))));
                        arr_16 [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_5 [5ULL] [i_1] [i_3 + 3] [i_4]))))))), (((((/* implicit */_Bool) (+(0LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_3 + 3] [i_4]))))))));
                        arr_17 [i_0] = ((/* implicit */short) arr_8 [7U] [i_0] [i_4]);
                        var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */long long int) (short)-18)), (0LL)))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - ((+(((/* implicit */int) var_14))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_3 - 1] [i_3] [i_5] [i_0] = ((/* implicit */long long int) (+(var_8)));
                            arr_25 [i_0] [i_1] [i_3 + 2] [i_5] [i_6] = ((/* implicit */unsigned short) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))));
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)87)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_3 + 1] [i_3] [i_3 + 2] [i_3] [i_3 - 1])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                        {
                            arr_29 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                            arr_30 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] = (+(((/* implicit */int) (short)3584)));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) var_5)))))));
                            var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4412113531793212262LL)) ? (((/* implicit */int) (short)32756)) : (((/* implicit */int) (unsigned char)14))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 18; i_8 += 4) 
                        {
                            arr_33 [i_0] [i_1] [i_3 + 1] [i_3 + 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_18 [i_3 - 1] [i_3] [i_8 - 2] [i_0]))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_8 - 2] [i_8 + 1] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((/* implicit */int) var_7))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_37 [i_0] [i_0] [i_1] [i_3] [i_0] [(unsigned short)14] [i_9] = (~(((/* implicit */int) arr_5 [(_Bool)1] [(unsigned short)18] [i_3 + 2] [i_5])));
                            var_24 = ((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_3 + 3] [i_0]);
                        }
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -8900818810264388282LL))));
                        arr_38 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3 + 2])) ? (arr_11 [i_0] [i_3 + 1]) : (arr_11 [i_0] [i_3 + 3])));
                    }
                }
                for (signed char i_10 = 1; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    var_26 &= ((/* implicit */short) (-((-(((/* implicit */int) (signed char)127))))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) min((-2103380171), (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)10)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41657))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10 + 3] [i_1] [i_1] [i_11])))))))))));
                        arr_43 [i_0] [i_1] [i_10 - 1] [i_10 - 1] = ((/* implicit */long long int) (+((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))))));
                    }
                }
                var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (+(arr_22 [i_0]))))))) : ((~(((/* implicit */int) arr_20 [i_0] [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5))) == (1114040818U)));
}
