/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154316
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) >= (0ULL))) ? (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (short)-8592)) : (((/* implicit */int) (signed char)-28)))) : (((/* implicit */int) var_1)))));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) arr_1 [i_0]))));
        var_12 = ((/* implicit */short) (!(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42))) >= (arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_13 -= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_9))))))), ((((((_Bool)1) ? (var_9) : (((/* implicit */int) var_4)))) + (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-28))))))));
            arr_7 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned short) (signed char)15)), (arr_4 [i_1]))));
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_1))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_11 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_3)))))) ? (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3))) : (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))))))));
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (signed char)-28))));
        }
    }
    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
    {
        arr_14 [i_3] = (-(((/* implicit */int) (short)0)));
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(var_8)))) : (max((var_6), (((/* implicit */long long int) (_Bool)1)))))), (((arr_13 [i_3 + 1] [i_3 - 2]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
            var_16 = ((/* implicit */unsigned char) (~(((unsigned int) 12702998332597188617ULL))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)30599))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (unsigned short)41799)) : (((/* implicit */int) (short)0))))));
            arr_20 [i_3] = ((/* implicit */long long int) arr_3 [i_5 - 2] [i_5 - 2]);
        }
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1460408897619339755LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) + (((((/* implicit */_Bool) (signed char)126)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))));
            /* LoopSeq 1 */
            for (unsigned int i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                var_19 = ((/* implicit */int) var_4);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (5599963230465371576ULL)))) ? (((/* implicit */int) ((signed char) (unsigned char)222))) : ((+(((/* implicit */int) (short)-2535))))))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((signed char) (signed char)124))) : (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) arr_19 [i_3])) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)33))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((signed char) var_6))));
            }
        }
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            for (long long int i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) arr_23 [i_9])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64289))) : ((((!((_Bool)1))) ? (var_6) : (((/* implicit */long long int) (~(var_8))))))));
                    var_23 = ((/* implicit */unsigned int) var_5);
                    arr_34 [i_9] [i_8 - 2] [i_9] = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)58906)) ? (2092289639U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_9]))))))));
                    arr_35 [i_9] [(unsigned char)9] [i_8] [i_9] = ((/* implicit */_Bool) ((var_7) ? (((((/* implicit */int) ((unsigned char) (signed char)107))) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (arr_28 [i_3 - 2] [i_8])))))) : (((/* implicit */int) var_5))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) (short)63);
}
