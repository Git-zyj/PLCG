/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102548
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_4] [i_0] [i_0] [i_1]))))) ? (max((((/* implicit */int) arr_2 [i_2])), (var_11))) : (((arr_12 [i_0]) % (((/* implicit */int) var_7)))))));
                                var_14 += ((/* implicit */short) ((min((((/* implicit */int) arr_7 [i_4] [i_0 + 1] [i_4])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_10)))))) | (((/* implicit */int) max(((short)0), (((/* implicit */short) var_10)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)4] [i_2] [i_0] [2LL])) : (((/* implicit */int) arr_5 [i_1] [(signed char)10])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (min((var_3), (((/* implicit */unsigned int) var_10)))))))));
                    var_16 = min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)111)) : (var_4)))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) var_8)))))));
                    arr_15 [2U] [(short)20] [i_2] &= ((/* implicit */int) ((min(((~(var_5))), (min((802931594122338670ULL), (var_5))))) <= (((/* implicit */unsigned long long int) var_4))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */_Bool) var_12);
}
