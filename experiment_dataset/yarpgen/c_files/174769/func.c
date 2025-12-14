/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174769
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
    var_20 = ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) : (12458302263249507212ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)40695))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 2]);
        arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) var_6)) - (84)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_22 -= ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 - 1] [i_3] [i_2])) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) <= (3308295436U))))));
                        var_23 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 94608315U)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [2U] [i_3]))))))));
                        arr_17 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [i_3] [3U])) >= (((/* implicit */int) (unsigned char)118)))) ? (((/* implicit */int) (short)-16325)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32337))) > (arr_11 [i_0]))))));
                    }
                } 
            } 
        } 
    }
    var_24 = var_0;
}
