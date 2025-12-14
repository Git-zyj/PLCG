/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188607
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6678519131817152173LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 6678519131817152178LL)) : (13399570754263716110ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) arr_10 [i_0] [i_2] [i_0]);
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_0 [i_0] [i_2]))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) (unsigned char)185);
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_4])) ? (140737488355327LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_2] [i_5] [i_6])))))));
                                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_7 [i_2] [i_2] [i_1] [i_2])))) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) (unsigned char)115))));
                                var_21 = ((/* implicit */signed char) (+(min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */long long int) (((~(-6678519131817152144LL))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_5] [i_0])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) -6678519131817152185LL);
                    /* LoopSeq 2 */
                    for (short i_7 = 1; i_7 < 8; i_7 += 2) 
                    {
                        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) && ((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]))))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_13);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_9 = 3; i_9 < 9; i_9 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) max((var_4), (((/* implicit */unsigned long long int) (unsigned char)250))));
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((unsigned int) var_3))));
                        }
                        for (signed char i_10 = 3; i_10 < 9; i_10 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4294950912ULL)))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_10 - 3] [i_0] [i_10 - 1] [i_0] [i_10])) ? (((var_2) - (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */_Bool) arr_29 [i_1])) ? (arr_29 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((~(var_11))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])))))))))) : ((+(((((/* implicit */_Bool) var_8)) ? (-6678519131817152144LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))))));
                            var_26 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_12)))) && (((/* implicit */_Bool) (unsigned char)238))))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (var_12)));
                            arr_34 [i_0] [i_0] = ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1])) : (var_12))) : (((/* implicit */unsigned long long int) ((arr_9 [i_2] [i_11 - 1]) | (arr_9 [i_1] [i_1])))));
                        }
                        for (unsigned char i_12 = 3; i_12 < 8; i_12 += 2) 
                        {
                            var_28 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_12 + 1])))) ? (((((/* implicit */_Bool) arr_3 [i_12 - 2])) ? (arr_15 [i_12 + 1] [i_12] [i_12 - 3] [i_1] [i_0]) : (arr_15 [i_12 + 1] [i_12] [i_12 - 2] [i_8] [i_0]))) : (((((/* implicit */_Bool) arr_15 [i_12 - 1] [i_12] [i_12 - 2] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_15 [i_12 + 2] [i_12] [i_12 - 1] [i_8] [i_2])))));
                            arr_38 [i_12] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned long long int) 17135019463002199498ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (min((((/* implicit */unsigned long long int) arr_26 [i_12] [i_12 + 1] [i_12] [i_0])), (arr_27 [i_0] [i_1] [i_2] [i_2] [i_8] [i_2]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */short) arr_11 [i_0] [i_1] [i_8]);
                            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_13))) / (arr_9 [i_8] [i_0]))) != (((/* implicit */long long int) (-(arr_16 [i_0] [i_1] [i_2] [i_8] [i_13] [i_13]))))));
                        }
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) (unsigned char)55);
}
