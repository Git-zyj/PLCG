/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179465
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
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((((((/* implicit */int) (signed char)-108)) - (((/* implicit */int) (signed char)-113)))) + (((/* implicit */int) arr_2 [i_0 - 1])));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)31)))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(arr_0 [i_1])));
                var_16 ^= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (arr_3 [i_0 - 4] [i_0 + 1] [i_0]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (4294967294U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                arr_11 [4ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) != (arr_9 [i_2] [i_2])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    arr_14 [i_2] [16ULL] [16ULL] = ((/* implicit */int) arr_8 [i_2]);
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (arr_8 [i_2]))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((_Bool) (unsigned char)156)))));
                }
                for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)815))));
                    arr_19 [0ULL] [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2]))) ^ (4294967295U)))) / (arr_15 [i_5] [i_2] [i_2])))) ? ((+(((/* implicit */int) arr_10 [i_2])))) : (((/* implicit */int) (_Bool)1))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_13 [i_2])))) ? (((unsigned long long int) arr_10 [i_2])) : ((-(1155540733304669063ULL)))));
                }
            }
        } 
    } 
    var_20 &= ((/* implicit */int) var_2);
    var_21 = ((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned long long int) var_8))));
}
