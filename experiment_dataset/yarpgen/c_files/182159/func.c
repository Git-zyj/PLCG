/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182159
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (var_7)))) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (min((var_9), (((/* implicit */unsigned long long int) var_3))))))));
    var_14 -= max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18928)))))) > (max((((/* implicit */unsigned long long int) (unsigned short)13033)), (12786149981673404257ULL)))))), (((int) var_8)));
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) ((signed char) (short)-1));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)124))))))));
            var_18 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)56)) >> (((((/* implicit */int) var_2)) - (97)))))) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) var_10)))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)246)))))));
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1])) != (((/* implicit */int) arr_3 [i_0 + 1]))))) ^ ((-(((/* implicit */int) ((signed char) var_2)))))));
        }
    }
    for (int i_2 = 3; i_2 < 18; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((arr_1 [i_2] [(signed char)15]), (((/* implicit */unsigned char) arr_5 [i_2]))))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_6 [i_2]))))))) ? (-6158654063541216269LL) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) / ((-(((/* implicit */int) var_4)))))))));
        var_20 += ((/* implicit */unsigned char) arr_3 [i_2 + 1]);
        arr_8 [i_2] = ((/* implicit */unsigned char) (+(((min((var_6), (((/* implicit */unsigned int) arr_0 [i_2])))) * ((-(2304756879U)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2 - 2] [i_3])) >> ((((~(((/* implicit */int) arr_9 [i_2 + 1] [i_2])))) + (104)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 17; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_3] [i_6] [i_2] [i_6] [i_5] [i_4] = ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned char) arr_11 [i_6] [i_5] [i_4] [i_3])), (arr_12 [i_5] [i_2 - 2]))), (((/* implicit */unsigned char) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))), (arr_0 [i_2])));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_3] [i_2] [i_5] [i_5] [8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_6]))) : ((-(min((2612164007277987536LL), (((/* implicit */long long int) arr_0 [i_3]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 3) 
                    {
                        for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_22 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 256261008U)) / (9ULL)));
                                var_24 = ((/* implicit */long long int) var_11);
                                arr_23 [i_2] [i_7] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) (-(-4943240080466442237LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((unsigned char) min((((-4943240080466442237LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))), (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))));
    }
    for (int i_9 = 3; i_9 < 18; i_9 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) var_8);
        arr_27 [i_9] = ((/* implicit */unsigned char) arr_25 [i_9] [i_9]);
        var_27 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_9] [i_9 + 1]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_9 - 1])))))));
        var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9]))) < ((~(var_5)))))), (min((arr_24 [i_9 - 1]), (var_7)))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        arr_30 [i_10] = arr_2 [i_10] [i_10] [i_10];
        var_29 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_10])) : (((/* implicit */int) arr_29 [i_10])))) * (((/* implicit */int) arr_3 [(unsigned char)6]))))));
        arr_31 [i_10] [i_10] = ((/* implicit */int) (-(1521836793U)));
    }
    var_30 = ((/* implicit */long long int) (((-(var_6))) - (((/* implicit */unsigned int) max((min((((/* implicit */int) var_4)), (var_3))), (((/* implicit */int) ((unsigned char) 4943240080466442255LL))))))));
}
