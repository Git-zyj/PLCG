/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174308
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
    var_14 |= ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((long long int) var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) ((signed char) ((unsigned int) arr_10 [i_0] [(short)7] [i_2] [i_3])))) : (((/* implicit */int) (short)29911))));
                            /* LoopSeq 2 */
                            for (int i_4 = 1; i_4 < 7; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_4 + 1])), (((long long int) 3927963773U))))) ? ((-(((((/* implicit */unsigned long long int) arr_5 [i_1] [i_3])) * (13835058055282163712ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_9 [5U] [i_1] [5ULL] [7LL]))))))));
                                var_17 += ((((/* implicit */unsigned int) ((int) max((arr_14 [i_1] [(_Bool)0] [i_4]), (((/* implicit */int) (short)29913)))))) & (4294967284U));
                                arr_15 [7] [i_2] [i_3] |= ((/* implicit */unsigned int) var_5);
                            }
                            for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
                            {
                                var_18 = ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_2] [i_3] [i_5 + 1])), ((unsigned short)16702)));
                                var_19 += ((/* implicit */unsigned int) ((unsigned long long int) 4953036341946289191LL));
                                var_20 = ((/* implicit */unsigned char) 4611686018427387904ULL);
                                arr_18 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_5] = (+(arr_3 [i_1] [i_3] [i_3]));
                            }
                        }
                    } 
                } 
                var_21 = ((unsigned int) arr_5 [i_0] [i_1]);
            }
        } 
    } 
}
