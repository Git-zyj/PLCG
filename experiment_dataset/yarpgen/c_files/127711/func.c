/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127711
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
    var_14 = ((/* implicit */short) max((((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))), (((/* implicit */int) min((max((var_0), ((short)809))), (max((var_0), (var_6))))))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? ((~(((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) ((short) (short)0)))));
        var_16 = var_4;
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-32756)) : ((-(((/* implicit */int) (short)10))))));
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_0 - 1] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (short)-15729))))))));
                var_19 = var_1;
                var_20 = (short)16870;
            }
        }
        var_21 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (short)-13179)))))) << ((((+(((/* implicit */int) arr_1 [i_0 + 2])))) - (20807)))));
    }
    for (short i_3 = 3; i_3 < 18; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)29797)) - (((/* implicit */int) (short)28145)))), (((/* implicit */int) arr_13 [i_3 + 2] [i_4 - 1] [i_5]))))) || (((/* implicit */_Bool) (short)13180))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9274)) && (((/* implicit */_Bool) (short)16383))));
                        arr_17 [i_5] [i_5] [(short)0] [i_5] = min((min((arr_13 [i_3] [i_3 - 3] [i_5]), (((short) (short)63)))), (var_2));
                        var_24 *= var_10;
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-15741)) ? (((/* implicit */int) (short)2285)) : (((/* implicit */int) (short)-1))));
        var_26 += ((/* implicit */short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_12))));
        var_27 = ((/* implicit */short) (-(((/* implicit */int) (short)-2493))));
        arr_18 [i_3] &= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_3 - 2] [i_3] [i_3 - 3])) ? (((/* implicit */int) arr_13 [i_3 - 3] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_13 [i_3 + 2] [i_3] [i_3 - 3]))))));
    }
    for (short i_7 = 3; i_7 < 18; i_7 += 2) /* same iter space */
    {
        var_28 = (short)-16383;
        var_29 = ((/* implicit */short) max((var_29), (arr_14 [i_7 - 3] [i_7 - 3] [(short)15] [i_7 + 2] [i_7] [i_7])));
        var_30 *= arr_4 [i_7 - 3] [i_7 + 1];
    }
    var_31 = var_1;
    var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_10), (var_1)))) : (((/* implicit */int) var_2))));
}
