/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110268
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (1944908093U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_0 - 1] = ((((/* implicit */_Bool) 2350059198U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 1])))))) : (2350059203U));
                            arr_9 [i_1] [i_1] [14U] [i_1] = arr_0 [i_0];
                            arr_10 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) arr_7 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0]);
                        }
                    } 
                } 
                arr_11 [i_0] [(short)11] [9U] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((arr_5 [i_1] [i_1] [i_0 + 1] [7U]) >> (((var_12) - (843059060U))))) : (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10574))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])))));
                arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)-32767)) <= (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    arr_15 [(short)16] [(short)16] = ((/* implicit */short) max((var_14), (((/* implicit */unsigned int) (short)-32750))));
                    arr_16 [i_1] [i_1 + 1] [i_4] [14U] = ((/* implicit */short) arr_1 [i_4]);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-13356))))))) < (min((((/* implicit */unsigned int) (short)-32757)), (4144520586U)))));
    var_17 = var_12;
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_26 [i_5 - 1] [i_5] [i_5 + 2] = ((/* implicit */unsigned int) (((-(((/* implicit */int) min((arr_20 [i_5]), (arr_19 [i_5])))))) == (((/* implicit */int) arr_17 [i_5]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_8 = 4; i_8 < 20; i_8 += 1) 
                    {
                        arr_29 [(short)19] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5]))) : (11U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5])))));
                        arr_30 [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)14241)) << (((2350059203U) - (2350059198U)))))) == (3292463354U)));
                    }
                    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        arr_33 [i_5] [i_5] [i_9] [i_9] = ((short) arr_20 [i_5]);
                        arr_34 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_9 - 1] [i_6] [i_7])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32757)) ? (arr_32 [i_5] [i_7] [6U] [i_5]) : (arr_32 [(short)15] [i_6] [(short)13] [i_5]))))))) >> (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)1785)) || (((/* implicit */_Bool) arr_32 [i_5 + 1] [i_6] [(short)15] [i_5])))))) : ((+(arr_27 [i_5] [i_5] [i_7])))))));
                    }
                    for (unsigned int i_10 = 4; i_10 < 19; i_10 += 2) 
                    {
                        arr_38 [i_5] [i_5] [i_7] [(short)20] = ((/* implicit */short) arr_25 [i_5] [i_7 + 1] [i_10 + 2]);
                        arr_39 [i_7 + 1] [i_6] [i_10] [i_10] [i_5] [i_6] = ((((/* implicit */_Bool) min((4294967293U), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32756))) : (min(((+(1944908110U))), (((/* implicit */unsigned int) arr_20 [i_5])))));
                        arr_40 [i_5] [i_5] [i_6] [i_6] = ((((/* implicit */_Bool) ((short) 4294967285U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (short)-32745))))) ^ (((((/* implicit */_Bool) arr_25 [i_10] [i_6] [i_7 + 1])) ? (arr_31 [i_5 + 1] [i_6] [i_7 + 1] [i_10] [i_7 + 1]) : (arr_31 [i_5 + 1] [3U] [i_5] [i_5] [i_5 + 1]))))));
                    }
                }
            } 
        } 
    } 
}
