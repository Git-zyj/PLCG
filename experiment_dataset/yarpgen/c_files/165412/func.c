/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165412
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_0 [i_0 + 1]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [i_0 - 3])))) / (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0))))));
    }
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        var_15 *= ((/* implicit */unsigned long long int) (_Bool)0);
        arr_5 [i_1] = ((/* implicit */unsigned short) var_5);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(arr_3 [(short)0] [(short)0]))))));
            var_17 = ((/* implicit */signed char) ((unsigned short) var_3));
        }
        for (short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) 
            {
                var_18 |= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((1962361434) - (1962361428)))));
                arr_13 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_3] [i_1])) + (((/* implicit */int) var_8))));
                arr_14 [i_1] = ((/* implicit */_Bool) ((unsigned char) arr_12 [i_1] [i_3] [i_4]));
            }
            arr_15 [i_1] [i_3 + 1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1415508178U)), (123812097211638618ULL)));
        }
    }
}
