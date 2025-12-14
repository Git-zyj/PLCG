/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141394
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((var_19) / (var_19)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) > (var_16)))) == (((/* implicit */int) var_12)))))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_3))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) -429334624)) * (4294967295U))) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_2 - 1])))))));
                        var_22 ^= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((arr_7 [i_1] [i_1] [6LL] [i_3 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1])))))), (arr_7 [i_2 - 2] [i_2] [i_3 - 1] [i_3]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1 - 2])))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (var_10) : (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            var_24 |= ((/* implicit */int) arr_5 [i_1 - 1]);
                            var_25 ^= ((/* implicit */unsigned int) var_1);
                        }
                        arr_19 [i_0] [i_0] [17U] [(short)11] = ((/* implicit */signed char) arr_5 [i_0]);
                        arr_20 [i_0] [i_1] [22] = ((((/* implicit */int) arr_11 [i_1 - 3] [i_2 + 2] [i_2])) - (((/* implicit */int) arr_8 [i_1 - 1] [i_2 + 2])));
                    }
                    for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) 
                    {
                        var_26 ^= ((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_6 - 1] [i_6 + 1] [i_1]);
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)3] [i_1 - 3]))) > (((((/* implicit */_Bool) var_19)) ? (arr_7 [i_0] [(unsigned short)18] [i_2] [i_6]) : (((/* implicit */long long int) arr_16 [i_6] [i_1] [i_2] [i_1])))))) ? ((~(((/* implicit */int) arr_11 [i_2 + 4] [i_1] [i_2 - 2])))) : (((/* implicit */int) arr_6 [i_0])))))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_25 [18ULL] [i_6] [i_7] [i_1] [i_0] = max((((unsigned char) var_18)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_14))))))));
                            var_28 |= arr_15 [(signed char)19] [17U] [i_2] [i_6] [17U] [i_7];
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_29 [21U] [i_1] [i_2] [i_6] [(signed char)24] [i_8] = ((/* implicit */unsigned int) (unsigned char)247);
                            var_29 = ((/* implicit */long long int) 1540624804);
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((-(429334627))) + (2147483647))) << (((((((((/* implicit */int) (signed char)-4)) - (((/* implicit */int) arr_24 [i_2] [i_6])))) + (23))) - (18))))))));
                        }
                        arr_30 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967279U)) ? (((((/* implicit */int) arr_12 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6 - 1])) << (((((((/* implicit */_Bool) arr_26 [(signed char)9] [(signed char)9] [i_1] [i_1] [i_2 - 1] [i_2] [i_6])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1 + 1] [i_2 + 2] [i_6 - 2] [(_Bool)1] [i_6]))))) + (2728793656276256398LL))))) : (((/* implicit */int) var_12))));
                    }
                    var_31 = ((/* implicit */unsigned short) var_9);
                    /* LoopNest 2 */
                    for (signed char i_9 = 4; i_9 < 23; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_5 [i_2 + 3]) / (((/* implicit */long long int) arr_9 [i_2] [i_0]))))))) & (arr_32 [i_1] [i_2 + 2] [i_9] [i_10])));
                                arr_38 [i_0] [i_0] [(unsigned short)9] [16U] [i_10 - 1] [i_9] [i_1 - 1] |= ((/* implicit */signed char) max((max((((long long int) var_16)), (((/* implicit */long long int) ((short) arr_32 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_13 [i_2 + 3] [i_2] [(short)24] [i_2] [i_2 + 2] [i_2 - 2])) ? (arr_13 [i_2 + 4] [i_2] [8] [i_2] [i_2 + 3] [8]) : (arr_13 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 4] [i_2])))));
                                arr_39 [14U] [(_Bool)1] [(_Bool)1] [i_9] [i_10] = ((/* implicit */signed char) ((long long int) ((long long int) arr_2 [i_1 - 2])));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_28 [i_0]) : (var_10)))) || (((/* implicit */_Bool) var_0))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
