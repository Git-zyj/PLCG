/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153846
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [(short)7] = ((/* implicit */short) (-(((long long int) arr_0 [i_0] [i_0 - 1]))));
                    arr_9 [i_0] [3U] [i_1 + 1] [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) ((short) var_0)))))));
                    var_11 = ((/* implicit */short) arr_7 [i_0 - 2]);
                    var_12 = ((/* implicit */unsigned long long int) ((long long int) ((short) ((((/* implicit */_Bool) 377754076)) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [(_Bool)1] [i_1 + 2] [(_Bool)1]))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((short) arr_1 [(unsigned char)11]))))) & (((((/* implicit */_Bool) ((signed char) arr_7 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) : (max((arr_1 [9U]), (arr_3 [(signed char)5])))))));
                }
            } 
        } 
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) ^ (((/* implicit */int) var_8))))) * (arr_7 [i_0])));
    }
}
