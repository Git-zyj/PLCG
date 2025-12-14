/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17217
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
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((unsigned short) ((long long int) min((6144ULL), (((/* implicit */unsigned long long int) (unsigned char)2)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) min((min((arr_3 [i_0] [i_0]), (((/* implicit */int) (short)-18463)))), (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2]))));
                        arr_13 [i_2] [i_1] = ((/* implicit */unsigned short) 3758096384U);
                        arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((arr_4 [i_0] [i_0] [i_2] [i_3]), (((long long int) 536870911U))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_2] = ((/* implicit */unsigned char) arr_5 [i_2]);
                        arr_18 [i_0] [i_1] [i_2] [i_1] [i_2] [i_4] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_2]);
                        arr_19 [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3758096385U)) ? (((((/* implicit */_Bool) ((int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_2]))) ? (((((/* implicit */_Bool) (signed char)64)) ? (3758096384U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_2] [i_1] [i_2] [i_4])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_2]))))));
                    }
                    arr_20 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_1] [i_2])), (min((((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_2])), (arr_6 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
}
