/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120076
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((int) arr_0 [13LL]));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_21 = min((((min((arr_2 [i_1] [19LL] [i_1]), (8453380405408984636LL))) / (arr_10 [i_3] [i_0] [i_0]))), (((/* implicit */long long int) ((arr_6 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -917658290))))))))));
                        var_22 = ((/* implicit */long long int) max((var_22), ((~(((((min((((/* implicit */long long int) -1315017934)), (arr_9 [i_3]))) + (9223372036854775807LL))) >> (((arr_6 [i_0]) - (3535916258339718418LL)))))))));
                        var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -9093942004730812785LL)) ? (-2147483643) : (-833073620)))) == (63274650051392508LL)));
                        var_24 -= ((((/* implicit */_Bool) (-(min((1001723519), (var_9)))))) ? (((/* implicit */long long int) -869496253)) : (((long long int) arr_4 [i_0])));
                        var_25 = min((((/* implicit */long long int) ((-8453380405408984655LL) > (((/* implicit */long long int) 2147483632))))), (min((((long long int) var_8)), (arr_2 [i_0] [i_2] [i_0]))));
                    }
                } 
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_26 = ((long long int) ((arr_0 [i_4]) - (-2147483646)));
        var_27 = ((/* implicit */int) ((((((/* implicit */long long int) 1978322543)) ^ (3665841118288921581LL))) | (((((/* implicit */long long int) arr_14 [i_4])) ^ (-2908802568304066505LL)))));
        var_28 ^= -4249405272220800847LL;
        var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) 42189030)) ? (arr_8 [i_4] [i_4]) : (arr_9 [i_4]))) >= (4367606193772121654LL)));
    }
    var_30 = ((/* implicit */long long int) ((((((int) (+(-1)))) + (2147483647))) << (((((((long long int) ((((/* implicit */long long int) 622889085)) | (var_5)))) + (320742889130111390LL))) - (29LL)))));
    /* LoopSeq 1 */
    for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        var_31 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (arr_15 [i_5 + 1]) : (arr_17 [i_5 + 1] [i_5]))) < (arr_15 [i_5 - 1])));
        var_32 &= ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1073741824)))))) < (-8453380405408984655LL)));
    }
}
