/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142119
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (unsigned short)2110))));
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) var_2)) * (((unsigned int) ((unsigned long long int) (_Bool)1)))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((-4212618030227102191LL) & (((/* implicit */long long int) 12U)))) >> (((((/* implicit */int) ((signed char) var_1))) + (107)))))) & (((unsigned long long int) ((short) -4212618030227102197LL))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [13LL] = ((/* implicit */int) arr_4 [i_1 - 2]);
                    arr_10 [i_0] [i_1 - 1] [i_2] = ((/* implicit */_Bool) ((signed char) (((+(2863467109U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (1431500186U))))))));
                    arr_11 [i_0] [i_1 - 1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_2])) & (((/* implicit */int) arr_0 [i_0]))))) > (((14989887808446980829ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32210)))))))) * (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12521))))) >> (((/* implicit */int) ((signed char) arr_0 [i_2])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (short)7))));
}
