/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103056
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
    var_15 = var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) var_6)) + (17159630004165212258ULL)))));
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)10823))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) ((17159630004165212258ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))));
                        arr_16 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_2)))));
                        arr_17 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) / (17159630004165212258ULL))) >> (((1287114069544339364ULL) - (1287114069544339352ULL)))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((/* implicit */long long int) 18446744073709551615ULL);
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_4 [i_1])))))));
        var_17 += ((/* implicit */int) (-((+(1ULL)))));
    }
    var_18 -= ((/* implicit */signed char) var_14);
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_5]))))), (((((/* implicit */_Bool) 17159630004165212258ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29831))) : (1870259915171413850LL)))));
        arr_23 [i_5] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1287114069544339357ULL)) ? (arr_3 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5])))))) ? (arr_9 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) var_11)), (var_6)))))));
    }
}
