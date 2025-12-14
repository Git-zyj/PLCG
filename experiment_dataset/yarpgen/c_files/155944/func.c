/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155944
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned char) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15164))) * (3772116146978226586ULL))), (((/* implicit */unsigned long long int) var_10))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
        var_16 ^= ((/* implicit */long long int) ((unsigned long long int) ((-870246613991625492LL) / (arr_2 [i_1 + 1] [i_1 + 1]))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_16 [i_2] [i_3 - 1] [i_3 - 1] [i_2] = ((/* implicit */int) var_12);
                    var_17 = ((/* implicit */unsigned short) 3772116146978226597ULL);
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) (-(arr_2 [i_2] [i_2])));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_21 [i_5] [(_Bool)1] = ((/* implicit */int) var_9);
        arr_22 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_7)));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_1 [(unsigned short)0]))))));
    }
    var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
}
