/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156383
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
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = arr_7 [i_0] [i_0];
                                var_17 = min((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3 + 2] [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) min((arr_3 [4]), (var_6)))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)-6903)))) : (((((/* implicit */int) (short)8096)) / (((/* implicit */int) (unsigned char)43)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */int) ((unsigned char) (short)(-32767 - 1)));
            }
        } 
    } 
    var_18 = ((/* implicit */short) max((min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_10)))))), (var_3)));
    var_19 ^= ((/* implicit */int) var_8);
}
