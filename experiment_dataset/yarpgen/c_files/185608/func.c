/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185608
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
    var_18 = ((long long int) ((unsigned int) ((_Bool) var_8)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((short) min((arr_1 [i_0]), (arr_0 [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_1]) : (arr_3 [i_0]));
            arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) & (arr_1 [i_0])));
            var_21 -= (-(var_14));
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2390425460831735581LL)) ? (2390425460831735581LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12006))))))));
            var_23 -= ((/* implicit */unsigned int) ((_Bool) arr_0 [i_0]));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_24 *= (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (274877906944LL)))));
            var_25 = ((/* implicit */long long int) min((((/* implicit */int) (((~(((/* implicit */int) arr_8 [i_0])))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))))), (((var_6) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_9 [i_0] [i_3]))))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) arr_7 [i_0] [i_3] [i_0])) : (arr_0 [i_3])))) ? ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_3])))))) : (((/* implicit */int) ((arr_10 [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (3924820749U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [i_0])))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_17 [i_0] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */_Bool) (~(var_2)));
                        arr_18 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */long long int) var_7);
                        var_28 -= (_Bool)0;
                    }
                } 
            } 
        }
        arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_10 [i_0]))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (2147483648U))))) * ((~(arr_3 [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((arr_8 [i_0]), (((/* implicit */short) arr_12 [i_0] [i_0] [i_0]))))))))));
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        arr_22 [i_7] [18U] |= ((long long int) ((((/* implicit */int) arr_21 [i_7])) < (((/* implicit */int) arr_21 [i_7]))));
        var_29 -= ((/* implicit */short) ((_Bool) min((arr_20 [i_7]), (min((var_4), (((/* implicit */unsigned int) var_10)))))));
    }
}
