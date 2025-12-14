/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105250
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
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 4054421201U))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)52315)))) : (((int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_19 &= ((/* implicit */unsigned int) ((((int) var_7)) & (min(((~(((/* implicit */int) (unsigned short)52316)))), (((((/* implicit */int) (unsigned short)52288)) << (((arr_3 [i_0] [i_1]) - (1113389779)))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (3U)))))));
                        var_21 *= ((/* implicit */unsigned int) (((!(var_16))) || ((!(var_1)))));
                    }
                } 
            } 
            arr_9 [i_0] = ((/* implicit */_Bool) (-(((unsigned int) arr_7 [i_0] [i_0] [i_1] [i_1]))));
            var_22 *= ((/* implicit */unsigned int) min((var_3), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)13221)))))))));
            arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))), (((((/* implicit */_Bool) (unsigned short)52328)) ? (arr_3 [i_1] [i_0]) : (arr_1 [i_1])))))) ? ((((~(((/* implicit */int) var_3)))) >> (((((/* implicit */int) max(((unsigned short)52311), (((/* implicit */unsigned short) var_8))))) - (52307))))) : ((~(((/* implicit */int) var_11))))));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_13 [i_4] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) min((var_1), (var_8)))) * (var_7))));
        arr_14 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [(unsigned char)23] [19])), (arr_5 [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) (unsigned short)52315)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_4])) <= (arr_3 [i_4] [i_4]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_4] [i_4])) * (((/* implicit */int) var_15))))) : (arr_7 [i_4] [i_4] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_4] [i_4])) % (((((/* implicit */int) arr_2 [i_4] [i_4])) * (((/* implicit */int) (unsigned short)5076))))))) : (((arr_5 [15ULL] [i_4] [i_4] [20LL]) * (((/* implicit */unsigned int) (~(arr_8 [(short)1] [i_4] [2] [i_4]))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_17 [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)13221)) && (((/* implicit */_Bool) (unsigned short)52342)))) ? (((/* implicit */unsigned long long int) arr_1 [i_5 + 1])) : ((((_Bool)0) ? (var_0) : (((/* implicit */unsigned long long int) var_10))))));
        var_24 &= ((/* implicit */unsigned long long int) ((arr_3 [8U] [i_5]) - (((/* implicit */int) ((_Bool) (unsigned short)15368)))));
        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)13224))));
    }
}
