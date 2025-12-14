/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114661
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_4 [8ULL] [i_0] [i_2]);
                    arr_8 [i_0] = ((/* implicit */int) (((((!(((/* implicit */_Bool) 5881109195317417162LL)))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39193)))))))) < (var_5)));
                }
            } 
        } 
        var_17 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)192))));
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) (signed char)2);
    }
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-2)))))));
                    var_19 = (!(((/* implicit */_Bool) var_7)));
                }
            } 
        } 
    } 
}
