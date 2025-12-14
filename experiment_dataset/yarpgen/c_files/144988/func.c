/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144988
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
    var_15 = ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) var_9)), (min((5214057655159546559LL), (((/* implicit */long long int) var_0)))))));
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((int) var_5))), (((unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (!(((_Bool) -753865236))))))))));
    var_17 = ((/* implicit */short) ((_Bool) (unsigned char)90));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) (signed char)45)));
                    arr_9 [(unsigned char)13] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_0 [i_0] [i_1]))))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)60)) ? (2386849663740486582LL) : (((/* implicit */long long int) 555852095U))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_18 += ((/* implicit */unsigned long long int) (unsigned char)196);
                        arr_14 [i_0] [(signed char)16] = ((/* implicit */unsigned long long int) ((long long int) arr_11 [i_1] [i_0]));
                    }
                    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 528115652)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)195))))) - (min((var_6), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */int) ((unsigned char) ((long long int) 8123747337503014825ULL)));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) 528115652))) : (((/* implicit */int) ((var_1) <= (((/* implicit */int) var_5)))))));
                            arr_20 [(short)9] [(short)9] [i_0] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((4657280506597965689ULL) ^ (((/* implicit */unsigned long long int) var_0))))) ? (((((((/* implicit */int) arr_7 [i_0] [i_0])) >= (((/* implicit */int) (signed char)69)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 + 3] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((unsigned int) (unsigned char)90)))))));
                        }
                        for (unsigned short i_6 = 4; i_6 < 19; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (-(3161826197U)));
                            arr_23 [i_0] [i_0] [i_2] [19] [i_6 - 4] = (unsigned char)79;
                        }
                        var_22 &= ((/* implicit */int) max((2489430376U), (((/* implicit */unsigned int) (unsigned char)113))));
                        var_23 = ((unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_2] [i_0] [(unsigned short)11] [i_2] [i_4]))))), (var_1)));
                    }
                    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_8), (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_1)) : (-2386849663740486582LL)))))) ? (((int) arr_5 [i_0] [i_7 + 3] [i_0] [i_7 + 3])) : (((((/* implicit */int) arr_4 [i_0])) >> (((((/* implicit */int) ((short) 3114618344262407502LL))) - (5433)))))));
                        arr_27 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) 2386849663740486582LL);
                    }
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) 1845047345)), (((long long int) 2386849663740486607LL))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_6);
}
