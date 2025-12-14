/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147700
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (arr_2 [i_1 + 2])));
                    arr_11 [i_0] [11LL] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)134)) & (((/* implicit */int) (unsigned char)155))));
                    arr_12 [i_0] [i_0] [(short)8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_2]), (((/* implicit */long long int) var_15))))) ? (((((/* implicit */_Bool) var_3)) ? (15530521108423376891ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) max((2456889932735441867LL), (-566753744240741566LL))))));
                }
            } 
        } 
        var_18 += ((/* implicit */unsigned char) ((unsigned long long int) ((((long long int) var_1)) << ((((((~(((/* implicit */int) var_14)))) + (25966))) - (47))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_19 [i_0] [i_3] [(unsigned char)10] [i_0] = ((/* implicit */unsigned char) var_15);
                    arr_20 [i_0] = (+(var_1));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) -566753744240741566LL)), (var_9))), (((/* implicit */unsigned long long int) var_0))));
    var_20 = ((/* implicit */unsigned long long int) ((9223372028264841216LL) + (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    var_21 = min((((/* implicit */unsigned long long int) (+(((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), ((+(((unsigned long long int) var_9)))));
}
