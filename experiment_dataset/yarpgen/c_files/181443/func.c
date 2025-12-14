/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181443
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)205)), ((~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-117)), ((unsigned char)50))))))));
    var_17 = ((/* implicit */int) max((var_15), (((/* implicit */long long int) var_5))));
    var_18 = ((var_2) | (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) & (((/* implicit */int) (short)9173)))) >> (min((((/* implicit */unsigned int) (_Bool)1)), (var_2)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (max((var_15), (((/* implicit */long long int) (_Bool)1)))))))));
        var_20 = (~(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-31)), ((unsigned char)55)))) >= (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)175)))))))));
    }
}
