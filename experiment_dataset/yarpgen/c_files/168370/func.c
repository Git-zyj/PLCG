/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168370
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
    var_14 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((int) var_9))), (((((/* implicit */_Bool) 5444545012351828337ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))))) == (((/* implicit */unsigned long long int) -1304559214))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)51884)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51884))) : ((-9223372036854775807LL - 1LL)))));
                arr_5 [i_0] = min((min(((~(((/* implicit */int) (unsigned short)51884)))), ((~(((/* implicit */int) arr_2 [i_0])))))), ((~(((/* implicit */int) (unsigned short)13651)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_10 [i_2] |= ((/* implicit */short) var_11);
        arr_11 [i_2] [i_2] |= ((/* implicit */signed char) ((unsigned long long int) ((unsigned int) (unsigned char)145)));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51884)) | (((/* implicit */int) (unsigned short)51884))));
        arr_13 [i_2] [i_2] = ((((arr_8 [i_2]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) / (min((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) arr_0 [10ULL] [i_2])), (4380369598023408180LL))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_17 [(unsigned short)2] = ((/* implicit */unsigned char) (~(var_6)));
        arr_18 [i_3] [4ULL] = ((/* implicit */unsigned int) arr_9 [i_3] [i_3]);
    }
}
