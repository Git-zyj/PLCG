/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153154
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
    var_15 = ((/* implicit */unsigned short) (short)32767);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]))))) ? (var_2) : (((/* implicit */unsigned long long int) (+(-8109827189822363192LL))))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_0]))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1069547520)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
                    arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = max(((~(arr_4 [i_0] [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_13))))));
                    var_17 = ((/* implicit */short) ((((arr_3 [i_0 - 1] [(unsigned short)10] [i_2]) ? (((((/* implicit */_Bool) var_11)) ? (arr_4 [(unsigned short)5] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)18]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_12))))))) > (((/* implicit */unsigned int) (((+(-1069547520))) - (((/* implicit */int) ((unsigned short) arr_2 [(unsigned short)18] [i_1]))))))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) (_Bool)0);
                }
            } 
        } 
    } 
}
