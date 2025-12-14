/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183500
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [0] [i_1] [i_0] = ((long long int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (arr_1 [6LL]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (2013200847464022036ULL)))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((long long int) (~(16433543226245529579ULL)));
        arr_9 [(unsigned short)5] [i_2] = ((/* implicit */signed char) 18446744073709551615ULL);
    }
}
