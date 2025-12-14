/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131775
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
    var_19 = ((((unsigned int) var_4)) * (((max((536739840U), (((/* implicit */unsigned int) (unsigned short)30538)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_3] [i_4])), (2480383454U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 2])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_9 [(short)6] [(short)6] [(unsigned short)10] [i_4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                                var_21 = ((/* implicit */short) (((+(((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33780))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))) << (((((/* implicit */int) ((unsigned short) max((arr_5 [i_1] [i_2] [i_1]), ((unsigned short)31758))))) - (31737)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), ((unsigned short)3))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_12))))) ^ (((((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (short)20815))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_5 [i_1] [i_1] [i_2])))))))));
                    arr_14 [i_0] [i_0] [i_0] = arr_3 [i_0] [i_0] [(short)0];
                    arr_15 [(short)14] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-16511)) ? (((/* implicit */int) max((arr_9 [(unsigned short)0] [i_1] [i_0] [(unsigned short)0]), (((/* implicit */unsigned short) arr_7 [i_0] [(unsigned short)17] [(unsigned short)17] [(unsigned short)17]))))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_22 = ((short) max((var_12), (((var_12) + (var_0)))));
}
