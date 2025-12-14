/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110778
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
    var_13 = var_1;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_0 [i_2]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (((((var_5) && (((/* implicit */_Bool) (unsigned short)992)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)12))) : (-8405234632871205169LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])))))));
                        arr_10 [(short)12] [i_1] [i_1] [i_3] [13LL] = ((/* implicit */unsigned int) ((min((arr_2 [i_1 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_1])) && (((/* implicit */_Bool) (short)0))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_11 [i_3] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((long long int) var_4))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2 - 1]))))) : (((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1 - 1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(var_4)))))));
                    }
                }
            } 
        } 
    } 
}
