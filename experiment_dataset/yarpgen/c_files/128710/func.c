/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128710
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [(signed char)12] &= ((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3])) || (((/* implicit */_Bool) arr_1 [i_1] [i_0 - 2]))))));
                var_12 -= ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 3] [i_0 - 1])))), (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 2]))));
                var_13 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 769324745U)) ? (((/* implicit */int) arr_9 [i_0] [i_2] [(unsigned char)1] [i_2] [i_0])) : (var_9)))), ((~(arr_1 [i_1] [i_0])))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [14ULL])) ? (arr_11 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_4]) : (((/* implicit */int) arr_10 [i_0] [i_0] [5] [i_3] [9]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0]))))) ? (arr_3 [i_0]) : (arr_3 [i_4 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 3718768310143332980ULL)))))))));
                                var_15 ^= ((/* implicit */unsigned short) arr_0 [i_2]);
                                arr_16 [i_2] [i_3] = ((/* implicit */unsigned char) ((((_Bool) arr_0 [i_0 - 2])) ? ((~(arr_0 [i_0 + 1]))) : (((/* implicit */long long int) (~(arr_11 [i_2] [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1])) >> (((((/* implicit */int) var_1)) + (20557)))))) ? (-6758846244236501362LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) << (((arr_1 [i_0] [i_0]) - (1653127488066196145ULL))))))))) ? (3718768310143332980ULL) : (((/* implicit */unsigned long long int) min((((arr_6 [i_0] [10LL]) % (((/* implicit */long long int) 1371410116)))), ((+(3028416601952009007LL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14727975763566218607ULL))));
}
