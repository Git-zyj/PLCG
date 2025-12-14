/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143715
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
    var_14 = (signed char)-1;
    var_15 = (~(var_5));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min(((~(((/* implicit */int) var_6)))), (min((((/* implicit */int) var_6)), (var_2)))))), (((unsigned int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_17 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) arr_4 [i_0 + 1] [i_2 + 1]))), (-1107622600)));
                    arr_8 [i_1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((arr_4 [i_0] [i_2]), (((/* implicit */unsigned char) (signed char)114))))) >> (((((((/* implicit */int) arr_1 [i_0])) << (((((arr_3 [i_0] [i_0]) + (1261059626))) - (19))))) - (12282))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((arr_4 [i_0] [i_2]), (((/* implicit */unsigned char) (signed char)114))))) >> (((((((((/* implicit */int) arr_1 [i_0])) << (((((((((arr_3 [i_0] [i_0]) - (1261059626))) - (19))) + (124538927))) - (6))))) - (12282))) - (805294082)))))))));
                }
                var_18 ^= ((/* implicit */short) min((min((((/* implicit */long long int) ((1107622603) << (((1107622603) - (1107622603)))))), (min((((/* implicit */long long int) -1107622604)), (9223372036854775804LL))))), (((/* implicit */long long int) min((((((-1107622572) + (2147483647))) >> (((1107622593) - (1107622581))))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 1107622596))))))))));
            }
        } 
    } 
}
