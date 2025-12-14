/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104088
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) 1631297773)) ? (1646355436) : (arr_2 [i_1] [i_1] [i_1 - 1]));
                    arr_9 [i_0] [i_1 + 1] [i_0] = ((((/* implicit */unsigned long long int) arr_7 [i_0])) ^ (((1430788555900218787ULL) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
                }
            } 
        } 
        var_21 = ((arr_7 [i_0]) + (arr_7 [i_0]));
        var_22 ^= ((/* implicit */unsigned long long int) 1646355424);
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((var_17) != (var_16)))) : (var_18)));
    var_24 = ((/* implicit */int) min((((min((var_15), (17015955517809332827ULL))) >> (((min((-1707390317), (-1707390310))) + (1707390318))))), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 12; i_5 += 4) 
            {
                {
                    var_25 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) 1646355436))))) ? (arr_8 [i_5 - 3] [i_4] [i_4] [i_3]) : (1079334477))))));
                    var_26 = ((/* implicit */unsigned long long int) -425819308);
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_4]), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) 1377614024)) : (18446744073709551615ULL)))) ? (((17015955517809332833ULL) ^ (((/* implicit */unsigned long long int) 2147483626)))) : (((/* implicit */unsigned long long int) (~((-2147483647 - 1)))))));
                    arr_17 [i_5] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3] [i_3] [0ULL])) ? (max((arr_10 [i_3 + 1]), (((4172471767211004403ULL) / (((/* implicit */unsigned long long int) -1646355437)))))) : (var_17)));
                    var_28 = ((/* implicit */int) ((((((int) -1170989645)) <= (var_19))) ? (((((/* implicit */_Bool) var_12)) ? (18311476062053764584ULL) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) max((arr_12 [i_5 - 2]), ((~(1631297773))))))));
                }
            } 
        } 
    } 
}
