/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165794
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? (33838781U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)41600)))) : (((/* implicit */int) arr_3 [5LL] [i_1 + 1] [i_1])))))));
            var_13 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_1 + 1]));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_1 + 1] [i_1 + 3]));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) -3846882638547533730LL);
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                var_14 = ((((/* implicit */int) arr_4 [i_0] [i_2])) / (((/* implicit */int) arr_4 [i_2] [i_3])));
                var_15 = ((/* implicit */unsigned short) (signed char)127);
                /* LoopSeq 2 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0]);
                    arr_13 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_2] [i_3] [i_4]);
                    var_17 = ((/* implicit */_Bool) (unsigned char)20);
                }
                for (unsigned char i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)65530);
                    var_18 = ((/* implicit */long long int) arr_9 [13LL] [13LL] [i_3] [i_5]);
                }
                var_19 = arr_0 [3ULL] [i_3];
            }
            var_20 = ((/* implicit */long long int) var_8);
        }
        arr_17 [i_0] = ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]));
    }
    var_21 &= -48720111;
}
