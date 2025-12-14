/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144606
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 18446744073709551615ULL))));
                    arr_7 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_10)), (72048797944905728ULL)))))) : (var_8));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((3250140696612690724ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) 18446744073709551615ULL)))))));
                var_22 = ((((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) var_18)) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [12ULL])) || (((/* implicit */_Bool) var_17))))))))) ? (max((6323216322799798051ULL), (((/* implicit */unsigned long long int) arr_1 [i_3])))) : (((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_8 [i_3 - 1])) : (((((/* implicit */_Bool) 5237258949352315673ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_13 [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9771084947607045334ULL)) ? (arr_3 [i_3]) : (4194303LL)))) ? (((((/* implicit */_Bool) arr_11 [(short)10] [i_3])) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)649)) && (((/* implicit */_Bool) 9004732912492662603ULL)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4194303LL)) || (((/* implicit */_Bool) var_16))))), (var_4)))));
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((arr_12 [i_7]), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_3 [i_3])), (arr_19 [i_3] [i_4] [i_5] [i_6 + 3] [i_4]))) < (var_5))))));
                                var_24 = ((/* implicit */_Bool) (~(-4194279LL)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = min((max((((/* implicit */long long int) ((short) (_Bool)1))), (((((/* implicit */_Bool) var_6)) ? (4194302LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) (!(var_2)))));
}
