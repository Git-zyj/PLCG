/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145696
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
    var_15 |= ((/* implicit */long long int) ((_Bool) 4538564477683599947LL));
    var_16 = ((/* implicit */long long int) var_4);
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) ((unsigned short) 2096113714))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_0 - 2] [i_0 - 2]) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) arr_1 [i_0])))))) % (((long long int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55107)))));
                var_19 = arr_6 [i_0] [i_0];
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) arr_7 [i_2 + 3]);
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_2]))));
                    var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [9] [9])) ? (arr_0 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_3] [i_4])))));
                }
            } 
        } 
        var_23 = var_12;
        var_24 = ((/* implicit */unsigned short) 1454249642U);
    }
}
