/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175860
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)25635)) & (((/* implicit */int) (short)-25635)))), (((/* implicit */int) ((unsigned char) (short)25635)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((~(((/* implicit */int) (short)25635)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 7; i_2 += 4) 
            {
                {
                    arr_11 [i_0 + 1] [3LL] [5] [i_2] = ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 - 2]);
                    var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_2 + 1] [i_0 - 1])) ? (arr_7 [i_2 - 2] [i_0 - 2]) : (arr_1 [i_2 - 3] [i_0 - 2])))));
                    var_13 = ((/* implicit */unsigned int) max((818082783041780817LL), (((/* implicit */long long int) (signed char)-37))));
                    var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)5] [(unsigned char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 4340325343294777754ULL)))) : (((unsigned int) var_6))));
                    var_15 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)25635)) ? (((/* implicit */int) (short)-25636)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 238511990)) ? (((/* implicit */long long int) 238511994)) : (-818082783041780818LL))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((var_4) - (1685831575U)))))))))));
}
