/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138833
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
    var_20 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_7), (var_5)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((short) 8394011525738360139ULL)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_22 += ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4398046511103ULL))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_14))));
            var_23 |= max((((((/* implicit */_Bool) 8394011525738360139ULL)) ? (arr_0 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_2 [i_0] [i_0] [i_1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            arr_7 [i_2] [i_2] [i_2] |= arr_5 [i_2];
            arr_8 [i_0] |= max((max((((/* implicit */long long int) (unsigned char)162)), (arr_6 [i_0]))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (1LL))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) (short)0)))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_6 [i_3])))) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_3])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(6U)))) ? (((((/* implicit */long long int) 10U)) ^ (14LL))) : ((~(arr_0 [i_3] [i_3])))));
            var_26 = ((/* implicit */long long int) var_3);
        }
        var_27 = arr_6 [i_3];
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16575589715145033977ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-3580022821120970675LL)))) ? (-3009062712443451386LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16575589715145033977ULL))))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) 7LL))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 4; i_6 < 11; i_6 += 4) 
        {
            arr_20 [i_5] [i_6] = min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_16 [i_5] [i_5]))))), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) | (5433433347178913170LL)))));
            arr_21 [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_7)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) var_7)) - (197)))))))))));
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 548398157)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_5] [i_5]))))) % (max((arr_3 [i_5]), (((/* implicit */unsigned long long int) var_4))))));
    }
}
