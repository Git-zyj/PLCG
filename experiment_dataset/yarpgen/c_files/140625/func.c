/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140625
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
    var_11 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = arr_1 [(short)4] [(short)4];
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [(unsigned short)6] [i_2] [i_1] [i_0] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (unsigned short)53177)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) arr_4 [i_0] [11U] [i_0] [i_0])))))) / (((/* implicit */int) max((arr_3 [(unsigned short)13] [(unsigned short)13] [i_3 - 3]), (arr_3 [i_3] [i_0] [i_3 - 1]))))));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((short) (unsigned short)65535)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((+(((int) (short)-32101))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = var_7;
}
