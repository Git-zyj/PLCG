/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143642
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_16 -= ((/* implicit */unsigned char) max((min((arr_3 [10U] [i_1 - 1] [i_0 + 3]), (((/* implicit */int) (signed char)-41)))), (((((/* implicit */_Bool) arr_3 [22] [i_1 - 1] [i_0 + 2])) ? (arr_3 [(signed char)14] [i_1 - 1] [i_0 - 3]) : (arr_3 [20U] [i_1 - 1] [i_0 - 1])))));
                    arr_8 [(unsigned short)14] [i_1] [i_0] [i_0] = ((/* implicit */short) max((7565975536257142765ULL), (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0])))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((min(((-(arr_3 [i_0] [i_1 - 1] [i_0]))), (((/* implicit */int) min(((unsigned char)107), ((unsigned char)255)))))) != (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])) > (arr_4 [i_2] [i_2]))))))));
                    arr_10 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (((arr_4 [i_0 - 1] [i_1 - 1]) >> (((arr_4 [i_0 + 1] [i_1 - 1]) - (14243578365461380389ULL)))))));
                }
                arr_11 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-88)))));
                var_17 ^= ((/* implicit */_Bool) min((3827399662703410732ULL), (var_0)));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : ((~(min((((/* implicit */int) var_15)), (var_13)))))));
}
