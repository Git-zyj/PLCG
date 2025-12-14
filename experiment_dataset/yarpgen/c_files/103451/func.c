/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103451
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
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)22))))))) - (max((arr_0 [i_0] [i_1 - 2]), (((/* implicit */unsigned int) (+(var_1))))))));
                arr_4 [(signed char)6] [i_0] [13] = ((/* implicit */short) (+((~(((0) & (((/* implicit */int) (signed char)1))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (~(max((var_7), (((/* implicit */int) (short)10224)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (((+((+(-357640972))))) / ((+(var_3)))));
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        arr_10 [13] [i_2] = ((/* implicit */int) ((882787040U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20078)))));
        arr_11 [i_2] = arr_0 [2ULL] [2ULL];
    }
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(var_10)))), (max((((/* implicit */unsigned long long int) ((signed char) (-2147483647 - 1)))), (max((var_6), (((/* implicit */unsigned long long int) var_10))))))));
}
