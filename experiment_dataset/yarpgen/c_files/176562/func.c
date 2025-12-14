/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176562
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) 4294967295U))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2]))) != ((-(var_6))))))))));
        arr_2 [i_0 - 2] = (unsigned char)9;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1]))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 16; i_3 += 4) 
            {
                for (int i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_3 + 1] [i_4] [(unsigned char)6] [i_1] = ((/* implicit */signed char) arr_11 [i_1] [i_2] [i_3] [i_4] [i_4] [i_4]);
                        var_15 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) (unsigned char)9)))));
                        var_16 = (unsigned char)9;
                    }
                } 
            } 
        }
        for (int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((_Bool) (short)0))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_11)))))) > (((/* implicit */int) ((_Bool) arr_12 [i_5] [i_5 + 2] [i_1 - 1])))));
            arr_18 [i_1] [i_5] = ((((/* implicit */_Bool) 337849812U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)0)))) : (arr_11 [1ULL] [1ULL] [i_5] [i_5] [i_5] [i_5]));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(14291955991231099681ULL)))))) ? ((-(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_5)))) != (((/* implicit */int) var_10))))))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (1346991537273082050ULL)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)1755)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)155))))))));
            arr_21 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_1 - 1])) ? (((/* implicit */int) var_0)) : (arr_13 [i_1 - 1] [i_6 - 2] [i_6 + 4] [i_6 - 1])));
        }
        var_20 += ((/* implicit */long long int) var_2);
        var_21 = (short)28523;
    }
    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        arr_25 [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_7]))))) <= (4294967286U))))));
        var_22 = min((((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_7])) > (((/* implicit */int) var_5))))), ((-(((/* implicit */int) arr_1 [i_7] [i_7])))));
        var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8683414022046765414LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7898)))))) ? (min((-1212129097), (((/* implicit */int) ((_Bool) arr_23 [i_7]))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_7] [i_7]))));
    }
}
