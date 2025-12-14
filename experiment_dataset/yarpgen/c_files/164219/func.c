/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164219
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
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) (+(arr_1 [i_0 + 1])));
            var_21 = ((/* implicit */signed char) ((arr_3 [i_1] [i_0 - 2]) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */short) arr_1 [i_0 - 1]);
                        var_23 &= ((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 2])));
                        arr_13 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0 + 2] = ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]);
                    }
                } 
            } 
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (var_10)));
            /* LoopSeq 3 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_25 = (unsigned short)55818;
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
                            var_27 |= ((/* implicit */unsigned int) ((signed char) 14636480506654594504ULL));
                        }
                    } 
                } 
            }
            for (short i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                var_28 |= ((/* implicit */unsigned long long int) arr_0 [i_8 - 1]);
                var_29 = ((/* implicit */long long int) ((short) arr_20 [i_2] [i_2]));
            }
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 14266764303088662470ULL))) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1]))));
                arr_28 [i_0] [i_9] &= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)15414))));
            }
            var_31 &= ((/* implicit */long long int) arr_19 [i_2] [1U] [i_2] [i_0]);
            arr_29 [i_2] [i_2] = ((/* implicit */long long int) var_16);
        }
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (unsigned char i_11 = 3; i_11 < 18; i_11 += 1) 
            {
                {
                    arr_35 [i_0 + 1] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 1] [i_0] [i_10])) ? (arr_7 [i_11] [i_11 + 1] [(short)8] [i_11]) : (((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 2]))));
                    var_32 = ((/* implicit */unsigned int) arr_19 [i_0] [i_11 - 2] [i_11 - 3] [i_0 - 2]);
                    arr_36 [i_11] = ((((/* implicit */int) (signed char)(-127 - 1))) + (arr_23 [i_0] [i_0 + 1] [i_0]));
                }
            } 
        } 
        var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6301)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_6 [i_0 + 2])));
    }
    var_34 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))))), (((long long int) var_2))));
}
