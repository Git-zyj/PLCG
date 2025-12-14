/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105648
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
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2 - 2] = ((/* implicit */unsigned long long int) var_7);
                    var_18 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0] [i_1])) <= (((/* implicit */int) arr_2 [i_1] [i_2 - 1])))) ? (min((-1572085862076035736LL), (min((5311791148204546053LL), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_0])))))) : (((/* implicit */long long int) max(((-(var_12))), (((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_11))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1] [(unsigned char)4] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) 1352088731U)) ? (908205727) : (((/* implicit */int) var_15))))), (5311791148204546053LL))), (((/* implicit */long long int) var_0))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))), (max((max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_1] [i_2 - 2] [i_1] [i_1])) : (((/* implicit */int) (signed char)10)))))))));
                    }
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0 - 2]))))) << (((/* implicit */int) min((arr_8 [i_0] [i_0 - 2] [i_0 - 2]), (arr_8 [(unsigned char)1] [i_0 - 2] [i_0 - 2]))))));
        /* LoopSeq 4 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            arr_17 [i_4] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [9])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)10))))))), (((var_5) < (((/* implicit */int) max((arr_10 [i_0 - 2] [(unsigned short)12] [i_4] [i_4]), (((/* implicit */unsigned char) (signed char)76)))))))));
            var_20 = ((/* implicit */unsigned short) (+((+(682078586)))));
            var_21 = ((/* implicit */_Bool) 2276946107776733006ULL);
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            var_22 = (+(((((/* implicit */_Bool) var_15)) ? (1483428735) : (((/* implicit */int) (_Bool)1)))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-77)))))));
            var_24 ^= ((/* implicit */unsigned char) (signed char)81);
            var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_14))));
        }
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((arr_11 [i_6] [7ULL]), (((/* implicit */unsigned long long int) 536870911)))), (((/* implicit */unsigned long long int) ((var_6) ? (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (signed char)32)))) ^ (((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 1] [i_0])))))));
            var_27 = ((/* implicit */long long int) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */long long int) arr_16 [i_6 - 1])) : (min((((/* implicit */long long int) -621411101)), (5581587459274526668LL))))))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) var_5);
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_26 [i_0] [13ULL] [13ULL]), (((/* implicit */int) var_0))))))) & (11273875466266305287ULL))))));
                    var_30 = ((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)0]))) : (arr_16 [i_6 - 1]))))))));
                    var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (arr_7 [i_8] [i_8] [i_6 - 1] [i_6])))));
                    var_32 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_1)), (134217727)))));
                }
                var_33 += ((/* implicit */unsigned short) arr_12 [i_7] [12U] [i_0] [i_0] [i_0]);
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((unsigned short) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [20ULL] [i_7 - 1] [i_6 - 1])))))))));
                var_35 ^= ((/* implicit */unsigned short) min((3396868609824763228ULL), (((/* implicit */unsigned long long int) min((arr_16 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_0] [i_6] [i_6])) ^ (((/* implicit */int) var_15))))))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_26 [(_Bool)1] [i_0 - 2] [i_6 - 1])))) ? (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) (_Bool)1))), (var_2)))) : (((/* implicit */int) ((_Bool) arr_8 [i_6 - 1] [i_6 + 1] [i_0 + 1])))));
                var_37 = ((/* implicit */int) arr_15 [i_0 - 1] [4] [i_0]);
                var_38 = ((/* implicit */int) (!(max((arr_20 [i_0 - 2]), (arr_20 [i_0 + 1])))));
            }
            var_39 -= ((/* implicit */short) (signed char)72);
            arr_31 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_0 - 2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) -1537544437)) : (arr_11 [i_0 - 1] [i_6]));
        }
        for (short i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            var_40 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0 - 1] [i_0 + 1])) ? (arr_15 [i_0 - 2] [i_10] [i_10]) : (arr_15 [i_0] [i_10] [i_0]))))));
            arr_34 [i_0] [i_0] &= ((/* implicit */unsigned char) ((2296920200U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36643)))));
            arr_35 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_6 [i_0] [1U] [i_10] [i_10])))))));
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) != (min((((/* implicit */int) arr_10 [i_10] [i_10] [i_0] [i_0 - 2])), ((~(((/* implicit */int) var_6))))))));
        }
        arr_36 [i_0 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) >> (((max((536870911ULL), (((/* implicit */unsigned long long int) var_13)))) - (536870884ULL)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    var_42 = ((/* implicit */int) max((var_16), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)20083)) : (((/* implicit */int) (unsigned char)10))))))));
}
