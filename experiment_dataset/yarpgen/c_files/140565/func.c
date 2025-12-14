/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140565
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((unsigned short) (-(9U)));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) var_3)), (0U))), (((/* implicit */unsigned int) -1987877969))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned short) ((var_12) % ((+(var_11)))))))));
        var_17 = ((/* implicit */unsigned int) (+(((min((((/* implicit */unsigned long long int) 7518392470081222765LL)), (var_12))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) ((short) 23U))))));
    }
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10)))) * (min((((/* implicit */unsigned long long int) var_4)), (var_11))))));
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (unsigned short)65535)))));
        var_21 = min((min((((long long int) (unsigned char)216)), (((/* implicit */long long int) (unsigned short)6832)))), (((/* implicit */long long int) (+(min((((/* implicit */int) (unsigned char)65)), (var_4)))))));
    }
    var_22 = ((/* implicit */unsigned char) ((min(((-(var_5))), (((/* implicit */long long int) min((var_10), (65011712)))))) != (((long long int) var_14))));
}
