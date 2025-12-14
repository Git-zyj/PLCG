/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113065
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
    var_15 = ((/* implicit */unsigned long long int) 3404128717U);
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1 - 1] [i_2] |= ((/* implicit */unsigned long long int) (((~(3146359275U))) < (((((/* implicit */unsigned int) min((731061788), (((/* implicit */int) (unsigned char)49))))) ^ (min((3404128717U), (((/* implicit */unsigned int) (signed char)43))))))));
                    var_16 ^= ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */unsigned char) var_9);
    var_18 = ((/* implicit */unsigned long long int) ((unsigned int) (-2147483647 - 1)));
    var_19 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (13077585871045932851ULL)));
}
