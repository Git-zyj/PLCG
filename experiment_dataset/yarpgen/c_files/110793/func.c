/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110793
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    var_11 -= ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)23)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned char) var_1))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) & (4091447400U)))))));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((3) - (((/* implicit */int) (signed char)-75)))), (arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)19))))))) : (((min((((/* implicit */unsigned long long int) 4091447426U)), (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2 + 1])))))));
                }
                arr_7 [i_0] = min((1947380109U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))));
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : ((+(2347587186U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : ((((!(((/* implicit */_Bool) 203519875U)))) ? (((((/* implicit */_Bool) (short)30720)) ? (((/* implicit */unsigned int) arr_5 [i_0] [(short)13] [i_1] [i_0])) : (2347587192U))) : (((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1] [i_1]))))));
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1]);
            }
        } 
    } 
}
