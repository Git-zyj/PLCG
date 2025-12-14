/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140897
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((long long int) (+(((/* implicit */int) max(((_Bool)0), ((_Bool)0)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                                var_14 = ((/* implicit */long long int) var_8);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_3))));
                    arr_14 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -544192137888117322LL)) ? (((/* implicit */long long int) 486569158U)) : (4653641583130473297LL)));
                    arr_15 [i_1] [i_1] [i_1] [20LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0] [16LL] [i_0] [i_0] [i_0]))) ? (((arr_10 [i_0] [i_2] [(unsigned short)3] [i_1]) ^ (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_3)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_2 [i_9]))));
                                arr_31 [i_5] [2LL] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_8 - 1] [12LL] [i_7] [i_6 - 1] [i_9 - 1]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) ((unsigned long long int) var_1));
                    var_18 = ((/* implicit */unsigned long long int) var_7);
                    arr_32 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) arr_6 [(unsigned short)8] [i_6] [i_7] [i_6])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [1LL] [i_7] [i_6 + 1] [i_6] [i_5]))))), (((/* implicit */unsigned int) var_9))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) min((1937972356), (((/* implicit */int) var_6))))) / (var_11))) | (((/* implicit */long long int) (+((+(0))))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            for (long long int i_12 = 2; i_12 < 11; i_12 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) max(((-(3823357454184723094ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                arr_46 [i_10] [5LL] [i_12] [7ULL] [i_14] [i_14] = ((((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 1148417904979476480LL)))))) / (min((((((/* implicit */_Bool) var_3)) ? (14623386619524828522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [21LL]))))))));
                                arr_47 [i_10] [(unsigned short)5] [i_12] [i_13] [(unsigned short)10] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_0)) / (((/* implicit */int) arr_35 [i_12 - 2]))))));
                            }
                        } 
                    } 
                    arr_48 [i_10] [i_11] |= ((/* implicit */unsigned short) 8610911248918846083LL);
                }
            } 
        } 
        var_21 += ((/* implicit */_Bool) var_11);
        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_10]))) ^ (15U)))))));
    }
}
