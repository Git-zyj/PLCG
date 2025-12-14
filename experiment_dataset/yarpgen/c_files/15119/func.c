/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15119
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
    var_15 = ((/* implicit */unsigned short) 16777215U);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (var_11)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18U)) ? (((/* implicit */unsigned long long int) var_10)) : (var_14)))) ? (var_2) : (var_8)))));
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) arr_1 [i_1]);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [5LL] [i_1 + 1] [i_1 + 2] [i_1 - 1]))));
                var_19 ^= ((/* implicit */unsigned int) 6675933692341693193LL);
            }
            arr_9 [i_0] = ((/* implicit */unsigned int) var_8);
            arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 2793647171U)) : (8271234110129648390LL)))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((unsigned int) arr_5 [i_1] [i_0] [i_0] [i_0]))));
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */unsigned long long int) var_4);
            arr_14 [i_0] = var_13;
            var_20 = ((/* implicit */unsigned int) var_9);
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) var_0)) ? ((+(var_14))) : (13410739197605955176ULL)))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))));
            var_23 ^= var_3;
        }
        arr_19 [i_0] = ((/* implicit */unsigned int) (unsigned short)1911);
    }
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_5])) ? (((long long int) var_3)) : (var_13))) ^ (((((/* implicit */_Bool) arr_11 [i_5])) ? (var_11) : (((/* implicit */long long int) arr_21 [i_5] [i_5]))))));
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) var_9)), (((((/* implicit */int) arr_3 [i_5] [i_5] [i_5])) | (((/* implicit */int) var_6))))));
        var_26 = -2187868655601205259LL;
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned long long int) ((arr_18 [(unsigned short)8] [(unsigned short)8] [16U]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [8ULL])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
        {
            arr_28 [i_7] = ((/* implicit */long long int) (+(arr_7 [i_6] [i_7])));
            var_27 = ((/* implicit */long long int) arr_7 [i_7 + 1] [i_7 + 1]);
            var_28 = ((/* implicit */unsigned short) max((var_28), (arr_26 [i_7])));
        }
        var_29 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)46740)) << (((7547943891824056641LL) - (7547943891824056631LL)))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [24U] [i_6]))) / (arr_5 [(unsigned short)4] [2LL] [2LL] [i_6])));
    }
    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 16474457997003610104ULL))))) | (((/* implicit */int) ((unsigned short) arr_7 [i_8] [i_8]))))) | (((/* implicit */int) arr_2 [4U] [i_8] [4U])))))));
        var_32 = ((/* implicit */unsigned short) var_11);
        var_33 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 15728640U)), (18142337473476506990ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((var_4) - (6501717261728528962LL)))))) : (arr_20 [8ULL] [i_8])))));
        var_34 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_12 [i_8 - 1] [14LL] [i_8 - 1])) | (((/* implicit */int) var_9)))));
    }
}
