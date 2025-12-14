/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104837
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
    var_18 = ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (7575703416555439611LL)))), (var_17))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34250))));
    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((7575703416555439611LL), (-7575703416555439612LL))), (((/* implicit */long long int) (unsigned char)42))))) ? (8947804040604132716ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2] [i_0])) || (((/* implicit */_Bool) 3244211919U))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (7575703416555439611LL))) / (arr_5 [i_0] [i_1] [i_0] [i_0]))), (min((((-7575703416555439611LL) & (-7575703416555439611LL))), (((/* implicit */long long int) arr_3 [i_0] [(signed char)7] [(signed char)7]))))));
                    var_21 ^= ((/* implicit */unsigned short) 7575703416555439611LL);
                    arr_8 [i_0] [i_0] [i_2] [(_Bool)0] &= ((/* implicit */unsigned short) ((((((-7575703416555439611LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_4 [i_2] [i_1] [i_1] [i_2])) - (26106))))) < (min((((/* implicit */long long int) arr_4 [i_2] [i_2] [i_1] [i_2])), (86418984752139413LL)))));
                }
            } 
        } 
    } 
}
