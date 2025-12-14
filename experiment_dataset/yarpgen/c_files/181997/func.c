/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181997
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
    var_15 &= ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-120))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(5344708936099261807LL)))) != (arr_2 [i_0] [i_0])));
    }
    for (short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        arr_9 [i_1 + 1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_5 [3ULL]))))));
        var_16 = ((/* implicit */_Bool) -1054494919);
        var_17 = arr_7 [i_1 - 1];
    }
    for (short i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        var_18 += ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 2])) ^ (((/* implicit */int) var_5))))));
        arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (10010441401399051362ULL)));
        var_19 = ((/* implicit */short) 5344708936099261801LL);
    }
    var_20 = ((/* implicit */_Bool) ((long long int) 301511856));
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (var_0)));
}
