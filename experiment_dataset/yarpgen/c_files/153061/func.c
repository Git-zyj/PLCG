/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153061
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((arr_0 [i_0]) ^ (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_10))))))) >= (max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2]))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_0 [i_0]))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (min((min(((unsigned short)63480), (((/* implicit */unsigned short) arr_9 [i_3 - 1] [i_3 - 1] [i_2] [i_3 - 1])))), (arr_3 [i_2])))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_14))));
                        var_22 = var_5;
                    }
                    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_4])) || (((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)32766)) >> (((/* implicit */int) (_Bool)1))))) / (max((arr_1 [i_0]), (9223372036854775789LL))))))));
                        var_24 = ((/* implicit */unsigned short) arr_6 [i_4] [i_1] [i_1] [i_0]);
                    }
                    var_25 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1] [i_1]);
                }
            } 
        } 
    } 
    var_26 = var_9;
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_1), (((/* implicit */short) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_14)))))))) | (((/* implicit */int) (short)28454))));
}
