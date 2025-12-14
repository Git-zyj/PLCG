/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171551
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_10 = ((/* implicit */signed char) ((unsigned char) (~(var_1))));
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_1] = (_Bool)0;
                            var_11 = arr_10 [5] [i_3] [7LL] [i_1] [11LL] [7LL] [i_0];
                            arr_15 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6935361305079703097LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [10LL] [i_4 - 1]))) : (-6935361305079703101LL)))) && (((/* implicit */_Bool) arr_3 [i_4]))));
                            var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */int) ((unsigned char) 6935361305079703107LL))) >> (((((/* implicit */int) var_4)) - (83)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */short) (signed char)55);
                            arr_19 [i_3] [i_3] [i_3] [i_1] [1LL] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1471001273033314821LL)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) arr_5 [i_3]))))) ? (-6935361305079703108LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_0] [(signed char)15])) : (((/* implicit */int) (short)4149)))))));
                        }
                    }
                    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) (unsigned char)38);
        var_16 = ((/* implicit */unsigned int) var_6);
    }
    var_17 = ((/* implicit */_Bool) min(((~(((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (((/* implicit */long long int) var_0))));
}
