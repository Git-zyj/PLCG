/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167184
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (2147483647)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0])))), (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) 2147483630)) : (arr_0 [i_0])))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_12 -= ((/* implicit */unsigned short) arr_0 [0U]);
                        arr_12 [i_0] [i_1] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                    }
                }
            } 
        } 
    } 
    var_13 = var_3;
}
