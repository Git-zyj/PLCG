/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173658
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (unsigned short)42246);
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            arr_12 [i_0 + 1] [i_1] [i_2] [i_3] [(unsigned char)15] [i_0 - 1] = ((/* implicit */unsigned char) (-(((unsigned long long int) ((((/* implicit */int) (unsigned char)31)) / (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1])))))));
                            var_20 = ((/* implicit */long long int) ((min((var_7), (arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_4 - 1]))) != (((((int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)52803)) - (52781)))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((890634465186497480ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12713))) < (12999927326862264488ULL))))))))));
                            var_22 = ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_5])))) + (2147483647))) >> (((((int) var_7)) + (1922063082)))));
                            var_23 = ((/* implicit */_Bool) 586576880);
                        }
                        for (int i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_9 [i_2] [i_3] [(_Bool)1] [i_6 - 1]))))));
                            var_25 ^= ((/* implicit */long long int) (unsigned short)24);
                        }
                        arr_18 [(unsigned short)14] [i_1] [i_1] [i_1] [7] [2LL] = ((/* implicit */long long int) ((_Bool) ((var_8) <= (((/* implicit */int) (!(arr_17 [i_0] [i_0] [i_2] [i_3] [i_0])))))));
                        var_26 &= ((/* implicit */unsigned int) arr_5 [8LL] [i_1] [i_3]);
                    }
                } 
            } 
        } 
        var_27 += ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) var_6)), (arr_3 [i_0 - 1] [i_0 + 1]))));
    }
    var_28 = ((/* implicit */unsigned short) var_4);
    var_29 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
}
