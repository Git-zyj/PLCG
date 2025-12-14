/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118962
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
    var_16 &= ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) (_Bool)1);
                var_18 += ((/* implicit */unsigned char) (_Bool)1);
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(unsigned char)5] [(unsigned char)5] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [(unsigned char)5] [(short)1] [i_1])), (var_1)))) || ((_Bool)0))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_20 = (((_Bool)1) || (((/* implicit */_Bool) (short)4095)));
                    var_21 = arr_1 [i_0 - 1];
                    var_22 = ((/* implicit */unsigned char) (_Bool)1);
                    var_23 = ((/* implicit */short) min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0 - 1])))), (((((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))))));
                }
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_2 [i_4] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1] [i_3] [i_3])) && ((_Bool)1))))))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_5] [i_4] [i_3] [i_1] [i_0])) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12591)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) arr_1 [i_3]))))))))));
                                var_26 += ((unsigned char) min((arr_0 [i_0 + 1]), (arr_2 [i_0] [i_0 - 2] [i_4])));
                                var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_5 [(unsigned char)12] [(unsigned char)12] [(_Bool)1] [i_5])) : ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)28916))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) arr_7 [(_Bool)1] [i_1] [(short)6] [(short)6]);
                }
            }
        } 
    } 
    var_29 = ((/* implicit */short) (-(((/* implicit */int) ((short) (_Bool)1)))));
}
