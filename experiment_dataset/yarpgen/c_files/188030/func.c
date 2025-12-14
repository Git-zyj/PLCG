/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188030
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
    var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2000)) && (((/* implicit */_Bool) 1200579414U))));
    var_17 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) 2238565763U))) != (((/* implicit */int) ((2056401533U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))))) / (2056401525U)));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_9 [i_1] [i_1 + 2] [i_1] [11U] [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2238565756U) >> (((((/* implicit */int) arr_2 [i_1 - 1] [i_1] [i_1 - 1])) - (7751)))))) ? ((+(((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_2] [i_3])) & (arr_8 [i_3] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])) >> (((arr_8 [i_0] [i_1] [i_0] [i_0] [i_1]) - (14243656899901830867ULL))))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((max((((303644840) >> (((303644840) - (303644812))))), (((/* implicit */int) arr_5 [i_1 + 2] [(short)2] [i_1 + 1])))) <= (303644841))))));
                        var_19 = ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)2]))) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (min((var_5), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (_Bool)1))))))))));
        var_21 = ((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)7119))))) == (max((arr_8 [i_0] [i_0] [i_0] [1U] [i_0]), (((/* implicit */unsigned long long int) 2518752981U)))))))));
    }
    var_22 = ((/* implicit */unsigned short) var_5);
}
