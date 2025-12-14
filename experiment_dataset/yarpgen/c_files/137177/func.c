/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137177
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 2097088)) ? (-2097088) : (-2097089))))) : ((-(var_14)))));
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (signed char)-41)), (12834097101463869325ULL)))))) ? (min((((int) -2097086)), (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [(signed char)15])), (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [(signed char)1] [(signed char)1]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_8 [i_1] [i_1] [9LL] = ((/* implicit */_Bool) arr_7 [i_1] [i_0]);
            var_20 -= ((/* implicit */signed char) ((unsigned long long int) ((signed char) (_Bool)1)));
            arr_9 [i_0] [i_1] = (!(((/* implicit */_Bool) arr_6 [i_0])));
        }
    }
}
