/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131041
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
    var_18 -= ((/* implicit */unsigned char) var_13);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        var_19 = 30021901U;
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (_Bool)1))));
                        var_21 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-93)))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned int) (unsigned char)182)), (30021906U))));
                        arr_13 [i_2] [(signed char)2] [(unsigned char)1] [i_3] = ((_Bool) ((unsigned long long int) (unsigned char)148));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_0] [12] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((unsigned char) arr_3 [i_1 + 1] [i_1 + 1]))), (((unsigned short) 30021908U))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) max((30021909U), (3444061768U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3444061764U)) && ((_Bool)0))))) : (min((((((/* implicit */_Bool) -2719249332713844211LL)) ? (4264945410U) : (850905511U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4803886705733763020LL)))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 11; i_5 += 4) 
                        {
                            arr_20 [i_4] [i_4] [i_2] [i_4] [i_5 + 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1 + 2]))))), (min((((/* implicit */long long int) arr_18 [i_1] [i_1 + 4] [i_5 + 2] [i_1] [i_5 - 1] [i_5 - 1])), (-5040296161238985742LL)))));
                            arr_21 [0U] [(unsigned char)3] = ((/* implicit */long long int) arr_10 [i_5 + 4]);
                        }
                        var_23 = ((/* implicit */short) ((unsigned char) arr_2 [i_0] [i_0]));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 3444061766U)))) + (850905535U)));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned char) min((2147483647), (((/* implicit */int) (signed char)60)))));
                        var_25 -= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0])))) | (arr_15 [i_6] [i_1 - 1] [i_1 + 1] [i_2] [i_6]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) arr_9 [i_0] [i_0]))), (arr_24 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5040296161238985732LL))))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22577))) >= (4264945410U)))) + (((/* implicit */int) ((4294967295U) < (3444061773U))))))));
                        arr_28 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551615ULL))) < (arr_11 [i_0] [i_0] [i_1 - 2] [i_1] [i_7])));
                        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) -5040296161238985756LL)))));
                    }
                    arr_29 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((-5503152382302604075LL), (((long long int) arr_5 [i_1 + 3] [i_1]))));
                    var_28 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [(short)4] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 4] [i_1 - 2])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)65523))))), (max((arr_9 [i_0] [i_1 - 1]), (arr_9 [i_1 - 1] [(unsigned char)6])))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((unsigned char) min((max((((/* implicit */unsigned long long int) 866710509649413229LL)), (5004318390954698454ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)76))))))));
    var_30 = ((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (_Bool)1))));
}
