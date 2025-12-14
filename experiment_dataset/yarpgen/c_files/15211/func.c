/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15211
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */signed char) (((~((~(((/* implicit */int) var_0)))))) | (((((/* implicit */_Bool) max((arr_1 [i_0] [i_0 - 1]), (var_1)))) ? (((/* implicit */int) min(((signed char)-98), (var_6)))) : (((/* implicit */int) var_0))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) >= (arr_7 [i_0] [i_0])));
                arr_10 [i_0] = var_0;
            }
            for (signed char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_20 [i_5] = ((/* implicit */signed char) (unsigned char)43);
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_1 [(unsigned short)3] [i_3])) ^ (((/* implicit */int) (signed char)-49)))) + (2147483647))) << (((((min((var_10), (((/* implicit */long long int) var_5)))) + (7462333964328584842LL))) - (13LL)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)216)) << (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) + (23582))))), (((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned char)63)) - (63)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_4] [(short)13])) ? (((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_14 [i_4] [6U]))))) | (((var_8) >> (((arr_18 [i_3] [i_1] [i_5] [(signed char)13] [i_5] [(short)9] [(unsigned short)13]) - (6719440246238182125ULL)))))))));
                    }
                    var_14 = ((/* implicit */signed char) arr_11 [i_0 + 3] [i_1] [i_0 + 3]);
                    var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((((/* implicit */int) var_0)) - (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_16 [i_3] [i_3]))))))));
                }
                arr_21 [(unsigned char)1] [i_1] [i_0 - 3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))));
                arr_22 [(unsigned char)6] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((281470681743360ULL) <= (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_0 - 3] [i_1] [i_1] [i_1]))) - (var_9))), (var_9))))));
            }
            for (signed char i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
            {
                arr_26 [i_0 + 2] [i_0 - 1] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) ((471552105U) ^ ((((~(var_4))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_0] [i_1] [i_1])))))))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_29 [(signed char)1] [i_1] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((arr_5 [i_1] [i_1]) << (((((((/* implicit */_Bool) arr_4 [(signed char)16])) ? (((/* implicit */unsigned long long int) max((3857199548U), (((/* implicit */unsigned int) arr_16 [i_0] [i_7]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) - (3857199542ULL)))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_7 [i_1] [i_1]))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */int) (unsigned char)213)), ((+(((/* implicit */int) (unsigned char)203)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)107)) << (((((/* implicit */int) (short)21534)) - (21514)))))), ((~(arr_6 [i_8])))))));
                        var_19 = ((/* implicit */unsigned int) arr_16 [i_0] [i_6]);
                    }
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) arr_18 [i_9] [i_6] [i_6] [i_1] [i_1] [i_0] [i_0]);
                    arr_34 [i_6] [i_0 - 2] = ((/* implicit */unsigned int) 13091443152346685796ULL);
                }
                for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    arr_37 [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_10] [i_6]);
                    arr_38 [i_0 + 2] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_6 [i_6]);
                }
            }
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_1] [i_0]), (((/* implicit */unsigned short) min((arr_23 [(signed char)2] [i_1] [i_1]), (var_0)))))))) : (arr_18 [i_0] [(signed char)10] [i_0] [i_0] [i_0] [i_1] [i_1])));
            arr_39 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))) | (min((((/* implicit */int) var_1)), ((~(((/* implicit */int) arr_2 [i_0]))))))));
        }
        arr_40 [16U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(471552105U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [8]))) ^ (var_8)))))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_0))))) >= (var_8)));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) % (min((((var_8) << (((((/* implicit */int) (signed char)95)) - (46))))), (((/* implicit */unsigned long long int) var_6))))));
}
