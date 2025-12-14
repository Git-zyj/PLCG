/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135635
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
    var_11 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_8))))));
    var_12 = ((/* implicit */signed char) 1255530864U);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)22))))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19604)) ? (((/* implicit */int) (signed char)48)) : ((-2147483647 - 1))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)));
                        arr_11 [i_0] [(short)16] = ((/* implicit */int) var_9);
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (short i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
                    {
                        arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (short)-4096))));
                        arr_16 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-4096))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) 2147483647);
                        arr_22 [i_0] [i_0] [i_2] [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_17 [i_0] [0LL] [0LL] [i_2] [i_2] [i_5]), (((/* implicit */unsigned long long int) ((signed char) (_Bool)1)))))) ? (((((/* implicit */_Bool) max((3653230676U), (((/* implicit */unsigned int) arr_9 [i_0] [20] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (short)4096)))) : (((/* implicit */int) ((short) (signed char)-1))))) : ((+(2147483647)))));
                    }
                    arr_23 [i_0] [i_0] [i_2] = ((/* implicit */int) 2468598346U);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (+((+(var_5)))));
}
