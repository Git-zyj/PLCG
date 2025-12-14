/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134260
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), (min((((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0 - 1]) : (664539545))), (((/* implicit */int) var_6))))));
        var_12 = ((((/* implicit */_Bool) max((arr_0 [i_0 + 2] [i_0 - 2]), (((/* implicit */unsigned short) var_2))))) && (((/* implicit */_Bool) ((short) arr_0 [i_0 - 1] [i_0 + 1]))));
        var_13 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)7])))))) : (max((var_0), (((/* implicit */long long int) arr_0 [i_0] [i_0 + 2]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 14; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_15 [i_1] [i_2] &= ((/* implicit */short) arr_14 [(unsigned short)4] [i_4] [3] [3] [i_4] [i_4]);
                            arr_16 [10U] [10U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4] [1U] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4])) ? (arr_14 [i_4] [10] [(unsigned char)6] [i_4 - 2] [i_4 + 1] [i_4]) : (664539545)));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_0))));
                            arr_19 [i_1] [i_2] [9] [i_1] [i_4] [9] [i_6] = ((/* implicit */unsigned int) ((signed char) (signed char)-80));
                            var_15 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_2] [i_1] [(short)2])) + (arr_14 [11] [(_Bool)1] [i_3] [i_3] [i_4] [i_6])));
                        }
                        arr_20 [3] [(signed char)8] [i_1] [i_4] [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) arr_4 [i_1]))));
                    }
                    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_7 [i_2] [i_2] [i_3])))));
                    arr_21 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)20890))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (_Bool)0))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 1; i_7 < 8; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) var_4);
                    arr_30 [i_7] [i_8] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)48))))) || (((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_9] [i_9])))));
                }
            } 
        } 
    } 
}
