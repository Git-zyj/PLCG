/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106829
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_14)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 ^= ((/* implicit */_Bool) -8900007482011068366LL);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_1 [i_0]))));
        var_22 = arr_0 [i_0];
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */short) ((arr_4 [i_0] [i_0] [i_0]) ? (8900007482011068365LL) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2]))));
                    var_24 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned char)216)))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                arr_13 [i_3] = ((/* implicit */int) var_0);
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) var_5)))))));
            }
        } 
    } 
}
