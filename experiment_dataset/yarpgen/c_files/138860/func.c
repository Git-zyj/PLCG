/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138860
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
    var_15 = ((/* implicit */long long int) var_6);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (_Bool)1)))))) != (min((max((var_12), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))))))));
    var_17 = ((/* implicit */signed char) (~(15728640ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [7ULL] [i_1] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (2778258601U) : (arr_3 [i_0])))), (((((/* implicit */_Bool) var_1)) ? (375300745922538752LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 1516708695U)) ? (((/* implicit */unsigned int) 1260719027)) : (1516708695U))))));
                arr_8 [i_1] = ((/* implicit */int) ((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) | (1539919227U)))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_9 [i_1] = ((/* implicit */int) 2650413803454374897LL);
            }
        } 
    } 
}
