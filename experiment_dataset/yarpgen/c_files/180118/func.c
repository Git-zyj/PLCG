/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180118
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
    var_12 = ((/* implicit */int) (signed char)25);
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_8))))) ? (min((2988936694972758958ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) << (((var_9) + (84747961)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 ^= (signed char)-71;
                var_15 = ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min(((signed char)-9), (var_6)));
    var_17 = ((/* implicit */signed char) min((((/* implicit */int) max(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)71))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))));
}
