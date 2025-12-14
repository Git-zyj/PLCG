/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179070
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) max((var_10), ((short)-19895)));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) -2147483645))));
        arr_2 [i_0] = ((/* implicit */int) var_7);
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_1);
        arr_6 [i_1] [i_1] = ((/* implicit */int) 9187343239835811840ULL);
        var_13 = ((/* implicit */int) ((2589672026U) >> (((((10650970177654805524ULL) >> (((((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (short)-7047)) : (((/* implicit */int) (short)-19895)))) + (7090))))) - (1210848ULL)))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (short)19894)) ? (12582912U) : (3975058031U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19919)))));
    var_15 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (short)17959)), (max((var_6), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) ((2045372291U) - (((((/* implicit */_Bool) var_5)) ? (16383U) : (960U))))))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_16 [(signed char)10] |= ((/* implicit */short) min((420660217U), (16383U)));
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */signed char) (short)-19888);
                    arr_18 [i_2 - 1] [(short)1] [i_2 - 1] = min((((/* implicit */unsigned int) max((((((/* implicit */int) var_8)) << (((var_7) - (5738711961052829800ULL))))), (((/* implicit */int) max(((short)19883), ((short)-19895))))))), (2045372318U));
                }
            } 
        } 
    } 
}
