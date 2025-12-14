/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133452
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] = ((/* implicit */short) min((min((arr_1 [i_1] [i_0]), (arr_1 [i_1] [i_0]))), (((/* implicit */long long int) var_9))));
                    arr_7 [i_0] [i_1] [(signed char)1] = ((/* implicit */unsigned char) (+(3465432634U)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23462))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)42073)))))));
                            /* LoopSeq 3 */
                            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                            {
                                var_22 = ((/* implicit */int) (short)-26760);
                                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (16040046281434473337ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3 - 1] [i_4] [i_5 - 1] [i_6] [i_7] [i_6])))))) ? (((/* implicit */int) var_15)) : ((-(((/* implicit */int) arr_17 [i_3] [i_4] [i_4] [i_5 - 2] [i_6] [i_7]))))))));
                            }
                            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
                            {
                                arr_27 [i_3 + 3] [i_3] [i_4] [i_5] [i_6] [i_8] [i_8] = min((((/* implicit */int) max(((short)1696), ((short)1668)))), (((((/* implicit */_Bool) arr_26 [i_4] [i_4 - 2])) ? (((/* implicit */int) arr_26 [i_4] [i_4 - 3])) : (((/* implicit */int) arr_26 [i_4] [i_4 - 2])))));
                                var_24 = ((/* implicit */int) var_12);
                                arr_28 [3] [i_4] [22U] [i_4] [i_3] = ((/* implicit */unsigned int) max(((unsigned short)18171), (max((arr_10 [i_4]), (arr_10 [i_4])))));
                                var_25 -= ((/* implicit */signed char) arr_14 [(_Bool)1] [i_3]);
                                arr_29 [i_3 - 1] [i_4] [i_4] [i_8] = ((/* implicit */short) var_0);
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_26 = ((arr_9 [i_9]) ? ((+(((/* implicit */int) (short)4447)))) : (max((arr_12 [i_5] [i_3]), ((((_Bool)1) ? (((/* implicit */int) arr_24 [i_3])) : (((/* implicit */int) arr_31 [i_3] [i_5] [i_4])))))));
                                arr_34 [i_6] [i_6] [i_4] [i_6] [7LL] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_4]))));
                            }
                            var_27 = arr_12 [i_3] [i_4 + 1];
                        }
                    } 
                } 
                arr_35 [i_3] [(_Bool)0] |= ((/* implicit */unsigned long long int) (-(2147483647)));
            }
        } 
    } 
}
