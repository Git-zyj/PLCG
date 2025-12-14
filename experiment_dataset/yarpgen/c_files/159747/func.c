/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159747
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
    var_17 = ((/* implicit */short) var_5);
    var_18 = ((/* implicit */signed char) var_13);
    var_19 = ((/* implicit */unsigned short) min((var_9), (var_11)));
    var_20 = ((/* implicit */unsigned char) min((((((((((/* implicit */_Bool) var_13)) ? (var_14) : (var_14))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */long long int) var_8)) != (var_1)))))), (((((((/* implicit */_Bool) var_10)) ? (var_10) : (var_10))) - (((/* implicit */int) var_13))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 54043195528445952ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (4135679236542958705ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0U)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_16))))))));
                    var_22 = ((/* implicit */_Bool) var_5);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_16))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) - (0U))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))))))));
        var_24 = ((/* implicit */long long int) var_13);
    }
}
