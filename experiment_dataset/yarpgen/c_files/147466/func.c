/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147466
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
    var_10 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)39139));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) (short)-12907)), (6175275973347097153ULL))), (((/* implicit */unsigned long long int) arr_2 [(short)6])))))));
        arr_3 [(unsigned short)6] |= ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_0] [i_0])), (-243941612)));
        var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_1 [5] [i_0])) ? (min((((/* implicit */unsigned int) var_4)), (var_8))) : (4294967295U)))));
    }
    var_13 = ((unsigned short) var_8);
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 3; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (short)1586)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3] [i_4] [i_2 - 3])) ? (arr_14 [i_1] [i_1] [i_3] [9] [i_2 - 1]) : (arr_14 [i_3] [i_3] [i_3] [i_1] [i_2 - 2])))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) (short)-7436)))) ^ (((/* implicit */int) (unsigned char)206))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4173404555U)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_3]))))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (337066594)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 2]))) : (((8479027641451185145LL) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                    }
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (unsigned char)40))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38234)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)21565), (((/* implicit */unsigned short) (unsigned char)49)))))) : (arr_9 [i_2 + 2])))) ? (max((((/* implicit */int) (_Bool)1)), (arr_12 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2]))) : (((/* implicit */int) ((signed char) arr_14 [i_1] [i_2] [i_2] [i_2] [i_3]))))))));
                }
            } 
        } 
    } 
}
