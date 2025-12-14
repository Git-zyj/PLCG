/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122979
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
    var_14 = ((/* implicit */int) ((signed char) ((unsigned char) ((unsigned char) var_1))));
    var_15 = ((/* implicit */unsigned long long int) ((long long int) ((int) 125829120ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [11ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((_Bool) var_5)) ? (((unsigned int) arr_1 [i_0])) : (((/* implicit */unsigned int) ((int) var_0)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-2754324609959466745LL))))) : (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (1925756980)))))));
                var_16 = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) ((int) -4203009799123853556LL))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (arr_6 [(signed char)5] [(signed char)5])))));
        arr_8 [12] = ((/* implicit */signed char) ((((_Bool) ((_Bool) arr_5 [i_2]))) ? (((/* implicit */int) ((unsigned char) ((int) var_5)))) : (((/* implicit */int) ((unsigned char) ((signed char) 1925756980))))));
    }
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 1925756975))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0U)))) : (((unsigned int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((int) (unsigned char)184))))) : (((unsigned int) 4294967295U))));
}
