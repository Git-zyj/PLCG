/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121315
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) -1171910479))));
    var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-117)) : (var_6)))) ? (var_5) : (var_0))) : (max((-1435702030), (((((/* implicit */_Bool) var_8)) ? (var_8) : (1171910478)))))));
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_2))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */int) (short)29598);
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)29600))))) ? (var_5) : (((((/* implicit */_Bool) ((signed char) -104503006))) ? (((((/* implicit */_Bool) (short)29598)) ? (var_6) : (var_5))) : (var_4))))))));
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (short)5)))))));
                        arr_12 [i_0] [(short)10] [i_0] [i_0] [i_0] [i_3] = ((((((int) (signed char)-87)) + (2147483647))) >> (((((/* implicit */int) (signed char)-114)) + (114))));
                        arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-87))))) ? ((((~(var_0))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)114)) : (var_4))))) : (max((((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_8 [i_2] [i_0] [i_0]) : (((/* implicit */int) (short)-29576)))), ((~(((/* implicit */int) arr_3 [i_3 - 1] [i_2]))))))));
                        arr_14 [i_0] [i_3] [i_1] [i_2] [i_3] [i_3] = arr_7 [i_0] [i_0];
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -1171910477)) ? (arr_2 [i_4]) : (-1008094655))));
                                arr_22 [i_0] [i_0] [i_2] [i_2] [i_4] [5] [i_2] = ((/* implicit */signed char) ((1981183298) > (((/* implicit */int) ((short) min((arr_7 [i_0] [i_1 - 1]), (((/* implicit */int) (short)28381))))))));
                            }
                        } 
                    } 
                    var_16 ^= ((((/* implicit */_Bool) (-(arr_17 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 - 3] [i_1 - 2])))) ? (var_8) : (((int) (signed char)83)));
                }
            } 
        } 
    } 
}
