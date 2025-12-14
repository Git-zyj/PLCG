/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164457
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
    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 144097595889811456LL)) <= (287104476244869120ULL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */short) min((max((((((/* implicit */int) (signed char)0)) >> (((-144097595889811456LL) + (144097595889811476LL))))), (((/* implicit */int) var_9)))), (((/* implicit */int) var_7))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) (signed char)48)), (-144097595889811458LL)))));
                var_13 += ((/* implicit */_Bool) 11014235093778294793ULL);
                var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) (unsigned char)128)), ((unsigned short)0)))))) : (8528628111962339745LL)));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(3135183381762157675ULL))))));
}
