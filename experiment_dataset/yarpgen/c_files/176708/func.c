/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176708
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [10LL] = ((/* implicit */int) ((long long int) (unsigned short)0));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) % (((/* implicit */int) ((((/* implicit */int) (unsigned short)5137)) >= (((/* implicit */int) (unsigned short)5137))))))))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))));
                    var_17 ^= ((long long int) (-(((/* implicit */int) var_10))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */long long int) ((var_5) >> (((var_14) - (14785462751218514494ULL)))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) -7683553874356491215LL)))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)5137)) <= (((/* implicit */int) (unsigned short)36325))))) + (((/* implicit */int) (_Bool)1))));
                                arr_14 [i_2] [1LL] [i_2] [1LL] [i_2] [i_2] = ((/* implicit */_Bool) ((10266488765820343689ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                                arr_15 [13LL] [13LL] [i_1] [14LL] [i_2] [13LL] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) 1789270777);
                    var_22 = (+(((((((/* implicit */long long int) ((/* implicit */int) var_6))) & (-6694473426722832610LL))) >> (((((long long int) (signed char)-122)) + (161LL))))));
                    var_23 = ((/* implicit */long long int) -1789270778);
                    arr_22 [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) -7526613597709727672LL));
                    arr_23 [i_7] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4992)) && (((/* implicit */_Bool) 2367638032894836220LL)))))));
                }
            } 
        } 
    } 
}
