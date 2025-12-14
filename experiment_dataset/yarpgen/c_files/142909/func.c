/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142909
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 3688232754U))) ? (var_7) : ((+(var_7)))))) || (((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_5 [(unsigned short)1] [i_0 + 1] [i_1 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_2 [i_0 - 1]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((var_8) ? (((/* implicit */unsigned long long int) var_5)) : (545357767376896ULL))))))));
                    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 606734559U))));
                    arr_8 [i_0] [i_0] [12] = ((/* implicit */short) min((((/* implicit */int) min((max((((/* implicit */unsigned char) var_1)), (var_9))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3)))))))), ((~(((/* implicit */int) var_8))))));
                    var_13 |= ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    var_14 = min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > ((~(var_7)))))), (var_4));
}
