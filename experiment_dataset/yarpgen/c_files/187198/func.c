/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187198
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (unsigned char)161)), (arr_1 [i_0])))));
        var_12 += ((/* implicit */unsigned long long int) (short)4736);
        var_13 = ((/* implicit */long long int) min((var_13), (((long long int) ((arr_3 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
        var_14 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_8)) : (arr_0 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)169)))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((var_11), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30612)))))))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)211))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1595520665)), (var_7)))) : ((-(arr_5 [i_1])))))));
        arr_8 [i_1] [i_1] = 33488896;
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    arr_14 [i_3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) (short)4736);
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)48074)))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) + (arr_13 [(short)4] [i_1] [i_1 + 3])))) ? (((int) (-(((/* implicit */int) arr_11 [i_1] [i_2] [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4606386231751590526ULL)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] [(signed char)13] = ((/* implicit */short) min((max((11852649142295287092ULL), (((/* implicit */unsigned long long int) 413243479)))), (((/* implicit */unsigned long long int) (-(-33488891))))));
                        var_19 = ((/* implicit */unsigned long long int) ((int) 10094645028582570581ULL));
                    }
                }
            } 
        } 
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_18 [i_5 - 1]))));
        arr_20 [i_5] = max(((-(-33488895))), ((((+(((/* implicit */int) (unsigned char)249)))) >> (((((unsigned int) var_0)) - (3848721741U))))));
        arr_21 [i_5] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned long long int) (~(arr_19 [i_5] [i_5])))) : (9123487273719407868ULL)))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_5])))))));
    }
    var_22 = ((/* implicit */unsigned int) min((-33488895), (-33488911)));
    var_23 = ((/* implicit */unsigned char) var_6);
}
