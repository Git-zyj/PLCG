/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172056
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
    var_16 ^= ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */int) var_6)) % (((/* implicit */int) var_11)))), (((((/* implicit */int) var_3)) & (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) min((-1952020313), (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-120)), (var_3))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) (-(((long long int) 1073739776ULL))));
                                var_18 = ((/* implicit */short) arr_0 [i_0] [i_2]);
                                var_19 = ((/* implicit */unsigned long long int) arr_11 [i_0] [3ULL] [i_1] [i_3] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [18ULL] = ((/* implicit */short) var_4);
                                var_20 ^= ((/* implicit */long long int) var_12);
                                arr_19 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_5] [i_5] [i_6 - 1] [i_5] [i_2])) / (((/* implicit */int) arr_15 [i_6 - 2] [(_Bool)1] [i_6 - 2] [i_5] [(short)5]))));
                                var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_2] [i_5 - 1] [i_6] [(_Bool)1] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((var_6) ? (arr_13 [i_2] [i_5 - 1] [i_6] [i_6]) : (arr_13 [i_2] [i_5 - 1] [12ULL] [i_2])))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [(_Bool)0] [(_Bool)0] [(short)12] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (2523042901569804433ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    arr_21 [i_1] [i_2] = ((/* implicit */int) (unsigned char)149);
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (max((((/* implicit */int) var_10)), (var_13))))) >= (var_14)));
    var_23 &= var_8;
}
