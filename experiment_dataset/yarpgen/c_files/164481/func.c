/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164481
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_19 = var_5;
        var_20 -= (+(arr_2 [i_0 + 2]));
        arr_3 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 380770714193078535ULL)) && (((/* implicit */_Bool) var_6)))))) : (arr_2 [i_0 - 2]));
    }
    for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(485498911U))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 - 3]) : (arr_0 [i_1 + 2])))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3809468385U)) ? (485498909U) : (3809468374U))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 8; i_3 += 2) 
            {
                {
                    var_21 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3809468385U) / (arr_14 [8ULL] [i_2] [8ULL])))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_5 [0ULL]) : (var_3))) : (arr_5 [2ULL])))) ? (((max((2312593810898799805ULL), (((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_2] [i_3 + 1])))) % ((~(arr_11 [i_1] [i_2] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((7525161306315871712ULL) <= (arr_10 [i_1 - 1]))))));
                    var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3809468385U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_12 [1ULL] [0ULL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [i_3] [5U] [5U])) > (var_8))))) : ((+(arr_0 [6ULL]))))))));
                }
            } 
        } 
        var_23 *= ((/* implicit */unsigned long long int) (+((+(485498911U)))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((485498922U), (485498922U))), ((-(485498936U)))))) || (((/* implicit */_Bool) arr_9 [i_1]))));
    }
    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) arr_16 [i_4] [i_4]);
        arr_17 [i_4] = ((/* implicit */unsigned int) ((8975100601981382167ULL) % (((/* implicit */unsigned long long int) 2547224592U))));
    }
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        arr_21 [18ULL] &= ((((/* implicit */_Bool) 485498911U)) ? (12355786944879345432ULL) : (((/* implicit */unsigned long long int) 485498929U)));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) 485498911U)) <= (13872384825756634137ULL))), (((3809468385U) > (min((var_16), (2307754796U)))))));
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 485498929U)) ? (2939266624U) : (2839775889U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3809468374U)) ? (17971415063164225030ULL) : (15978743265341392269ULL))))))), (arr_29 [i_5] [i_5] [i_5] [i_7] [i_5]))))));
                                arr_32 [i_5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) 5176981084181108133ULL);
                                var_28 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 0ULL))) ? (min((((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_5 + 2] [i_5 + 2])), (var_2))) : (((/* implicit */unsigned long long int) 3809468374U)))))));
                            }
                        } 
                    } 
                    arr_33 [i_7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4574359247952917478ULL)))) ? (53648124945768051ULL) : (arr_25 [i_6] [i_6 + 3] [i_6 + 2] [i_6 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (((2939266635U) << (((10417218170978973097ULL) - (10417218170978973078ULL)))))));
                    var_29 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_26 [i_5 - 1] [i_5] [i_5 + 1])) ? (6704782497148133682ULL) : (111530437710019397ULL)))));
                    var_30 *= ((/* implicit */unsigned int) (+((+(arr_20 [i_7])))));
                    arr_34 [i_5] = ((/* implicit */unsigned int) (-(var_13)));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) ((unsigned int) ((var_4) % (arr_26 [i_5] [i_5] [i_5]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3809468367U)) ? (arr_22 [i_5 + 3] [i_5] [i_5 + 3]) : (3974126365U)))), (((((/* implicit */unsigned long long int) arr_22 [i_5] [i_5] [i_5])) % (13872384825756634138ULL))))) : (((/* implicit */unsigned long long int) (-((+(arr_22 [2U] [i_5] [2U]))))))))));
        arr_35 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10417218170978973097ULL))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 4) 
        {
            for (unsigned int i_11 = 1; i_11 < 21; i_11 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_12 = 1; i_12 < 24; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(3809468366U)))) > ((~(arr_23 [i_10] [i_11] [15ULL]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            var_33 ^= ((/* implicit */unsigned int) arr_43 [i_5] [i_10] [i_11] [i_11] [i_12] [i_13]);
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */_Bool) 876448076U)) ? (11825741632668039036ULL) : (1125899906842623ULL)))));
                            arr_47 [i_5] [i_11 + 4] [i_11 + 4] [i_11 + 1] [i_11 + 4] = ((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_5]);
                        }
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_10 + 2] [i_5] [i_10 + 2] [i_10])) ? ((+(18234214282111127616ULL))) : (arr_44 [i_12] [i_12 + 1] [i_12] [i_12] [i_5] [i_12])));
                    }
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        arr_51 [i_5] [i_11] [i_11] [i_11] = ((((((/* implicit */_Bool) arr_42 [i_11] [i_11 - 1] [i_11] [i_11 + 3])) && (((/* implicit */_Bool) arr_42 [i_11] [4ULL] [i_11] [i_11 + 3])))) ? ((+(((((/* implicit */_Bool) 3809468359U)) ? (((/* implicit */unsigned long long int) arr_18 [i_5])) : (arr_38 [i_5] [i_5] [i_11] [i_14]))))) : (((((/* implicit */_Bool) (+(0ULL)))) ? (((unsigned long long int) arr_48 [i_5] [i_10] [i_5])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3709603182U)) ? (2548226452U) : (2304360380U)))))));
                        arr_52 [i_5] [i_10] [i_5] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11640330083152697619ULL)) ? (((/* implicit */unsigned long long int) ((unsigned int) 5541855787699664423ULL))) : (15507314048223162390ULL))))));
                        arr_53 [i_5] [i_10] [i_5] = max((21ULL), (8689249203810246992ULL));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 4) 
                        {
                            {
                                arr_60 [i_5] [1ULL] [i_15] [10ULL] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_11 + 4] [i_11 + 4] [i_11 + 4] [i_11] [i_5] [i_11])) ? (arr_44 [i_11 + 4] [i_11] [i_11] [i_11] [i_5] [1U]) : (arr_44 [i_11 + 4] [i_11 + 4] [i_11 + 4] [i_11] [i_5] [i_11 + 4])))) ? ((~(1695065208U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_11 + 4] [i_11] [14ULL] [i_11] [i_5] [i_11])))))));
                                var_36 = ((/* implicit */unsigned long long int) (+((+(arr_59 [i_16 + 1] [i_16] [i_16] [i_16 + 2] [i_16 + 2] [i_16 - 1])))));
                                arr_61 [i_5] [24U] [i_11 + 3] [i_10] = ((/* implicit */unsigned int) arr_30 [i_15] [i_15] [i_15] [i_15] [i_15]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) <= (15507314048223162390ULL)));
}
