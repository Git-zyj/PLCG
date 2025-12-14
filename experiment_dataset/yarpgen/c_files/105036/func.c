/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105036
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
    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (arr_2 [i_0] [i_0] [i_1]) : (((-772633617) - (((/* implicit */int) (signed char)97)))))) : ((((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) - (2092633981))) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)0)), (1416425234U)));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_11 [i_0] [i_0] = ((((/* implicit */_Bool) ((short) arr_9 [i_0] [i_0] [i_2] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-1383727450)))));
                    var_20 -= ((/* implicit */unsigned long long int) ((arr_1 [12ULL] [12ULL]) ? (arr_0 [i_0]) : (((/* implicit */int) (_Bool)1))));
                    arr_12 [i_2] [i_1] [18U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) >> (((arr_10 [0]) - (2832443225U))))), (((arr_2 [i_0] [13LL] [i_2]) << (((((/* implicit */int) var_16)) - (141)))))))) ? ((~(((arr_3 [i_0] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_18))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(short)6] [i_1] [i_0] [(short)6])))));
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_17 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_9);
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_18 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4])) : (-1437410748))) % (((/* implicit */int) var_1))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            var_21 -= ((/* implicit */unsigned int) var_4);
                            arr_24 [i_0] [4U] [i_3] [i_4 - 1] [i_0] [i_5 - 1] &= ((/* implicit */long long int) arr_3 [i_4] [i_5]);
                        }
                        var_22 += ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_4 + 1] [10LL]))) * (((/* implicit */int) (unsigned short)100))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_6 = 4; i_6 < 17; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_6] [i_6] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_8] [i_8] [i_8] [i_0])) ? (((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) max((arr_13 [i_0] [i_6] [i_7] [i_8]), (arr_19 [i_0] [i_6] [i_6])))) : ((((_Bool)1) ? (986051586499507754ULL) : (((/* implicit */unsigned long long int) 1437410747)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)9)) || (((/* implicit */_Bool) var_1))))))));
                                var_23 += ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_7])) ? (max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_6 + 3] [i_6 + 3] [i_6])) ^ (((/* implicit */int) arr_3 [i_7] [i_7]))))), (arr_29 [i_0] [i_1] [i_0] [i_6] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (4027800941004533879LL) : (((/* implicit */long long int) 1437410747))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned short)15] [i_6 - 3] [i_7] [i_7] [i_8]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_2 [i_0] [i_6] [i_7])) : (-9223372036854775797LL)))))));
                                arr_36 [i_0] [i_1] [i_6 - 2] [i_7] [i_8] [i_6] [(_Bool)1] |= ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (_Bool)1))));
                        arr_41 [i_0] [i_0] [i_0] [i_6] [i_9] = ((/* implicit */long long int) ((((((/* implicit */int) (short)32767)) / (((/* implicit */int) var_6)))) >> (((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) var_10)) : (arr_0 [i_0]))) - (48539)))));
                    }
                }
                arr_42 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1437410749)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_1] [i_0] [i_0] [i_0])))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-14502))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (var_14)))))));
            }
        } 
    } 
    var_25 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 10446476389038851630ULL)) && (((/* implicit */_Bool) var_5))))), (4105566768U)));
}
