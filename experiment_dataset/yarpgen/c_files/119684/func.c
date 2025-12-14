/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119684
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) 714559842)));
            var_16 = ((/* implicit */long long int) var_8);
        }
        for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) arr_3 [2]);
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) ((arr_9 [i_2]) > (((/* implicit */long long int) ((((/* implicit */_Bool) 4077506225U)) ? (217461062U) : (4077506225U))))))), (((unsigned long long int) ((signed char) arr_2 [i_0])))))));
            arr_10 [11ULL] [11ULL] = ((/* implicit */_Bool) 4077506234U);
            arr_11 [i_0] |= var_7;
        }
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_14 [i_0] [9LL] [i_3] = ((/* implicit */unsigned long long int) min(((+(arr_9 [i_0]))), (var_9)));
            var_19 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)9])))))) | (max((arr_4 [8U] [i_3] [i_3]), (arr_4 [i_0] [i_0] [i_0])))));
            arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((4077506234U), (((((/* implicit */_Bool) (unsigned short)53430)) ? (4077506222U) : (((/* implicit */unsigned int) arr_7 [i_3]))))))) ? (((/* implicit */int) arr_1 [i_3])) : (((((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned short)12106)) : (((/* implicit */int) (unsigned short)53430)))) ^ (((/* implicit */int) (unsigned short)53429))))));
            var_20 = ((/* implicit */long long int) max((var_20), (var_3)));
            var_21 = ((/* implicit */unsigned int) arr_6 [(unsigned short)1] [(unsigned char)13]);
        }
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((arr_0 [i_4]), (((/* implicit */unsigned long long int) (unsigned short)53429))));
            arr_20 [13] [13] = ((/* implicit */_Bool) ((arr_7 [i_0]) % (((/* implicit */int) (unsigned short)53432))));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 3) 
    {
        arr_25 [i_5] = ((/* implicit */int) arr_6 [i_5] [i_5]);
        var_23 *= ((/* implicit */unsigned char) var_3);
        arr_26 [(_Bool)1] |= ((/* implicit */signed char) (_Bool)0);
        var_24 = ((/* implicit */unsigned long long int) arr_12 [i_5] [(signed char)6]);
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_25 *= ((/* implicit */unsigned short) var_11);
        var_26 = ((/* implicit */int) arr_5 [i_6] [i_6] [i_6]);
    }
    var_27 &= ((/* implicit */int) ((long long int) var_0));
}
