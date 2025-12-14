/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185715
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) > (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0)))))))))));
    var_16 = ((short) ((unsigned char) var_3));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [(short)16] |= ((/* implicit */unsigned char) var_13);
                var_17 += ((/* implicit */short) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)62)))))) : (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)63))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            for (short i_4 = 4; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [(short)5] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) & (((/* implicit */int) ((((/* implicit */int) (short)-32755)) <= (((/* implicit */int) (_Bool)1))))))) << (((((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) - (18108)))));
                    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-63))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) - (((/* implicit */int) (short)-63))))) ? (((((/* implicit */int) var_14)) ^ (((/* implicit */int) (short)63)))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) var_5))))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_4)))))));
                                arr_25 [i_3] [(short)10] = ((/* implicit */unsigned char) min((((_Bool) ((((/* implicit */int) (short)-32754)) - (((/* implicit */int) (unsigned char)255))))), (var_4)));
                                arr_26 [i_5] [i_3] [i_5] [i_5] [i_6] = ((/* implicit */short) max((((/* implicit */int) var_9)), (min((((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32743)))), (((/* implicit */int) max((var_3), (((/* implicit */short) var_8)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
