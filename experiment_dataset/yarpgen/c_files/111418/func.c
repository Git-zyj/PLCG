/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111418
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
    var_13 = var_1;
    var_14 -= ((/* implicit */short) (~(((((/* implicit */int) var_9)) & (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = var_1;
                var_16 *= var_2;
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                arr_10 [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_2] [i_3]), (var_6)))) ? (((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_0 [i_2] [i_2])) - (19784))))) : ((~(((/* implicit */int) var_10))))));
                arr_11 [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_5 [i_3]))))))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_17 [i_4] [i_4] [i_4] [i_2] |= var_3;
                            arr_18 [i_2] [i_3] [i_4] [i_5] |= ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-12))))) == (((/* implicit */int) arr_6 [i_3]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_2 [i_2]))))) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) arr_15 [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) (short)2047)))))));
            }
        } 
    } 
}
