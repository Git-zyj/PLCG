/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175386
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
    var_19 = ((/* implicit */signed char) max(((-(((((/* implicit */int) (short)-5651)) + (var_17))))), (((((/* implicit */int) var_6)) - (((((/* implicit */_Bool) 2476174865U)) ? (var_12) : (((/* implicit */int) var_16))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65534))));
            var_20 = ((/* implicit */unsigned short) (-((-(var_17)))));
            var_21 = (unsigned short)65527;
            var_22 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_9 [i_0] [i_2] = (unsigned short)62483;
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)3032)) - (((/* implicit */int) (unsigned char)13)))))))));
        }
    }
}
