/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187367
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_1] [(short)8] [12ULL] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)221)), (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226)))))))) ? (((unsigned long long int) min((3927372596166757664ULL), (10798380011786931938ULL)))) : (((((/* implicit */_Bool) 1627516146218434489ULL)) ? (7202583026381442339ULL) : (((((/* implicit */_Bool) var_11)) ? (18020257877900658903ULL) : (14519371477542793951ULL)))))));
                        arr_11 [i_3] [i_1] [i_0] [i_3] = var_4;
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                    {
                        var_19 += ((max((((/* implicit */unsigned int) (unsigned char)73)), (759631132U))) - (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)84), ((unsigned char)129))))));
                        var_20 += ((/* implicit */short) max((3927372596166757664ULL), (10111428270851570917ULL)));
                        arr_14 [i_0] [i_1] [i_0] [11ULL] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (15157876228853222462ULL))), (14519371477542793951ULL));
                        var_21 += 10798380011786931916ULL;
                        arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) == (((/* implicit */int) (unsigned char)0)))))) * (var_12)));
                    }
                    arr_16 [i_0] [2ULL] = 576460752303423484ULL;
                }
            } 
        } 
    } 
    var_22 = max((426486195808892712ULL), (426486195808892712ULL));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18020257877900658914ULL)) ? (14519371477542793951ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 0U))) ? (((9474649607579801721ULL) + (14821069582880585898ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) 6870015763005916617ULL)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (short)-31939)))))));
                                arr_28 [16ULL] [i_7] = ((/* implicit */unsigned int) ((16802085098077604458ULL) + (var_17)));
                                arr_29 [i_7] [(unsigned char)13] [i_7] = ((17650157425043353611ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))));
                            }
                        } 
                    } 
                    arr_30 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)136)) && (((/* implicit */_Bool) (unsigned char)182))))) & (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)0))))));
                    arr_31 [7ULL] [i_7] [i_6 - 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-31939)) && (((/* implicit */_Bool) var_17)))))) != (5000518378666648470ULL)));
                    arr_32 [i_5] [i_7] [i_5] = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
        arr_33 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) | (16802085098077604471ULL)));
    }
}
