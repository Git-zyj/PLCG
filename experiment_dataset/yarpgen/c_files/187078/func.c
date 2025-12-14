/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187078
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned short) ((short) min((((/* implicit */long long int) ((unsigned int) var_9))), (max((((/* implicit */long long int) (short)-22940)), (-8150689281870728892LL))))));
            var_12 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_0]))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((unsigned short) ((-4604750663307875337LL) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))))))));
                var_14 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2] [i_3 + 1] [i_3 - 2]))));
            }
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_15 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-20604)) ? (((/* implicit */int) (unsigned short)42052)) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_2]))))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)27243))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < ((+(-5156924364872952152LL)))));
            }
        }
        arr_13 [(unsigned char)4] &= ((/* implicit */short) ((unsigned short) -2066959322));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_2 [i_5] [i_5] [i_5])) ^ (((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) (-((((-(((/* implicit */int) (unsigned short)54666)))) - (((/* implicit */int) arr_2 [i_5] [i_5] [i_5]))))));
    }
    var_17 = ((/* implicit */signed char) var_0);
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_1))));
}
