/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16561
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8451313356918109620LL)) ? (max((min((140737488355327LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_13))));
                    var_22 = 562949953421311ULL;
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_19)), (-1646881465628112847LL))) ^ (max((((/* implicit */long long int) var_15)), (-8451313356918109624LL)))));
                    arr_10 [i_0] = (unsigned char)54;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                arr_19 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)41))));
                arr_20 [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1] [i_4])))))) > ((+(((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                arr_21 [i_3] = ((/* implicit */unsigned char) (short)3463);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9151314442816847872ULL)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_3 + 1]))))) ? (((/* implicit */long long int) ((arr_7 [i_3] [i_4] [i_3 + 1]) ? (((/* implicit */int) arr_7 [i_4] [i_4] [i_3 + 1])) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_3 + 1]))))) : (((((/* implicit */_Bool) var_18)) ? (140737488355337LL) : (var_16)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 18; i_9 += 4) 
                        {
                            {
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (((var_8) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) : (((var_4) + (8600936304290209759ULL))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)3490)) - (((/* implicit */int) (unsigned char)235)))), (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)28)))))))));
                                var_24 = ((/* implicit */_Bool) (~((-(837104750025016756LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            arr_41 [i_5] [i_6] [i_10] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                            {
                                var_25 = ((/* implicit */long long int) arr_33 [i_5] [i_6] [i_12] [i_11] [i_12]);
                                arr_44 [i_5] [i_10] [i_12] = ((/* implicit */unsigned char) var_0);
                                var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)175))));
                                var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_11]))));
                            }
                            for (short i_13 = 4; i_13 < 17; i_13 += 4) 
                            {
                                arr_47 [i_5] [i_6] [i_10] [i_11] [i_13] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned char)51)), (5753036267661064417ULL))) | (((/* implicit */unsigned long long int) -5584608653576099215LL))));
                                var_28 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (unsigned char)111))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4)))))) : (arr_30 [i_5]))), (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)26180)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
