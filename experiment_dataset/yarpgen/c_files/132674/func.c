/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132674
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
    var_11 = ((/* implicit */int) var_10);
    var_12 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) min(((~(-1766467516))), (((((/* implicit */_Bool) 13601571157461831718ULL)) ? (((/* implicit */int) (unsigned short)28570)) : (((/* implicit */int) (unsigned short)63235))))));
        var_14 = var_0;
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((min((min((var_5), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((-4493070896277836045LL), (((/* implicit */long long int) var_1))))))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) var_0);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = 3744946702U;
        arr_7 [i_1] [4] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
        arr_8 [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_5)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 4171970080U)) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15)))));
        arr_9 [i_1] = ((/* implicit */signed char) (+(var_9)));
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) -7318199116699135958LL);
                    arr_17 [i_2] [i_4] [2ULL] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (min((var_9), (((/* implicit */long long int) -1968568777))))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) * (min((((/* implicit */unsigned long long int) var_8)), (11663428131319262126ULL)))))));
                    var_16 = max((((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned short)15468)))), (((/* implicit */int) (!(var_3)))));
                }
            } 
        } 
    } 
}
