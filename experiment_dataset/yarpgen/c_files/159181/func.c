/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159181
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)63)), (min((((/* implicit */int) (unsigned char)65)), (1048448)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) min((arr_2 [i_0]), (arr_2 [i_0])))), (min((140737488355296LL), (((/* implicit */long long int) 1283709059U))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32763)) - ((+(((/* implicit */int) (_Bool)1))))))) & (min((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) arr_1 [i_0])) : (1202776262)))), (min((((/* implicit */unsigned long long int) 1445246102)), (16643699770385898871ULL)))))));
                arr_8 [i_1] [i_0] [24] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65535))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3397978201U)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_5);
    var_12 = ((/* implicit */int) var_2);
}
