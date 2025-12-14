/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132742
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9221120237041090560ULL)) ? (1398734827U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122)))));
                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)122)), ((unsigned short)53447)))) != (((/* implicit */int) (unsigned short)64247)))))));
            }
        } 
    } 
    var_15 ^= (unsigned short)34759;
}
