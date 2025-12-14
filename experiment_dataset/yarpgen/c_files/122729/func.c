/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122729
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
    var_13 &= var_3;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_0] [i_0]));
                var_14 = (short)-21714;
                var_15 = (short)-16309;
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_2] [i_0] = ((max((((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])) : (-1424309594))), ((-(((/* implicit */int) (short)-12795)))))) == (((/* implicit */int) var_0)));
                                arr_16 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_2]))))) ? ((~(((/* implicit */int) (short)7318)))) : (((((arr_10 [i_0] [i_1] [i_2] [i_0]) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((signed char) max((arr_9 [i_2] [i_2] [i_2]), ((short)31744)))))));
                                var_16 = ((/* implicit */short) max((max((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])), (((((/* implicit */_Bool) (short)-1)) ? (arr_3 [i_4] [i_0]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_0] [i_4])))))), ((-(((/* implicit */int) arr_1 [i_4] [i_3]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 |= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-31200))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)12812)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-27641)) : (var_7))))))) : (((/* implicit */int) var_11))));
}
