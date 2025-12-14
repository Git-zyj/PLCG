/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120214
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((unsigned int) 159373842357144108ULL)))) <= (((unsigned int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_7))))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_16), (18287370231352407497ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (max((var_5), (((/* implicit */unsigned long long int) var_6)))) : (((var_16) - (18287370231352407492ULL))))))));
    var_22 *= ((/* implicit */unsigned short) 159373842357144116ULL);
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) 159373842357144105ULL))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_3 - 1] [22ULL] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            arr_15 [i_0 - 1] [i_3] [i_3] [i_2 - 2] [i_3] [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 + 3] [i_4] [i_1 - 1])) >> (((var_0) - (15276818722418547823ULL)))));
                        }
                        for (short i_5 = 2; i_5 < 21; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 + 3] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_3] [i_1 - 1] [i_2])) : (((/* implicit */int) (signed char)-104))))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), ((((~(159373842357144104ULL))) << (((18287370231352407521ULL) - (18287370231352407472ULL)))))));
                            var_26 *= ((/* implicit */signed char) ((((unsigned long long int) var_4)) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))));
                            var_27 = ((/* implicit */short) ((2239061733U) != (((unsigned int) 15735587689105280574ULL))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                        {
                            var_28 += ((/* implicit */unsigned int) ((short) ((unsigned int) 2711156384604271032ULL)));
                            var_29 = ((/* implicit */short) 2239061734U);
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_30), (3546217005U)));
                            var_31 = ((/* implicit */short) arr_0 [i_0 - 1] [i_0 + 3]);
                        }
                        for (short i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            arr_27 [i_8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) - (2711156384604271015ULL)));
                            var_32 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) + (arr_21 [i_0 + 3] [i_1] [i_2 - 2] [i_3] [i_8] [i_1 - 1] [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_3] [i_0] [i_0 - 1] [(unsigned short)12] [i_0 + 2]))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 19; i_9 += 4) 
                        {
                            var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)24941))));
                            var_34 ^= ((/* implicit */short) ((((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9]))))) + (var_4)));
                            arr_30 [i_0] [14U] [i_2] [i_0] [i_2] [i_9 - 1] = ((/* implicit */short) 6843663594873516826ULL);
                        }
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((arr_25 [(signed char)12] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_18)))))))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 21; i_10 += 2) 
    {
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2309)) != (((/* implicit */int) var_12)))))) % (159373842357144090ULL)));
        var_37 |= ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned short)5817)) << (((((/* implicit */int) var_6)) - (39921))))));
    }
}
