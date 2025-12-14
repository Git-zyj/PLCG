/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180363
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (-(min((arr_6 [i_2 - 1] [(_Bool)1] [i_2] [i_1]), (((/* implicit */long long int) arr_3 [i_2 - 2] [i_2 - 2] [i_0]))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_7 [i_0] [i_2 + 1] [i_1] [i_1])), (var_13)))), (((arr_7 [i_0] [i_2 - 1] [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_1] [(_Bool)1]))) : (arr_4 [10LL] [i_2 + 1])))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_9 [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [(unsigned short)6] = ((/* implicit */unsigned int) (_Bool)1);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_10 [i_3]))));
        var_22 = ((/* implicit */int) arr_11 [i_3] [i_3]);
    }
    var_23 = ((/* implicit */_Bool) max(((((~(((/* implicit */int) var_17)))) | (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))));
    var_24 &= ((/* implicit */_Bool) max((((unsigned long long int) ((unsigned char) var_8))), (((/* implicit */unsigned long long int) (unsigned short)511))));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) var_13)))))));
}
