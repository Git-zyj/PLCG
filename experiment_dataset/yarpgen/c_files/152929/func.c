/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152929
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        arr_14 [i_3] [i_2] [i_1] [i_1] [i_1] [3U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_0)), (6179938722244582822ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1325718108940363594LL)))))))) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 - 1] [i_3 - 3]))))) : (((((/* implicit */int) (unsigned short)1572)) << ((((((_Bool)0) ? (arr_1 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41247))))) - (41240ULL)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) -6331684432452948493LL)) ? (-7122166234294743784LL) : (((/* implicit */long long int) 114361188U)))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) * (arr_11 [i_4] [i_1]))))));
                            arr_17 [(short)10] [i_1 - 3] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) / (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) arr_2 [i_1 - 1])) : (arr_5 [i_1 - 2] [i_3 - 3] [i_4])));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) ((_Bool) (-(arr_3 [i_0] [i_1 - 1]))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) ((unsigned short) arr_6 [i_6] [i_5] [i_0]))) : (var_13))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))));
                                var_20 = ((/* implicit */unsigned short) (-(((((arr_1 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [10U]))))) % (((/* implicit */unsigned long long int) ((0) - (((/* implicit */int) (unsigned char)66)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_2);
}
