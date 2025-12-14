/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10618
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), ((-(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) arr_2 [i_0] [i_2 + 1])))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_10 [3] = ((/* implicit */unsigned int) arr_7 [i_0 + 2] [(short)19] [i_2] [i_3]);
                        var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_3] [i_0 - 1])) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_1] [i_2 - 1]))), (((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (arr_5 [i_1] [i_2 + 1]))))));
                        arr_11 [2U] [i_1] [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */short) min((max((arr_5 [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 2] [i_0 + 1]))), (((((/* implicit */int) (unsigned short)29298)) - (arr_5 [i_0 + 1] [i_0 - 1])))));
                        var_13 = ((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) + ((-(((/* implicit */int) (_Bool)1))))))));
                    }
                    var_14 = ((/* implicit */short) (~(((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_2 - 1]), (((/* implicit */unsigned short) (_Bool)1)))))));
                    var_15 *= ((/* implicit */_Bool) ((((min((((/* implicit */long long int) ((((/* implicit */_Bool) -4773215747862103070LL)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))), ((-(-541273667557208695LL))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) 22997276)) ? (2899099235564675977LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_0] [i_0]))))) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_2 - 1])))))) - (2899099235564677658LL)))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */int) max((arr_0 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned char) arr_2 [i_0 + 1] [i_0 + 2]))))), (((int) arr_0 [i_0 + 2] [i_0 + 2])))))));
        var_17 = min((((/* implicit */int) min((arr_2 [i_0 + 1] [i_0 + 2]), (arr_2 [i_0 - 1] [i_0 - 1])))), ((-(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((arr_8 [i_0 + 2]), (min((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [19U])), (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 + 1])) << (((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
    }
}
