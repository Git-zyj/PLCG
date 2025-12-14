/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105349
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))))) : (var_7)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                arr_8 [i_0] [3U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)0] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_1] [(short)2]))))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))) | (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_1 - 1])) ^ (((/* implicit */int) arr_4 [i_0]))))))));
                arr_9 [i_1] = ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))) / (var_9))))));
            }
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                arr_12 [i_1] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0] [12LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)23] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) arr_3 [i_3] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [3] [i_3])) : (((/* implicit */int) (unsigned short)6044)))))), (((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned char)14])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_3])))))));
                var_19 += ((/* implicit */unsigned int) arr_5 [i_1 - 1] [(short)1] [i_1] [3U]);
            }
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [2U]))) / (arr_7 [15])))))) ? (((((/* implicit */_Bool) ((int) arr_3 [i_1] [i_1 + 1] [(short)14]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1]))) : ((-(0LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_0])))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 1])) <= (((/* implicit */int) arr_0 [i_1 + 2]))))) : (((/* implicit */int) max((arr_0 [i_1 + 2]), (var_10))))));
        }
        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_0))) * (((/* implicit */int) var_1))));
            var_21 *= ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned int) ((max((((/* implicit */int) var_14)), (arr_14 [i_0]))) >> (((((((/* implicit */_Bool) arr_16 [i_4] [i_0] [i_0])) ? (-2100399766) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_4])))) + (2100399768))))))));
            var_22 += min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (2100399765)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_16 [i_0] [(signed char)11] [i_4 - 2])))) : (((/* implicit */int) arr_11 [i_4] [i_4 - 2] [i_4] [i_4])))), (-1));
        }
        var_23 ^= ((/* implicit */int) var_6);
        var_24 = ((/* implicit */short) min((max((((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned short) var_13))));
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 656244996))))) ? (arr_20 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) > (arr_19 [i_5]))))));
        var_26 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [3U] [i_5])) ? (arr_19 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (((unsigned long long int) arr_19 [i_5])))), (((/* implicit */unsigned long long int) arr_20 [i_5]))));
        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned int) -1309556198)) : (0U)))) ? (((/* implicit */int) (unsigned short)3)) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_13)) : (var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (arr_18 [i_5] [i_5]) : (((/* implicit */int) ((_Bool) arr_20 [i_5])))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 160954261U)) ? (arr_20 [i_5]) : (var_17)))) : (var_7)))));
    }
    for (unsigned char i_6 = 4; i_6 < 18; i_6 += 4) 
    {
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_18 [i_6] [i_6]))));
        arr_23 [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_5)), (var_7))) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_6 + 1] [i_6])))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) arr_22 [i_6 - 4]))), (max((arr_7 [i_6]), (((/* implicit */long long int) arr_6 [i_6] [i_6] [i_6 + 1])))))))));
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (+(((((/* implicit */_Bool) ((unsigned char) arr_11 [i_6] [i_6] [i_6] [(_Bool)1]))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6 - 2])) ? (((/* implicit */int) arr_15 [i_6] [i_6])) : (2100399765)))))))))));
        var_30 *= ((/* implicit */unsigned int) var_9);
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_6])), (arr_7 [i_6])))) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_5 [i_6] [i_6] [i_6 + 1] [i_6]))))) : (((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6 - 4] [i_6])) ? (arr_18 [i_6] [i_6]) : (((/* implicit */int) arr_6 [i_6 - 4] [i_6] [i_6 - 4]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (var_16) : (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) : ((~(((/* implicit */int) var_5))))));
    }
}
