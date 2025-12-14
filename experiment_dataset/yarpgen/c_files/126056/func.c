/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126056
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = var_4;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((short) min(((unsigned char)46), ((unsigned char)62))));
                                arr_13 [(unsigned char)9] [i_3] [(short)10] [i_2] [i_1] [i_0] = max((((/* implicit */short) arr_4 [i_2])), (min(((short)6955), (((/* implicit */short) arr_4 [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = var_14;
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)91)) + (((/* implicit */int) arr_14 [i_5] [i_5]))))))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_12)))) : (((/* implicit */int) ((short) var_4)))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)62)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) arr_11 [i_5] [i_5] [(unsigned char)5] [i_5] [i_6] [i_6] [i_6])))) : ((+(((/* implicit */int) var_0)))))))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)222)) & (((/* implicit */int) (unsigned char)193)))))));
                var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) arr_19 [(short)8] [i_6])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((short) arr_14 [i_5] [i_5]))) : (((((/* implicit */int) (unsigned char)244)) ^ (((/* implicit */int) (unsigned char)5))))));
                var_22 &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) + (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) arr_10 [i_5] [(unsigned char)5] [i_5] [i_5]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (short)-14776)) : (((/* implicit */int) (unsigned char)98))))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */_Bool) min(((short)-1483), (((/* implicit */short) var_14))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))));
}
