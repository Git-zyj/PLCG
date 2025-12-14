/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159073
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_0]), ((short)-2103))))))) - (((/* implicit */int) max((max(((short)20903), (var_7))), (max((var_8), ((short)2102))))))));
        var_10 = arr_2 [i_0 + 1];
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_11 = ((/* implicit */short) (~(((((/* implicit */int) var_9)) << (((((((/* implicit */int) arr_1 [i_1])) + (4811))) - (24)))))));
        arr_8 [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
        var_12 = ((/* implicit */short) (~((~(((/* implicit */int) arr_6 [i_1] [i_1]))))));
        var_13 = ((short) (short)-2098);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_14 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */int) (short)-706)) : (((/* implicit */int) (short)-1))));
    }
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 16; i_6 += 3) 
                    {
                        for (short i_7 = 2; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) (-(((/* implicit */int) ((short) arr_20 [i_4])))));
                                arr_24 [i_3] [i_3] [i_4] [i_3] [i_4] [(short)3] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)26325))))) ? (((/* implicit */int) (short)8849)) : (((((/* implicit */int) arr_1 [i_7])) * (((/* implicit */int) var_5)))))) / (((/* implicit */int) ((short) (short)2112)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_8 = 2; i_8 < 15; i_8 += 4) 
                    {
                        var_16 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-8)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_3] [i_4] [i_5] [i_8])))))))));
                        arr_27 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) max(((short)32766), ((short)705)))) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) arr_0 [i_8] [i_4])))), (((/* implicit */int) (short)-10))));
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            {
                                arr_36 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_10] [(short)0] [i_5] [i_5] [i_4] [i_4] [(short)11])) / (((/* implicit */int) var_3))));
                                arr_37 [i_10] [i_9] [i_4] [i_4] [i_3] = var_7;
                                var_17 = ((short) (~(((/* implicit */int) arr_18 [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
