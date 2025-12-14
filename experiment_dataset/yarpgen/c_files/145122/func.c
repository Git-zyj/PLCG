/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145122
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
    var_12 = ((/* implicit */short) max((var_12), (((short) min((((/* implicit */int) (short)-32763)), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_7)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_13 [i_4] [i_3] [i_2] [i_1 + 1] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)32763)))))) ? (((/* implicit */int) (short)-17418)) : (((/* implicit */int) (short)27337))));
                            var_13 |= ((/* implicit */short) ((min(((+(((/* implicit */int) (short)32762)))), ((+(((/* implicit */int) var_1)))))) <= (((/* implicit */int) ((short) var_9)))));
                            var_14 = ((/* implicit */short) (+((+(((/* implicit */int) (short)32762))))));
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_15 -= ((short) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (short)-15129))));
                            arr_16 [i_0] [i_1] [i_2] [i_5] [i_3] [i_1] [i_0 - 1] |= ((/* implicit */short) (+(((/* implicit */int) min((((short) (short)-32748)), ((short)-17009))))));
                        }
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [(short)10] = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_20 [i_6] [i_3 - 1] [i_1 - 1] = (short)32767;
                            arr_21 [i_0 - 1] [(short)2] [i_2] [i_3] [i_6] = (short)32767;
                        }
                        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_16 += ((short) ((((((/* implicit */int) (short)20343)) - (((/* implicit */int) var_6)))) - (((/* implicit */int) min((var_4), (var_7))))));
                            var_17 = (short)-32757;
                            arr_24 [i_0 - 1] [i_1] [i_2] = ((short) (~(((/* implicit */int) (short)-16529))));
                        }
                        var_18 = ((/* implicit */short) (+(min((((/* implicit */int) (short)-11704)), ((+(((/* implicit */int) (short)2536))))))));
                        arr_25 [i_0] [i_1 - 1] [i_2] [i_3 - 1] = var_4;
                    }
                    for (short i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */short) max((((((/* implicit */int) (short)-16541)) - (((/* implicit */int) (short)-17009)))), (((/* implicit */int) ((short) ((short) var_6))))));
                        var_20 = ((/* implicit */short) (+((+(((/* implicit */int) (short)2496))))));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [i_8] [(short)12] [i_8 - 1] [i_9] = ((/* implicit */short) (+((+(((/* implicit */int) (short)32740))))));
                            arr_31 [i_0] [i_1] [i_8] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)13850)) ? (((/* implicit */int) (short)7482)) : (((/* implicit */int) (short)-29905))));
                            var_21 = (short)32737;
                            arr_32 [i_0] [i_8] [i_2] [i_8 - 1] [(short)14] = max((var_5), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)28624))) && (((/* implicit */_Bool) min((var_4), ((short)16823))))))));
                        }
                        for (short i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            var_22 *= ((/* implicit */short) (+((+((+(((/* implicit */int) (short)32763))))))));
                            var_23 -= ((/* implicit */short) max(((~(((/* implicit */int) (short)-16529)))), (((/* implicit */int) ((short) (short)-16548)))));
                            var_24 ^= ((/* implicit */short) ((((/* implicit */int) (short)-1337)) / (((/* implicit */int) (short)21364))));
                            arr_36 [i_8] [i_0] [i_2] [i_8] [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((short) (~(((/* implicit */int) (short)32767))))))));
                        }
                        arr_37 [i_0] [i_8 + 1] [(short)10] [i_8] [(short)10] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) ((((/* implicit */int) (short)32746)) != (((/* implicit */int) var_9)))))))));
                    }
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(((/* implicit */int) (short)16996)))))));
                }
            } 
        } 
        arr_38 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) (short)32767)) - ((+(((/* implicit */int) (short)-1337))))));
        arr_39 [i_0] = var_1;
        var_26 = ((short) (+(((/* implicit */int) (short)32763))));
        var_27 = ((/* implicit */short) (~((+(((/* implicit */int) max(((short)32739), ((short)32711))))))));
    }
    for (short i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        arr_42 [i_11] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-20239)))))));
        var_28 = ((/* implicit */short) ((((/* implicit */int) ((short) min(((short)-4316), (var_0))))) | (((/* implicit */int) (short)1))));
    }
}
