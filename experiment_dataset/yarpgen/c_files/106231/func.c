/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106231
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = (-(min((2535168259554220499ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))));
        var_20 = ((/* implicit */int) var_14);
        var_21 &= arr_0 [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_9 [(unsigned char)8] &= ((/* implicit */int) min((((/* implicit */short) (signed char)-74)), ((short)-26704)));
            var_22 = ((/* implicit */signed char) arr_7 [i_1] [i_2] [i_2]);
        }
        var_23 = ((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_6 [i_1])))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_7);
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_13)))) - (((/* implicit */int) var_15)))))));
}
