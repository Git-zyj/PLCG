/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14964
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */unsigned char) ((unsigned short) (+(max((arr_3 [i_2] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)3050)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (unsigned char)224);
                                arr_18 [i_0] [i_1 + 2] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_1] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0])))), (((/* implicit */unsigned long long int) ((((arr_15 [i_3]) + (9223372036854775807LL))) >> (((arr_15 [i_0]) + (692320713562766194LL))))))));
                                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)31))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_12 &= (-(((/* implicit */int) (unsigned char)8)));
                        arr_23 [i_5] [i_1] [5ULL] [i_2] [11] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)15710);
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)255))) <= (25U))), ((!(((/* implicit */_Bool) var_5)))))));
}
