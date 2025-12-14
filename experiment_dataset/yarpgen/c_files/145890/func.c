/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145890
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))))) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned long long int) arr_0 [i_0] [13LL]))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) == (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) (unsigned short)65529)));
                var_17 ^= ((/* implicit */unsigned short) arr_5 [i_2] [i_1]);
                var_18 += ((/* implicit */int) (~(((unsigned long long int) ((signed char) arr_9 [i_1 + 1] [i_2])))));
            }
        } 
    } 
}
