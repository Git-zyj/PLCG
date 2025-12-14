/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118151
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_14 = (~(((long long int) (~(-1693302930373138085LL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_10))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) -775926491)), ((~(var_13)))))) || (((/* implicit */_Bool) (~(-1687174292))))));
                            }
                        } 
                    } 
                    var_17 = var_0;
                }
            } 
        } 
        var_18 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */long long int) min((arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]), (-169319206)))) : (((5737108166958334729LL) >> (((-573629248063887166LL) + (573629248063887174LL)))))))) ? (((((/* implicit */_Bool) 1010410824)) ? (-3867428448183986499LL) : (((/* implicit */long long int) arr_11 [i_0] [i_0 - 2] [1] [i_0 + 1])))) : (((/* implicit */long long int) arr_12 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            var_19 = var_7;
            var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 - 1] [i_0 + 2] [1LL])) ? (1073217536) : (2142351705))));
            var_21 = var_3;
        }
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_7 = 1; i_7 < 18; i_7 += 4) 
        {
            var_22 += ((/* implicit */long long int) (~(var_12)));
            arr_22 [i_6] = ((/* implicit */int) ((arr_18 [i_7 - 1] [i_7 - 1]) > (((/* implicit */long long int) ((int) arr_19 [i_6])))));
            arr_23 [i_7 + 3] [i_6] [i_6] = arr_19 [i_6];
            var_23 = ((/* implicit */long long int) ((int) arr_18 [i_7 + 2] [i_7 - 1]));
        }
        for (int i_8 = 3; i_8 < 21; i_8 += 2) 
        {
            var_24 &= max((arr_25 [i_8 + 1] [i_6]), (((/* implicit */long long int) (~(arr_24 [i_6] [i_8 + 1] [i_8])))));
            var_25 = ((/* implicit */long long int) max((var_25), (min((((((/* implicit */_Bool) -573629248063887183LL)) ? (min((arr_25 [i_6] [i_8]), (var_3))) : (((long long int) 229376)))), (((((/* implicit */long long int) arr_20 [i_8 - 1] [i_8])) + (arr_21 [i_8 - 1] [i_8 + 1] [i_8])))))));
            /* LoopNest 2 */
            for (long long int i_9 = 4; i_9 < 20; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_31 [i_6] [i_8] [i_6] [i_10] &= var_1;
                        var_26 = ((((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_9 - 4] [i_8 - 1])) || (((/* implicit */_Bool) arr_27 [i_8 + 1] [i_9 - 1] [i_9 - 1])))) ? (((/* implicit */long long int) -1996389192)) : (min((arr_19 [i_8 - 2]), (arr_19 [i_8 - 2]))));
                    }
                } 
            } 
            var_27 = (~(-221094451687793073LL));
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            arr_35 [i_6] [i_11] [i_6] = ((((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6])) ? ((~(var_5))) : (((((/* implicit */_Bool) arr_30 [i_6])) ? (573629248063887171LL) : (4939828930172351000LL))));
            var_28 = ((/* implicit */int) ((((/* implicit */long long int) arr_28 [i_6] [i_6] [i_11])) / (7538848734860397128LL)));
        }
        arr_36 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(arr_30 [i_6])))))) ? (((/* implicit */long long int) arr_28 [i_6] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (((/* implicit */long long int) var_11)) : (arr_25 [i_6] [i_6])))));
    }
    for (int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
    {
        arr_40 [i_12] [i_12] = (~((~(arr_19 [i_12]))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_37 [i_12] [i_12]) - (max((arr_29 [i_12] [i_12]), (573629248063887189LL)))))) ? (((/* implicit */long long int) var_11)) : ((~(var_4)))));
    }
    var_30 = ((/* implicit */int) 573629248063887188LL);
}
