/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101688
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
    var_13 |= ((/* implicit */unsigned int) (~(max((((((/* implicit */long long int) ((/* implicit */int) var_6))) + (139611588448485376LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) 1736993110)) > (var_1))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) != (max((((/* implicit */long long int) -1736993111)), (6972235509980965812LL)))));
        var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_0] [i_1] &= ((/* implicit */long long int) (+(min((arr_6 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2]))))));
                    var_15 += ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18589))) : (3350780409U))));
                    var_16 ^= ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */signed char) var_11)), (arr_4 [i_1 + 2] [i_1 + 2])))), ((+(((/* implicit */int) arr_4 [i_1 - 1] [i_1]))))));
                }
            } 
        } 
    }
    var_17 &= ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((4294967295U) & (var_1)))))));
    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 8127449827781642386ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 270856048U))));
    var_19 = ((/* implicit */unsigned int) var_8);
}
