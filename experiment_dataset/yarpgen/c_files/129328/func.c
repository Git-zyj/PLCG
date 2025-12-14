/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129328
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
    var_11 = var_5;
    var_12 = max(((unsigned char)75), (var_10));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)143), (var_1))))))) ? (((/* implicit */int) max(((short)-15427), ((short)-15419)))) : (((/* implicit */int) (unsigned char)184))));
                var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)114))) ? (((/* implicit */int) ((short) (short)-32759))) : (((/* implicit */int) ((short) (unsigned char)194)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) (unsigned char)126)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)141)))), (((/* implicit */int) (short)27989))))));
                            arr_14 [i_0] [i_0] [(short)1] [(short)1] = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) min(((short)12272), ((short)876))))))) ? ((+(((/* implicit */int) arr_2 [i_2 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)34), (var_6)))))))));
                            var_15 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-5607)) : (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)3]))))) ? (((/* implicit */int) max((arr_5 [(short)9] [i_1]), (((/* implicit */short) (unsigned char)60))))) : (((/* implicit */int) (unsigned char)255)))) >> (((((/* implicit */int) (unsigned char)147)) - (123)))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            arr_16 [i_0] [(short)2] [(unsigned char)16] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)213), (var_0)))) >= (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_1]))));
                        }
                    } 
                } 
                var_16 = ((unsigned char) (unsigned char)129);
                arr_17 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (short)4911)) : (((/* implicit */int) (short)-12273))))) ? (((/* implicit */int) (short)-21986)) : (((/* implicit */int) (short)16855)))), ((((!(((/* implicit */_Bool) (unsigned char)127)))) ? (((/* implicit */int) (short)-18492)) : (((/* implicit */int) (unsigned char)142))))));
            }
        } 
    } 
}
