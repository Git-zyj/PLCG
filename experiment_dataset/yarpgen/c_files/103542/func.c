/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103542
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned char) ((((((int) arr_2 [i_0])) & ((~(((/* implicit */int) var_2)))))) & (((((_Bool) (unsigned char)14)) ? (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_1]) : (((/* implicit */int) var_3)))) : (((arr_3 [i_0] [i_0 - 1] [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_4))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) arr_3 [i_0] [i_1] [i_1]);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] &= ((((/* implicit */int) var_7)) & (((((((/* implicit */_Bool) -1742238216)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) ((short) arr_2 [i_2]))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [14] [i_1] [i_2])))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)8)) == (((/* implicit */int) (short)-7883)))) ? ((-(((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_6 [i_3] [i_3 + 2] [i_3]))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2]))))) ? (((/* implicit */int) ((short) var_3))) : (((var_9) ? (((/* implicit */int) var_11)) : (arr_8 [i_0]))))));
                }
                /* vectorizable */
                for (short i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((arr_1 [i_0]) * (((/* implicit */int) var_2)))) : (((var_3) ? (arr_8 [i_0]) : (((/* implicit */int) var_0))))));
                    arr_21 [i_5] [i_0] [i_0 + 1] = ((/* implicit */int) arr_11 [i_5 - 1] [i_1] [i_0]);
                    var_21 = ((/* implicit */unsigned char) arr_10 [i_5 + 1] [i_0] [i_0] [i_0]);
                }
                arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)188))))))) ? (1285602176) : (((/* implicit */int) (unsigned char)8))));
            }
        } 
    } 
    var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_4)))))))) * (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(var_3)))) : (((/* implicit */int) var_11)))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_3))))))) ? (((((((/* implicit */int) var_15)) > (((/* implicit */int) var_6)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_0))))))) : (((/* implicit */int) ((((/* implicit */int) ((short) var_6))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))))));
}
