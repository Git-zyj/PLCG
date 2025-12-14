/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108837
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
    var_13 = var_3;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (min((arr_1 [i_0]), (1373673621U))) : (arr_1 [i_0]));
        var_15 = ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (1697357941U) : ((-((+(2046589561U))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) 
        {
            var_16 = ((((/* implicit */_Bool) 19U)) ? ((-(3143149334U))) : (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1] [i_2]) : (2301710805U))));
            var_17 = arr_5 [i_1] [10U];
            var_18 = ((unsigned int) var_1);
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_19 = (-(arr_5 [i_1 - 1] [i_1 + 2]));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_20 = 4294967282U;
                arr_11 [8U] [8U] [i_4] = 4U;
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    var_21 = 535822336U;
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((unsigned int) arr_8 [i_5] [i_4] [i_3]))));
                    var_23 = ((((unsigned int) 318828905U)) | (((((/* implicit */_Bool) 1049143481U)) ? (var_6) : (4294967270U))));
                    var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (3143149338U) : (arr_9 [i_5] [i_4] [i_3] [i_1])))) ? (arr_12 [i_3]) : (975568441U));
                }
            }
            var_25 = ((unsigned int) var_4);
            var_26 = ((unsigned int) (+(arr_2 [i_1 + 2] [i_3])));
        }
        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (var_8)))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_7] [i_7])) ? (var_7) : (var_2))) : (((unsigned int) arr_19 [i_1] [i_6] [i_1] [i_1])));
                var_28 += arr_16 [i_1] [i_6 + 2] [i_7];
                var_29 = arr_3 [i_1 - 1] [i_6 + 2];
                arr_20 [i_1] [i_1] &= ((((unsigned int) arr_17 [i_1])) | (((((/* implicit */_Bool) 3306341039U)) ? (2254124365U) : (1702506727U))));
            }
            var_30 = ((((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6] [i_6])) ? (((unsigned int) var_6)) : (((unsigned int) 8191U)));
            arr_21 [i_1 - 2] [i_6 + 1] = ((unsigned int) (+(arr_8 [i_1] [i_6] [i_6])));
        }
        var_31 += arr_12 [i_1 - 2];
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
    {
        var_32 = var_5;
        var_33 = ((((/* implicit */_Bool) ((unsigned int) 988626246U))) ? (((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8])) ? (2301710818U) : (arr_22 [i_8] [i_8]))) : (((((/* implicit */_Bool) var_3)) ? (1327289794U) : (arr_10 [i_8] [14U]))));
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            arr_27 [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8] [10U] [10U] [16U])) ? (var_9) : (4294967295U))))));
            var_34 = ((((/* implicit */_Bool) arr_5 [i_8 + 1] [i_8 - 1])) ? (var_2) : (arr_25 [i_8] [i_8 + 1] [i_8 - 1]));
            var_35 = var_7;
            var_36 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0U)) ? (1993256490U) : (var_11))) <= (((((/* implicit */_Bool) var_3)) ? (var_12) : (0U)))));
        }
    }
    var_37 = var_3;
}
