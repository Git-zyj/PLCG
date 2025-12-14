/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111457
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
    var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))) - (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) min((max((((/* implicit */short) arr_2 [i_0] [(short)9])), ((short)-20700))), (((/* implicit */short) arr_0 [i_1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_21 += ((/* implicit */short) (unsigned char)137);
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                arr_14 [i_2 + 2] [i_1] [i_2 + 2] = ((/* implicit */signed char) min(((unsigned char)41), ((unsigned char)119)));
                                var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)40), (((/* implicit */unsigned char) (signed char)63))))) ? (((/* implicit */int) (short)-12862)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)12847)) : (((/* implicit */int) (signed char)-61)))) < (((((/* implicit */int) var_4)) / (((/* implicit */int) var_13)))))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)99)), ((unsigned char)4)))) & (((/* implicit */int) var_14)))))));
                            }
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_1] [i_0])), ((short)12861)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_1] [i_0])))))));
            }
        } 
    } 
}
