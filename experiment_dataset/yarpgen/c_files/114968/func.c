/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114968
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) (+((+((+(132120576)))))));
        var_13 = ((/* implicit */_Bool) (+((+(13280459837408850069ULL)))));
        var_14 = ((/* implicit */signed char) (+((+((+(((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) (unsigned char)203))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (+((+((+(arr_3 [i_1])))))));
        var_16 ^= (+((+((+(((/* implicit */int) (unsigned char)195)))))));
    }
    var_17 -= ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_3))))))));
}
