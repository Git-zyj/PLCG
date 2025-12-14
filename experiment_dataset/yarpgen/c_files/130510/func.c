/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130510
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned int) var_5);
        var_17 = ((/* implicit */unsigned int) max((var_17), ((+(arr_3 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_5))) != (((/* implicit */unsigned long long int) (-(arr_3 [i_0])))))))));
                    var_19 -= ((/* implicit */long long int) min(((+(((/* implicit */int) arr_7 [i_2] [i_0] [i_0])))), (((/* implicit */int) ((unsigned char) arr_3 [i_2])))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_1]))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)234))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) max(((short)32767), (((/* implicit */short) (unsigned char)21)))))));
        arr_8 [i_0] [20LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_5 [i_0] [i_0] [i_0]) : ((-(arr_5 [9U] [i_0] [i_0])))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_4))));
}
