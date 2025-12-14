/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12251
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) <= (((((/* implicit */_Bool) ((((/* implicit */int) (short)13149)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), ((((!(arr_2 [i_0 + 1]))) ? (((arr_2 [i_0 + 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (var_0))) : (((/* implicit */unsigned int) (+(-1825023890))))))));
        var_19 = ((/* implicit */unsigned char) (~(max((((((/* implicit */int) (unsigned short)0)) << (((2716127184497307948LL) - (2716127184497307918LL))))), (((/* implicit */int) var_5))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 += min((((((/* implicit */int) arr_0 [i_3 - 2] [i_1 + 1])) >> (((/* implicit */int) var_8)))), (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])));
                            var_21 = (~(((/* implicit */int) ((unsigned char) arr_3 [10]))));
                            var_22 = ((/* implicit */unsigned long long int) ((int) (~(((unsigned long long int) (unsigned char)235)))));
                            arr_15 [i_0 - 1] [i_1] [i_3] [(unsigned short)0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (11ULL)));
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) 839163773U);
                            var_24 += ((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1])) ? (839163751U) : (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) (!((_Bool)0))))));
                            arr_18 [i_1] [i_3] [i_2 + 1] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_16)) <= (3455803558U)));
                            arr_19 [(unsigned char)2] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) 732105336))), ((-(((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_2 + 1] [i_3 + 1]))))));
                            arr_20 [i_5] [i_3] [i_1] [i_1] [1ULL] [i_0] = (-((((~(-1105795296))) ^ (((((/* implicit */_Bool) arr_11 [i_3])) ? (142641467) : (((/* implicit */int) var_10)))))));
                        }
                        arr_21 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */int) arr_2 [i_3 - 2])) << (((/* implicit */int) arr_2 [i_3 - 1])))) >= (732105336)));
                    }
                } 
            } 
            arr_22 [i_1] = (_Bool)1;
        }
    }
    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6]))))))));
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2458504489415605036LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 + 2] [i_6])))))))) : (((/* implicit */int) ((unsigned char) arr_11 [i_6 - 1])))));
    }
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 562431833)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_12))))));
}
