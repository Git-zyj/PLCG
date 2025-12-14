/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162457
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
    for (int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_16 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_11)), (arr_3 [i_0] [2U]))))))));
                    var_17 ^= min((0LL), (-3LL));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 1805076403816497268ULL)) ? (14038379020489488318ULL) : (((/* implicit */unsigned long long int) var_3)))) >> (((min((((/* implicit */unsigned long long int) 2665169577U)), (arr_12 [i_0]))) - (2665169541ULL))))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 0)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (1636315511138696360LL))))))));
                                var_19 ^= ((/* implicit */signed char) min(((((+(13929238628435587655ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))), ((!(((/* implicit */_Bool) 7997709713569546944LL))))));
                                arr_14 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))), (min((14946618062720202669ULL), (((((/* implicit */_Bool) -1636315511138696361LL)) ? (14038379020489488318ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                                var_20 ^= ((/* implicit */short) 12640440248495470397ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */long long int) min((2147483631), (((/* implicit */int) var_9))));
    var_22 = ((/* implicit */int) min((14038379020489488318ULL), (((/* implicit */unsigned long long int) 711978865))));
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            {
                var_23 = ((/* implicit */short) var_4);
                var_24 = ((/* implicit */unsigned char) min((min((976932370), (2147483631))), (163085373)));
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) << (((/* implicit */int) ((var_1) == (min((((/* implicit */int) (_Bool)0)), (-1774774828)))))))))));
            }
        } 
    } 
    var_26 = var_15;
}
