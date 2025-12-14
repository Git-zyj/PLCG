/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124378
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) <= (9293020155007825719ULL))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) ^ (arr_0 [i_0])));
        var_13 &= ((/* implicit */unsigned short) ((signed char) arr_1 [i_0 + 1]));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) 9293020155007825719ULL);
        var_14 = ((/* implicit */_Bool) min((6887039496723451775ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (unsigned short)53636)))) : (((/* implicit */int) ((arr_4 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4)))))))))));
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */short) max((arr_8 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))) < (arr_8 [i_2]))))));
                arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3]))))) << (((min((((/* implicit */int) var_10)), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_2] [i_3])))))) - (13769)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_11);
    var_17 = ((/* implicit */short) var_0);
}
