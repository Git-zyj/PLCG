/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155170
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
    var_10 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) (short)(-32767 - 1))))), (((/* implicit */unsigned long long int) min((((unsigned short) var_3)), (((/* implicit */unsigned short) var_7)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = max((min((arr_6 [i_0 - 1] [i_1 - 1]), (((/* implicit */unsigned short) (short)32758)))), (((/* implicit */unsigned short) var_7)));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_0 - 2] [i_1]);
                    arr_8 [i_1 - 1] [i_1] [i_1] [i_0] = min(((((~(((/* implicit */int) arr_6 [i_0] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50867))))))), ((+(((/* implicit */int) ((signed char) 9223372036854775807LL))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_9))));
    var_13 = ((/* implicit */long long int) min((var_9), (((/* implicit */int) ((unsigned short) var_8)))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 13; i_5 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_6 = 3; i_6 < 12; i_6 += 2) 
                    {
                        arr_22 [i_3] [i_4] [i_3] [i_6] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (unsigned short)0)), (min((arr_9 [i_3] [i_3]), (((/* implicit */long long int) arr_0 [i_4])))))), (((/* implicit */long long int) min((arr_10 [i_5 - 1] [i_3 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14655))))))))));
                        arr_23 [(unsigned char)0] [i_6] [i_3] [i_6] = ((/* implicit */_Bool) min((((/* implicit */int) (short)22100)), (((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (unsigned short)50867))))) | (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (arr_13 [i_3] [i_3]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned short) arr_11 [i_3] [i_7 - 1]);
                        var_15 -= ((/* implicit */short) (!(((/* implicit */_Bool) -9223372036854775777LL))));
                        arr_27 [i_7 + 1] [i_5] [i_3] [i_3] [i_4] [i_3 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-22090)) - (((/* implicit */int) var_5))));
                        arr_28 [i_3] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_1)))) | (((/* implicit */int) (unsigned short)14672))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(9223372036854775807LL)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22077))))))));
                        var_17 = ((/* implicit */long long int) (~(max(((~(var_4))), (((/* implicit */unsigned long long int) ((arr_3 [i_4] [i_4] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_5]))))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            var_18 = min((((/* implicit */unsigned long long int) max(((short)22100), (arr_4 [i_3 + 1] [i_3 - 2])))), (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))))));
                            arr_37 [i_3] [i_3] [i_4] [i_5] [i_9] [i_10] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_3] [i_3 + 1] [i_5 - 1])) ? (arr_15 [i_3 + 1] [i_5] [i_4] [i_5 + 1]) : (arr_15 [i_3 - 1] [i_4] [i_9] [i_5 - 2])))), (((unsigned long long int) 2148867723042432739LL)));
                            arr_38 [i_3] [i_3] = ((/* implicit */signed char) min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)50880))));
                        }
                        for (unsigned int i_11 = 1; i_11 < 13; i_11 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((int) var_9));
                            var_20 -= ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            var_21 = ((/* implicit */long long int) max((var_21), ((+(-9192684085375534977LL)))));
                        }
                        arr_41 [i_3] [i_3] [i_4] [i_5] [i_3] [i_9] = (+(((((/* implicit */_Bool) (unsigned short)14655)) ? (((/* implicit */long long int) arr_25 [i_5 - 1] [i_5 - 2] [i_4] [i_3 - 2])) : (arr_1 [i_5 - 2]))));
                        arr_42 [i_3] [i_3] [(short)10] [i_9] |= ((/* implicit */unsigned char) 2148867723042432739LL);
                    }
                    var_22 = ((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned int) (unsigned short)14655))));
                }
            } 
        } 
    } 
}
