/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140540
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [(short)4] = var_11;
                var_16 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (arr_2 [i_1] [i_0])))) ? (max((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [i_0] [2LL]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_3] = ((/* implicit */signed char) arr_1 [i_2] [i_3]);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) arr_1 [i_4] [8]);
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4 + 1]);
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_15))));
                                arr_18 [i_0] [(_Bool)1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_15 [i_0] [i_1] [i_0] [i_4 - 1] [i_4] [i_4] [i_4 - 2]);
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_4] [i_3] [(unsigned short)2] [i_2] [i_1] [i_0])) ? (arr_8 [i_0] [i_1] [i_4 + 1] [(short)4] [i_0] [3LL]) : (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_2] [0LL] [i_0])))))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) (unsigned short)16797)) : (((/* implicit */int) var_9)))))));
                            }
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_13)))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_15))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 3; i_7 < 20; i_7 += 4) 
        {
            {
                var_22 = ((/* implicit */short) max((var_22), (((short) (+((+(((/* implicit */int) (short)28460)))))))));
                var_23 += ((/* implicit */unsigned short) arr_22 [i_6]);
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 2269866098089864067LL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_22 [i_6 - 1]))))) : (((((/* implicit */_Bool) -2269866098089864060LL)) ? (-2269866098089864068LL) : (((/* implicit */long long int) 3959445846U)))))))));
                arr_26 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
            }
        } 
    } 
}
