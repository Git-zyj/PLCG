/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14272
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 5272643209890667316LL))))) > (((/* implicit */int) var_3))))) ^ (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */long long int) (~(var_9)));
        var_16 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [14LL]))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) var_10)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_6 [i_1] [i_2] [i_1])), (5272643209890667316LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)39)))))))) > (min((arr_11 [i_3 - 1] [1ULL] [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned long long int) var_3)))))))));
                        var_19 = ((/* implicit */unsigned long long int) var_0);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24072))) ^ (13323286916039522263ULL)));
                        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_5]))) ? (((/* implicit */int) ((unsigned short) var_4))) : (var_9)));
                    }
                    var_22 = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    }
}
