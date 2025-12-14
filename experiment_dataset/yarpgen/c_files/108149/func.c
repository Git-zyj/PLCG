/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108149
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((int) arr_6 [i_2] [i_0])) : (arr_2 [i_0] [i_0])));
                    var_12 = ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_9)), (3LL))), (arr_8 [i_0] [i_1 - 1] [i_1] [i_1 + 1])))) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (int i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_13 += ((/* implicit */short) (~(((/* implicit */int) min((var_2), (((/* implicit */short) (unsigned char)40)))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)23604), (((/* implicit */unsigned short) (short)8068))))) ? (max((arr_16 [i_3] [i_3] [i_3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5]))))))) : (var_3)));
                    var_15 = ((/* implicit */short) (+(max((arr_15 [i_4] [i_4 - 1]), (((/* implicit */unsigned long long int) 9LL))))));
                }
            } 
        } 
    } 
}
