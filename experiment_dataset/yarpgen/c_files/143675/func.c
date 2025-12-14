/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143675
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
    for (short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) var_7)), (max((((/* implicit */short) arr_1 [i_0 - 1])), (arr_0 [i_0 - 1])))));
        var_12 = ((/* implicit */signed char) 1725891041619771495LL);
    }
    var_13 = ((/* implicit */signed char) max((max((((/* implicit */int) ((unsigned short) var_11))), (var_8))), (((((/* implicit */int) ((((/* implicit */int) var_4)) < (-1649071069)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_12 [i_1] |= ((/* implicit */short) (-(max((max((1649071050), (7))), (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_2)))))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1074098429)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) 537280902)))))) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_4 [11] [i_3])))))) : (((/* implicit */int) ((short) arr_11 [i_1] [i_1] [i_1] [i_2 + 2])))));
                    var_15 = ((/* implicit */int) max((((max((((/* implicit */long long int) (signed char)73)), (-6471971676981594998LL))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))), (((/* implicit */long long int) max((((/* implicit */int) (short)20822)), (arr_3 [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_9))));
}
