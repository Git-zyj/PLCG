/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129564
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [21LL] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65524)), (max((((/* implicit */unsigned int) -1421927629)), (886869012U)))))) : (((((/* implicit */_Bool) 11263073481760367403ULL)) ? (7183670591949184222ULL) : (((/* implicit */unsigned long long int) 886869030U))))));
                var_11 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-19))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (2069198139U)))), (min((((/* implicit */unsigned long long int) var_9)), (7835487434353801161ULL)))))));
    var_13 |= ((/* implicit */short) min((((/* implicit */int) var_2)), (var_0)));
}
