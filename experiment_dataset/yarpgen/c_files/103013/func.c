/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103013
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
    var_16 &= ((/* implicit */int) (+(0ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_17 = ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_0 [i_0 - 1])));
        var_18 = ((/* implicit */_Bool) ((((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4092))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))))) : (((/* implicit */int) var_6))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1] [i_1])) >= (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_20 = arr_3 [i_1];
                        var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_0))))));
                        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((var_3) && (var_9)))) : (((/* implicit */int) var_14))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 3; i_6 < 11; i_6 += 1) 
                {
                    {
                        arr_18 [i_1] [i_2] [i_5] [i_5] [(short)14] [i_6] &= ((/* implicit */unsigned char) max((((/* implicit */short) ((signed char) var_12))), (max((var_7), (((/* implicit */short) arr_13 [i_6 + 2] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((int) (signed char)-1)))) ? (min((max((var_13), (var_13))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (arr_6 [i_2] [0ULL] [i_2])))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_5))))))));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) (signed char)12)), (23U)))))));
                            arr_21 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_11))));
                            arr_22 [i_1] [i_6] [i_7] = ((/* implicit */unsigned char) var_2);
                        }
                        arr_23 [i_1] [i_2] [i_5] [i_6] = var_4;
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_11 [i_1] [i_2] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5] [i_1])) * (((/* implicit */int) var_11))))) : (max((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) ((signed char) (signed char)-2)))))));
                    }
                } 
            } 
        }
    }
}
