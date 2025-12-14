/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16698
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
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [8]);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_5 [i_0 + 2] [i_2]))));
                    arr_10 [(short)10] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_8 [i_2] [i_2])) ^ (((/* implicit */int) ((signed char) var_7))))));
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_2] [(unsigned char)6]))) : (((int) arr_0 [i_1 - 2])));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) arr_9 [(signed char)16])) ? (arr_2 [i_0]) : (((/* implicit */int) (signed char)64)))))) | (((/* implicit */int) ((short) var_9)))));
    }
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (((/* implicit */int) var_2)))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) : ((~(max((-2496158589248435120LL), (-2496158589248435136LL)))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) ((short) -2496158589248435114LL))))) : (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */int) ((((((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned short)20007)))) && ((!(((/* implicit */_Bool) (unsigned char)249)))))) ? (((((/* implicit */_Bool) var_2)) ? (((long long int) -2496158589248435136LL)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_1)))))))))));
}
