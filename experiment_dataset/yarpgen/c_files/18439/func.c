/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18439
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
    var_14 = ((var_0) ? ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))) < (3091006443U)))))) : (((/* implicit */int) var_0)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */int) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */unsigned int) ((int) arr_3 [i_0] [11ULL] [i_0 + 1]))) + (3091006443U)))));
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) min((3091006435U), (1203960836U)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (~(((((long long int) 3091006464U)) << (((unsigned long long int) (_Bool)0))))));
}
