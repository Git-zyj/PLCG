/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134769
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
    var_20 |= ((/* implicit */unsigned int) var_1);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_15)))) : (((var_11) + (((/* implicit */long long int) var_18)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((-(var_11))) : (((((/* implicit */_Bool) var_12)) ? (var_19) : (var_7)))))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)53908)) && (((/* implicit */_Bool) (unsigned short)11845)))) ? (((/* implicit */int) (unsigned short)53876)) : (((/* implicit */int) ((var_14) == (var_19)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11845)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -3517213713358546801LL)) : (12135187100977079189ULL)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (var_2) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [3LL] [i_2] [21ULL])) ? (arr_3 [i_0] [i_0 - 2] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))))) ? ((+((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) (!(arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1]))))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_3] [i_1] [i_1] [i_0]))) : (var_18)))) ? (((arr_7 [i_4] [i_2] [i_0]) ? (arr_5 [i_1] [i_3] [i_4]) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_1 [i_0])))))))) | (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_1] [i_1]))) * (arr_3 [(signed char)9] [i_3] [i_0]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2] [i_1])) ? (arr_6 [i_0 - 2] [i_0] [i_1] [10ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_2] [i_2])))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(arr_8 [i_0 - 2] [i_0 + 1] [i_0 - 2])));
                var_26 ^= ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_9 [i_0 + 2]))))));
            }
            var_27 = ((/* implicit */unsigned char) var_15);
            var_28 += ((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0 - 1] [i_5]);
            var_29 = ((/* implicit */unsigned int) var_9);
        }
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_30 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * ((-(((/* implicit */int) var_4))))))) | (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-(arr_19 [i_0] [i_0] [i_0] [(unsigned short)13])))))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                var_31 = arr_25 [i_0];
                arr_27 [i_0] = ((/* implicit */unsigned char) arr_17 [7ULL] [i_7] [i_7] [i_8]);
            }
            /* vectorizable */
            for (unsigned int i_9 = 2; i_9 < 20; i_9 += 2) 
            {
                var_32 = arr_15 [i_9 - 1] [i_9 + 2] [i_0 - 1];
                var_33 -= ((/* implicit */signed char) ((var_10) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                arr_30 [(unsigned short)13] [i_0] [(unsigned short)13] [8ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (var_3) : (var_18))) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
            arr_31 [i_0] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_7] [i_0] [i_0] [i_0 - 2])) ? ((+((-(arr_21 [i_0]))))) : (((((/* implicit */_Bool) arr_15 [(unsigned short)11] [i_0 + 1] [i_0 - 2])) ? (arr_15 [i_0] [i_0] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
            arr_32 [i_0] [i_0 + 1] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (arr_15 [i_0] [i_0] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))));
            var_34 = ((/* implicit */unsigned int) min((var_34), (arr_29 [i_7] [i_7] [i_0])));
        }
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44832)) ? (137438953471ULL) : (6255658513361315894ULL)));
    }
}
