/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141689
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_2)) : ((-(arr_0 [i_0] [i_0]))))) + (2147483647))) << (((min((((/* implicit */long long int) (~(3184539503U)))), (min((((/* implicit */long long int) var_7)), (9223372036854775807LL))))) - (48LL)))));
        var_14 += ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)21420)), (1)));
        var_15 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-112)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (-9223372036854775807LL) : (max((((/* implicit */long long int) 9)), (7741339930884653040LL)))))), (arr_4 [i_1])));
                var_17 = ((/* implicit */short) min((((-9223372036854775787LL) / (((/* implicit */long long int) 13)))), (((/* implicit */long long int) arr_8 [i_1] [i_2]))));
            }
        } 
    } 
}
