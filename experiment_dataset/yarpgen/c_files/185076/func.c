/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185076
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [4ULL] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) var_9)))))));
                var_10 ^= ((/* implicit */unsigned char) (short)-17172);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */short) var_4)), ((short)17)))) : (((/* implicit */int) (short)-28443)))))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_9 [(signed char)2] = (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-10244)) + (2147483647))) >> (((1772679342U) - (1772679314U)))))) ? (((/* implicit */unsigned long long int) 536870911)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)891))) : (7672443620474587596ULL)))));
        arr_10 [i_2] = ((((/* implicit */_Bool) min((arr_7 [i_2]), (arr_7 [i_2])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) ((unsigned char) var_3))));
    }
    var_13 = ((/* implicit */unsigned long long int) ((unsigned char) (+(2855713910U))));
}
