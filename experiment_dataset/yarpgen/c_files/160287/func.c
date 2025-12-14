/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160287
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
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (~(9911640299251969825ULL))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))))) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (short)4094))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_10);
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) var_0))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            {
                arr_11 [i_1] [2ULL] = ((/* implicit */long long int) (signed char)55);
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_17 [i_3] |= ((/* implicit */short) arr_0 [i_1] [i_3]);
                            arr_18 [i_1] [i_4] [i_3] [6] = ((/* implicit */signed char) arr_8 [i_1] [i_1]);
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + ((~(min((var_14), (arr_0 [i_3] [i_3]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            arr_24 [i_6] [i_6] = ((/* implicit */short) ((_Bool) ((unsigned long long int) (~(((/* implicit */int) var_15))))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 1] [i_2] [i_5] [i_6]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
