/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126789
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9022636808406329423LL)) ? (4140018025425554438ULL) : (((/* implicit */unsigned long long int) -9022636808406329425LL))));
    var_20 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) ((_Bool) min((14306726048283997188ULL), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 9022636808406329422LL)))) ^ (((arr_1 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)43581)), (min((min((9022636808406329435LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11240)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11)))))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (var_2)));
}
