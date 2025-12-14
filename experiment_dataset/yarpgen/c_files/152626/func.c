/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152626
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) var_8))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0] [i_0]))) ? (arr_0 [i_2] [i_2 + 1]) : (((/* implicit */long long int) -1504808531))));
                    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_13 = ((/* implicit */unsigned char) arr_2 [i_0] [i_2 - 1] [(short)11]);
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_0 [8ULL] [i_2 + 1]))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */unsigned int) 1504808530);
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) (_Bool)0);
            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (1504808529))) == (1504808542)));
            var_17 ^= ((/* implicit */short) var_2);
            arr_10 [i_0] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
            arr_11 [i_0] [i_0] [i_3] = ((/* implicit */int) 2971369439151827556ULL);
        }
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_4] [i_0] [i_0]))));
            var_19 |= ((/* implicit */_Bool) arr_13 [i_0] [(short)4] [i_4]);
            var_20 = ((/* implicit */unsigned long long int) 871838676);
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-17579)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_4]))) : (15475374634557724059ULL)));
        }
    }
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_4))));
}
