/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110774
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)22471)) > (var_6)))), (max((0ULL), (((/* implicit */unsigned long long int) (signed char)-104)))))) & (max((((/* implicit */unsigned long long int) var_2)), (var_4)))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((long long int) min((var_4), (((/* implicit */unsigned long long int) (signed char)107)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_4] [i_4] [i_3] [i_4] [i_4] [i_4] |= ((/* implicit */_Bool) ((unsigned int) min((var_1), (((/* implicit */unsigned long long int) var_2)))));
                                var_15 += ((/* implicit */unsigned long long int) (signed char)110);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (signed char)110)), (var_1)))));
                        arr_25 [(signed char)1] = ((/* implicit */signed char) min(((-(((/* implicit */int) var_2)))), (-620167055)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_17 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)113))));
                            arr_28 [i_2] [(_Bool)0] [i_4] [i_7] [i_7] [(unsigned short)1] [i_8] = ((/* implicit */long long int) ((unsigned long long int) (short)-17421));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) ((signed char) var_9));
                        arr_31 [i_9] = ((/* implicit */unsigned short) var_9);
                    }
                    for (int i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        arr_35 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_10 - 1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)4))))));
                        var_19 ^= ((/* implicit */short) ((_Bool) ((short) var_2)));
                        var_20 = ((/* implicit */int) ((unsigned char) ((unsigned int) ((int) (signed char)-113))));
                        arr_36 [i_10] [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) (short)-17418)));
                    }
                    arr_37 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)-1250), (var_10))))));
                    var_21 = ((/* implicit */int) ((long long int) (~(((/* implicit */int) (signed char)4)))));
                }
            } 
        } 
    } 
}
