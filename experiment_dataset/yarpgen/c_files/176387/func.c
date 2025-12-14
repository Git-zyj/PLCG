/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176387
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
    var_12 -= ((/* implicit */unsigned int) (~(((long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_0)))))));
    var_13 = ((/* implicit */_Bool) ((short) var_1));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) var_9);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) (+(((unsigned int) var_3))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (var_2))))));
                    arr_11 [i_1] [18ULL] [i_2 - 3] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) var_10);
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? ((-(var_1))) : (((long long int) var_10)));
        var_18 = ((/* implicit */short) ((long long int) ((short) ((signed char) var_0))));
    }
    var_19 += ((/* implicit */signed char) var_1);
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)160)) / (((/* implicit */int) (unsigned char)153)))))))));
}
