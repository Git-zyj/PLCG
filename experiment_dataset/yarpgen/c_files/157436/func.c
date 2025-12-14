/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157436
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((~(((long long int) (unsigned short)15004)))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */long long int) arr_1 [i_0])) : (((long long int) max((((/* implicit */unsigned int) -318292010)), (4294967295U)))))))));
        var_20 |= ((/* implicit */signed char) max((arr_1 [i_0]), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_21 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (short)-14705)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)384))) : (var_9)))))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -318292010))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (signed char)-102))));
        var_22 += 13422712398916170841ULL;
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((long long int) (signed char)50));
                        arr_15 [i_1] [i_1] [15ULL] [i_1] [i_1] = ((/* implicit */_Bool) arr_11 [i_3 - 1]);
                        var_24 = ((/* implicit */long long int) (short)25092);
                        var_25 *= ((/* implicit */unsigned long long int) (-(arr_13 [i_3 + 2] [i_2] [i_3] [i_2])));
                    }
                    for (unsigned char i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_11 [i_1])) && (((/* implicit */_Bool) 524284))))))));
                            arr_24 [i_1] [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) arr_23 [i_3] [i_6] [(_Bool)1] [i_5] [i_3] [i_2] [(unsigned short)2]);
                            var_27 -= ((/* implicit */unsigned int) ((arr_7 [i_5 - 1] [20] [i_5]) ? (67108864) : (((/* implicit */int) (short)26583))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_29 [i_1] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [i_2]);
                            arr_30 [i_1] [i_1] = ((/* implicit */unsigned short) arr_19 [i_1] [i_1]);
                        }
                        var_28 = ((/* implicit */_Bool) ((arr_17 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_1]))) : (4080LL)));
                    }
                    var_29 = var_16;
                }
            } 
        } 
    }
}
