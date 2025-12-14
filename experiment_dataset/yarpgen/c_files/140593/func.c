/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140593
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [2U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61440))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [16LL] [i_1])) | (var_12))))))) ? ((~(((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((min((((/* implicit */int) arr_8 [i_2] [i_1])), (-723508343))) - (((/* implicit */int) ((signed char) (~(723508343))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1] [i_1] [5LL] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (723508343) : (((/* implicit */int) arr_8 [i_1] [i_3]))))) & (((arr_6 [i_0] [i_2] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4])))))));
                            var_21 += ((/* implicit */long long int) ((short) (-(-2406740783641488301LL))));
                            arr_16 [i_4] [i_1] [i_0] [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_0 [i_4])) ? (((((/* implicit */int) var_7)) >> (((3983175069979500290ULL) - (3983175069979500276ULL))))) : (var_1));
                            var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((int) (unsigned short)61440))) ? (((((/* implicit */_Bool) var_19)) ? (var_12) : (((/* implicit */int) arr_8 [i_2] [i_1])))) : ((-(((/* implicit */int) (signed char)108))))));
                        }
                    }
                    var_23 += ((((/* implicit */long long int) ((((/* implicit */_Bool) -723508344)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)-123))))) == ((~(((long long int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)61440))))));
                            var_25 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)28845)) : (((/* implicit */int) var_19)))) * (((/* implicit */int) (unsigned short)61429))));
                            var_26 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                        }
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-2406740783641488301LL))), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                    }
                    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))))))) ^ (((/* implicit */int) min((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2]))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 23; i_7 += 2) 
    {
        arr_24 [i_7] = (-(arr_7 [i_7 - 3] [i_7] [(unsigned short)21] [i_7 + 1]));
        var_28 = ((/* implicit */_Bool) (~(((138538465099776LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
        arr_26 [(short)22] |= ((/* implicit */unsigned char) arr_14 [i_7] [i_7] [(_Bool)1]);
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            arr_30 [i_8] [i_8] [i_8] |= arr_1 [i_7];
            /* LoopNest 3 */
            for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (signed char i_11 = 2; i_11 < 22; i_11 += 4) 
                    {
                        {
                            arr_39 [i_7] [i_8] [i_9] [16LL] [i_7] = ((/* implicit */unsigned char) (-(21ULL)));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_7 - 2]))) : (4294967295U)));
                        }
                    } 
                } 
            } 
        }
    }
}
