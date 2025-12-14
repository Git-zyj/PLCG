/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162194
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
    var_20 = min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (192445300744211980ULL)))) ? (var_0) : (((unsigned long long int) (unsigned short)29090)))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)46708)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 28U)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_22 |= ((/* implicit */short) ((192445300744211980ULL) % (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_11 [i_1] [i_2 + 4] [i_3] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36463))) * (533912468U));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(arr_7 [i_1] [16ULL] [i_3 - 1]))))));
                        arr_16 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 14882069938861488537ULL)) && (((/* implicit */_Bool) 3238845541U)))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        arr_19 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) (~(1065508195U)));
                        arr_20 [i_1] [i_2] [6ULL] [i_5] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-28173))));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) (unsigned short)29090);
                        var_25 = ((/* implicit */short) ((int) arr_1 [i_1] [i_2]));
                        var_26 = ((/* implicit */long long int) ((arr_8 [i_2 + 2] [i_1]) << (((((/* implicit */int) ((short) (unsigned char)131))) - (125)))));
                    }
                    arr_24 [i_1] [i_2] [i_1] [4U] &= ((((/* implicit */_Bool) (unsigned short)56558)) ? (8246168712721797459ULL) : (((/* implicit */unsigned long long int) arr_2 [(short)2])));
                }
            } 
        } 
    }
}
