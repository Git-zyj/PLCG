/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144515
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [(short)17] [i_1] [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_3 [1LL] [i_0] [i_0]))))));
                arr_5 [i_1] = ((/* implicit */short) 674981776);
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_1] [5ULL] [i_1 + 2])), (arr_2 [i_1] [(unsigned short)0] [i_1 - 2]))))));
                var_17 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_18 &= ((/* implicit */int) (~(var_3)));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_19 += ((/* implicit */unsigned char) arr_2 [i_3] [i_3] [i_3]);
                var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned char)211))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)211)))))));
}
