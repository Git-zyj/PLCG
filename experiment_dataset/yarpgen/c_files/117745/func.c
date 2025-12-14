/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117745
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
    var_16 = ((/* implicit */unsigned int) var_11);
    var_17 = ((/* implicit */unsigned short) var_7);
    var_18 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) (_Bool)1);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_1] = max((min((((/* implicit */long long int) 829620438)), (7275270234546329637LL))), (2382876521169148654LL));
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */signed char) max((-1698597932), ((+(((/* implicit */int) arr_1 [4]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(_Bool)1] [i_2] [(short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)98)))), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_1 [3U])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1865084109)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) var_9))))) ? (2382876521169148654LL) : (((/* implicit */long long int) 1698597918)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [1] [i_2])) >= (-1698597932)))))));
                                arr_17 [(unsigned short)5] [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */unsigned int) arr_12 [i_3 + 1] [i_3 - 1] [i_4 - 2] [i_4 + 1])) : (((arr_0 [i_3 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */short) var_14))))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(short)4] = (unsigned short)46103;
                }
            }
        } 
    } 
}
