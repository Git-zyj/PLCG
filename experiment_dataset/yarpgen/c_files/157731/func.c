/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157731
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (13614075196535543741ULL))), ((!(((/* implicit */_Bool) 16383ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65535))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1290200588U)) : (8851748663599967773ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_6)))));
    var_20 = max((var_14), (((_Bool) min((4294965248U), (2800303254U)))));
    var_21 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) var_16))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] = arr_2 [i_1 + 1] [i_1 + 1];
                        var_22 *= ((/* implicit */_Bool) arr_7 [i_3]);
                    }
                } 
            } 
            arr_11 [10ULL] [i_1] [10ULL] = ((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0]);
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_20 [i_1] [i_6] = ((/* implicit */_Bool) ((((2800303246U) != (4294965248U))) ? (((/* implicit */unsigned long long int) ((arr_16 [i_1] [5U] [i_1] [i_1 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [(unsigned short)6] [i_1 - 1] [i_1 - 1] [i_1]))) : (3493573705U)))) : (max((((/* implicit */unsigned long long int) arr_16 [3U] [i_1] [14ULL] [i_1 - 1])), (9956277401177303642ULL)))));
                            arr_21 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_1] [i_1] [i_4] [i_6]))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (8851748663599967794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [10U] [(unsigned short)8] [(unsigned short)8] [i_6])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_13 [i_1] [i_1 + 1])) : (((/* implicit */int) var_14))))) : (((var_6) << (((/* implicit */int) ((_Bool) 8490466672532247975ULL)))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 9956277401177303617ULL)) ? (9956277401177303617ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))))));
                            arr_22 [i_0] [i_1 - 1] [i_4] [i_4] [i_5] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) var_14)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (9594995410109583837ULL)))))) ? (((/* implicit */unsigned long long int) (-(arr_5 [i_1 + 1] [9U])))) : ((-(8490466672532247998ULL)))));
                            var_24 = max((((/* implicit */unsigned long long int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [(_Bool)1])), (9594995410109583856ULL));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~((~(arr_4 [(unsigned char)9])))))) | (max((9187343239835811840ULL), (arr_25 [(_Bool)1] [i_0] [i_7 - 1]))))))));
            var_26 *= ((/* implicit */unsigned char) max((arr_6 [i_0]), (((/* implicit */unsigned long long int) 2800303277U))));
        }
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        var_27 ^= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53991)))))) >= (max((arr_15 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_26 [i_10] [i_10]))))));
                        arr_35 [i_9] [0ULL] [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 1449634501U)) : ((~(arr_6 [16U]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((_Bool) arr_19 [i_10] [i_10] [(unsigned short)5] [i_10] [(unsigned short)11] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_23 [i_0] [(_Bool)1] [i_0])) : ((~(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_10]))) : (((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61972))) : (2800303229U)))))));
                    }
                } 
            } 
        } 
    }
}
