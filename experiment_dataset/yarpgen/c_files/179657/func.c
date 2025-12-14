/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179657
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)59)) ^ (29)));
                var_11 -= ((unsigned int) ((-979678849) < (((/* implicit */int) arr_0 [i_0]))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((unsigned int) arr_1 [i_1 - 2] [i_1 + 1])) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((114300462U), (((/* implicit */unsigned int) -1364355263))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    arr_17 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (~(-1289052010)));
                    arr_18 [i_2] [10LL] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_2])) ? (var_8) : (((/* implicit */unsigned int) -1)))), ((((~(arr_3 [i_4]))) ^ (((((/* implicit */_Bool) 4294967295U)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3686))))) * (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned int) var_10)) : (arr_19 [i_2] [i_2] [i_2] [i_2])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) max(((signed char)120), ((signed char)-120)))), (((unsigned short) arr_22 [i_2] [i_2] [i_2] [i_2])))))));
                        arr_25 [i_2] [i_3] = ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -807973926)) ? (((/* implicit */int) (unsigned char)249)) : (arr_20 [i_6] [i_6] [i_6])))));
                        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (var_1)))) ? (((((/* implicit */int) arr_7 [i_2])) / (-1784790133))) : (((/* implicit */int) arr_12 [i_2]))))) ? (((((/* implicit */_Bool) (signed char)-117)) ? (var_9) : (((/* implicit */unsigned int) -16)))) : (((/* implicit */unsigned int) 979678848))));
                        arr_26 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_1 [i_5] [i_6])), ((-(arr_16 [i_2] [i_5] [i_2])))));
                    }
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((arr_22 [i_2] [i_2] [i_5] [i_5]), (arr_22 [i_2] [i_3] [i_2] [i_3])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_3] [i_2] [i_5]))) | (var_8)))));
                }
                var_16 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) var_9))));
                var_17 += ((/* implicit */short) (~(((/* implicit */int) var_6))));
                var_18 = arr_3 [i_3];
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_7 = 4; i_7 < 23; i_7 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_7 - 4] [i_7 - 2])) << (((((/* implicit */int) (signed char)116)) - (94)))));
        var_20 = (-(((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 2])));
        var_21 = ((((((/* implicit */int) (unsigned char)28)) < (((/* implicit */int) arr_28 [i_7] [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : (var_8));
    }
    var_22 = ((/* implicit */int) var_6);
}
