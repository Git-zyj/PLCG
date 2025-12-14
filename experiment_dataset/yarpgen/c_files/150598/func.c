/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150598
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_7))));
    var_12 = ((/* implicit */unsigned short) (short)23108);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) arr_6 [i_0])))))) - (((arr_5 [i_0] [i_1] [i_0] [i_0]) / (1276130963U))))))));
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */long long int) 818916873U)) : (((988421786501132213LL) << (((((/* implicit */int) arr_7 [i_0] [i_1])) - (193)))))));
                    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) != (var_6)));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1])))))) >= (((/* implicit */int) var_5))));
                            var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)0)), (2934558288U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (max((((((-1590754742877863443LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)185)) - (185))))), (((/* implicit */long long int) (((_Bool)1) ? (2458874135U) : (4294967295U))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_18 |= ((/* implicit */unsigned char) var_4);
                            arr_18 [i_0] = ((((/* implicit */_Bool) (short)252)) ? (3005168321U) : (0U));
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-11555)) ? (var_10) : (((/* implicit */long long int) 3047161928U)))) + (((/* implicit */long long int) min((((unsigned int) var_5)), (((3480201451U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (max((((arr_5 [i_0] [i_1] [i_0] [i_0]) << (((min((((/* implicit */unsigned int) (short)8192)), (4281933719U))) - (8188U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1016)) ? (((/* implicit */int) arr_13 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_2] [i_0] [i_2])))))))));
                            var_20 = ((/* implicit */unsigned char) min((((arr_5 [i_0] [i_1] [i_2] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (min((((/* implicit */unsigned int) arr_14 [i_0])), (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                    {
                        var_22 = max((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61195)) >> (((arr_2 [i_0]) - (5327677725486258527LL)))))), (arr_0 [i_0]))), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)15696)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned short)56383)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((arr_1 [i_7]) ? (arr_22 [i_0] [i_1] [i_0] [9U] [i_8]) : (((unsigned int) var_3)))))));
                            arr_28 [i_7] [i_0] [i_2] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_8])) : (((/* implicit */int) arr_1 [i_2]))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_33 [i_0] [i_1] [i_2] [8U] [i_1] |= (-(((var_0) ? (max((((/* implicit */long long int) (unsigned char)70)), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))))));
                            var_24 = ((/* implicit */unsigned int) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 2284511662U))));
                            var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)37569))))))), (min((535822336U), (1668453639U)))));
                        }
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)9274)) * (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)68))))) & (((((/* implicit */_Bool) ((3U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((3146093943U), (((/* implicit */unsigned int) (unsigned short)32768))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) (short)-32759))) > ((+(((942281129311135526LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32743)))))))));
                        var_28 = ((/* implicit */short) min((((((/* implicit */int) var_8)) + (((/* implicit */int) ((unsigned short) (_Bool)1))))), (((/* implicit */int) ((unsigned char) 2244471798U)))));
                    }
                }
            } 
        } 
    } 
    var_29 ^= ((/* implicit */unsigned char) var_7);
}
