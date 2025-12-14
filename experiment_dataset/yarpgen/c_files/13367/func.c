/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13367
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
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_18 = ((unsigned short) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [12U] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((((/* implicit */int) var_5)) / (((/* implicit */int) var_11)))) : (((/* implicit */int) max((var_1), (((/* implicit */short) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2])) : (((unsigned long long int) var_0))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65518)) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */int) max(((short)1627), (((/* implicit */short) arr_2 [i_1]))))) : (((((/* implicit */int) (short)11991)) ^ (((/* implicit */int) (short)1627)))))), (((/* implicit */int) (!(arr_2 [i_1]))))));
                }
            } 
        } 
    } 
}
