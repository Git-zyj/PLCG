/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15166
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
    var_11 ^= ((/* implicit */unsigned long long int) min((2), (-15)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) min(((+((-(((/* implicit */int) (_Bool)1)))))), ((-((-(((/* implicit */int) (unsigned char)84))))))));
                arr_4 [i_1] [i_1 + 2] = ((/* implicit */unsigned int) (~(9)));
                var_13 -= ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) -7)), (4319371325042061399ULL))) > (((((/* implicit */_Bool) -13LL)) ? (15701056841069714687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))))), ((!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65531)), (9223372036854775807LL))))))));
                var_14 *= ((/* implicit */_Bool) 14371012669098634237ULL);
            }
        } 
    } 
}
