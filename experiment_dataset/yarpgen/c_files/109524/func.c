/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109524
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) ((-1858139341401431917LL) ^ (((/* implicit */long long int) (~(((int) arr_1 [4] [i_0])))))));
        var_11 = ((/* implicit */signed char) ((min((((5247274002647133370ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (13199470071062418249ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1073741824)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1] [i_1]));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 3; i_5 < 9; i_5 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) (~(arr_9 [i_2] [i_2] [i_5 - 2] [i_5 - 2] [(_Bool)1] [i_1])));
                                var_14 = ((/* implicit */int) 1781139672U);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -1073741826)) ? (((/* implicit */unsigned int) arr_0 [i_1])) : (arr_11 [i_3] [i_3] [i_3] [i_3]))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [4] [i_1]))))));
        var_17 = ((/* implicit */unsigned int) ((arr_3 [i_1] [i_1]) ? (1073741826) : (((/* implicit */int) arr_3 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 2) 
        {
            var_18 = ((/* implicit */short) ((1073741825) % (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)-12175)) : (((/* implicit */int) (_Bool)1))))));
            var_19 = (unsigned short)32348;
        }
    }
    var_20 -= ((/* implicit */long long int) var_1);
}
