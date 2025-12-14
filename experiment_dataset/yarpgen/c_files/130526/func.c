/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130526
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [(short)4] [(short)1] = ((/* implicit */short) arr_6 [i_0] [i_0]);
                    var_18 += ((((/* implicit */_Bool) ((((arr_5 [21U]) ^ (((/* implicit */unsigned long long int) arr_7 [(short)19] [i_1] [(short)19])))) ^ (((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 - 2]))))) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0), (-17)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) == (var_5)))) : (((((/* implicit */_Bool) var_14)) ? (arr_6 [i_0] [(short)19]) : (1243880468)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        var_19 = ((/* implicit */int) var_7);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_17)) ? (1310979187U) : (((/* implicit */unsigned int) 1449123537)))) : (max((((/* implicit */unsigned int) 717205821)), (134217728U)))))) && (((/* implicit */_Bool) (+(((unsigned int) arr_13 [i_4] [i_4])))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_16 [i_5]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) (short)-29740))))));
            var_23 = ((/* implicit */short) var_2);
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned long long int) ((var_2) + (((/* implicit */unsigned int) arr_26 [i_3] [i_6] [i_3 + 2] [15]))));
                            var_25 = ((((/* implicit */int) arr_23 [i_3 - 2] [i_3 - 1] [i_3 - 1])) & (((/* implicit */int) arr_23 [i_3 + 1] [i_3 + 1] [i_3 - 2])));
                            var_26 = ((/* implicit */unsigned int) ((short) var_3));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3 + 1] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) (short)12734)) : (((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 1] [i_3 - 2])))))));
                            arr_32 [10] [i_6] [i_8] = ((unsigned int) arr_16 [i_3 - 2]);
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */short) ((unsigned int) arr_22 [3ULL]));
        }
        for (int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned long long int) (((~(-803435351))) >> ((((-(((/* implicit */int) arr_23 [(short)12] [i_10] [i_10])))) + (19657)))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 1449123541)) ? (((/* implicit */unsigned long long int) 0)) : (9771899537412126605ULL)))))));
        }
    }
}
