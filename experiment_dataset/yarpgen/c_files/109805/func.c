/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109805
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) var_0);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (((((-(((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_9 [i_4] [i_4 - 3] [i_2] [(short)4] [i_2] [i_4 - 1])))))) + (2147483647))) >> ((((((-(((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0])))) - (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))))) + (51885))))))));
                                var_12 -= ((/* implicit */unsigned char) ((unsigned short) min((-8785790074121032921LL), (8785790074121032920LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)10632)) : (((/* implicit */int) (signed char)-23))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) | (((/* implicit */int) var_5))))) : ((~(8407867283422921419LL)))));
}
