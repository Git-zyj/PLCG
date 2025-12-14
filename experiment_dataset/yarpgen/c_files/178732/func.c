/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178732
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
    var_18 = ((/* implicit */short) min((var_5), (((_Bool) ((int) var_2)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 7; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 2; i_4 < 7; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_4 + 3] [i_3] [i_3 + 2] [i_1] [i_4]);
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned long long int) (short)-16709)))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (arr_11 [i_0] [(_Bool)1] [i_2] [i_3 + 3] [(_Bool)1])));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(var_17))))));
                        }
                        arr_16 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) var_15);
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13110)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_15 [i_3 + 4] [i_3] [i_3 + 2] [i_3 + 3])))) ? (min((((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [10LL] [i_3 + 3] [i_3 + 3] [i_3])), (arr_15 [i_3 + 3] [i_3 + 4] [i_3 - 1] [i_3 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [(short)0] [i_3 + 1] [i_3 + 1] [i_3])) ? (arr_11 [i_3 + 3] [4ULL] [i_3 - 1] [i_3 + 2] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-13120))))))));
                    }
                } 
            } 
        } 
        arr_17 [(_Bool)1] = ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (15829802057255197825ULL))));
    }
    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (15829802057255197817ULL)));
}
