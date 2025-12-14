/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115830
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0] [i_1 - 2]), (((/* implicit */int) (unsigned short)24574)))))))));
                arr_7 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) << (((arr_5 [i_0 + 3] [i_0]) - (1841335444)))))) ? (((17153452190910363687ULL) + (15671897014632957290ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : ((+(3661549498382991770ULL)))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) << (((((((arr_5 [i_0 + 3] [i_0]) - (1841335444))) + (769785378))) - (24)))))) ? (((17153452190910363687ULL) + (15671897014632957290ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) : ((+(3661549498382991770ULL))))));
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_0])) & (((((/* implicit */int) var_13)) - (((/* implicit */int) var_6)))))) + (((((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */int) (signed char)123)) : ((-2147483647 - 1)))) & (((var_3) ? (var_0) : (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (min((-1LL), (((/* implicit */long long int) var_11)))) : (((var_4) >> (((var_0) - (337624707)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) -2147483643)) | (2305843009213693951LL)))) ? (((/* implicit */unsigned long long int) ((((var_12) + (2147483647))) << (((3661549498382991787ULL) - (3661549498382991787ULL)))))) : (((var_1) + (((/* implicit */unsigned long long int) var_12)))))))));
}
