/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149617
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
    var_20 = ((/* implicit */short) 7436677319376863877LL);
    var_21 = var_10;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */signed char) 536870784ULL);
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)37236)))))));
                    var_24 = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-45)) / (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)91)), ((unsigned short)28297))))))));
                }
                arr_9 [i_0 + 2] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)14515)) || (((/* implicit */_Bool) ((unsigned int) 734189283)))))));
            }
        } 
    } 
}
