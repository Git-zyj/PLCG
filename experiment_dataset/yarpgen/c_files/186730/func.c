/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186730
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((int) var_5)) : (((/* implicit */int) var_7)))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8507158935500874186ULL)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (_Bool)1))));
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (max((((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1 + 2] [i_2] [6LL])) ? (arr_7 [i_1 + 3] [i_2]) : (arr_7 [i_1 + 1] [i_2]))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))))));
                    arr_8 [(unsigned char)8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (max((((/* implicit */unsigned long long int) (signed char)83)), (var_0)))))) & (((/* implicit */int) ((((long long int) -7801287551659312861LL)) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [1ULL] [13U]))))))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (-(arr_1 [i_0]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [(short)11] [i_0] = ((/* implicit */short) ((((_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) var_4))) : ((+(((/* implicit */int) (_Bool)1))))));
                    arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((9223372036854775807LL) ^ (65535LL)));
                    var_13 *= ((/* implicit */unsigned long long int) ((var_5) < (((/* implicit */unsigned long long int) -9223372036854775793LL))));
                    var_14 = ((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (173)))));
                }
                arr_13 [i_0] = ((/* implicit */int) (+(var_4)));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) (unsigned short)17097)) : (((/* implicit */int) ((_Bool) var_3)))))));
}
