/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/90
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45887)) ? (((/* implicit */int) (unsigned short)16384)) : (((((/* implicit */int) (signed char)-92)) ^ (1310262881)))));
        var_16 = ((/* implicit */int) arr_1 [(unsigned short)10]);
        var_17 = ((/* implicit */unsigned int) var_15);
    }
    for (short i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) arr_3 [i_1 - 1]);
        arr_8 [i_1] = ((/* implicit */unsigned int) (~(((1337345642) / (((/* implicit */int) (signed char)-112))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    var_18 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_2 + 1] [3LL] [i_1] [i_1]))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_2 [i_1 + 2])))))))));
                    arr_14 [i_1 + 1] [i_1] [6U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)18))));
                    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_8)));
                }
            } 
        } 
    }
    var_21 |= ((/* implicit */unsigned long long int) var_1);
}
