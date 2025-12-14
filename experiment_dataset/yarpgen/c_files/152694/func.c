/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152694
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) 3091134533U)))))) << (((((/* implicit */int) var_9)) + (23472)))));
    var_20 = ((/* implicit */unsigned long long int) ((short) (short)3307));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [14ULL] |= ((/* implicit */unsigned short) min((((((((/* implicit */int) (short)-3307)) & (((/* implicit */int) (unsigned short)13807)))) / (((/* implicit */int) (short)3296)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_4 [i_0] [i_1] [i_1 + 1]))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_2 [i_1 - 1]))))));
                arr_8 [0] [i_1] |= ((/* implicit */unsigned short) max((((unsigned long long int) max((var_7), (((/* implicit */unsigned long long int) arr_0 [(short)2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_2 [i_1]) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (short)3307)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_0 [(short)8]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
}
