/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148511
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
    var_14 = ((/* implicit */unsigned int) ((8U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)121)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_0)))))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) var_0)))) - (((/* implicit */int) var_11))))))))));
        var_16 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)12288))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [i_2])) ? (var_8) : (((/* implicit */int) arr_6 [i_2])))))))));
            var_18 = ((/* implicit */int) max((var_18), (var_5)));
            var_19 = ((/* implicit */_Bool) arr_0 [i_1 - 1]);
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_3 [i_1 - 3] [i_2]))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 4])) ? (12551741455203090013ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1])))))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 2525842711U)) || (((/* implicit */_Bool) arr_1 [i_1]))))) | (((/* implicit */int) (signed char)118))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned int) ((signed char) arr_7 [i_1 - 3] [i_1 + 1]));
            arr_14 [i_1] [i_4] = ((/* implicit */unsigned long long int) var_9);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)62809)) : (arr_9 [i_1 - 4] [i_1 + 2])));
        }
        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-14))));
        var_26 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 12551741455203090013ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1]))) : (var_10)))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((878598350582416994LL) <= (-3564332538173865484LL))))));
    }
    var_28 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_7)) * (var_4)));
    var_29 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_5 - 2] [i_5 + 2])) * (((/* implicit */int) arr_17 [i_5 - 1] [(signed char)17]))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_31 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) var_1)))));
            var_32 ^= ((signed char) (unsigned char)144);
        }
        arr_21 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_7)) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 1] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)159)) ? (2332172645U) : (4294967295U)))));
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (12551741455203090037ULL)));
    }
}
