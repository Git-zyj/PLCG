/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116459
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
    var_17 = ((/* implicit */unsigned short) ((var_4) * (((/* implicit */unsigned long long int) ((int) ((signed char) var_13))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned short)6] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_12)))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16777215U)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0 - 4])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0 - 4]))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [0LL] [(unsigned short)10] [i_0 - 1])) || ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) != (var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 3]))) : (max((((/* implicit */unsigned long long int) arr_4 [i_0 - 4] [i_0 - 1])), (arr_2 [i_0 - 3])))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1320937784)) ? (4278190080U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8039)))));
        var_22 = ((int) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_6))))) > (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4]))))));
        var_23 = ((/* implicit */unsigned long long int) var_10);
    }
}
