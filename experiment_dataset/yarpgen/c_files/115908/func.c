/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115908
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
    var_11 = min((((/* implicit */unsigned long long int) var_4)), ((((((_Bool)0) || (((/* implicit */_Bool) 15698818073773215931ULL)))) ? (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_1 [i_0])));
        var_12 = ((/* implicit */unsigned short) var_8);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(max((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_4)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) /* same iter space */
        {
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)58)) ? (arr_10 [(unsigned short)13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) + (-4811685919584913259LL))), (((/* implicit */long long int) (unsigned short)31729)))))));
            var_13 |= ((/* implicit */_Bool) arr_8 [i_1] [i_2]);
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
        {
            arr_15 [(_Bool)0] |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << (((/* implicit */int) arr_9 [(_Bool)0] [i_3]))));
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_2 [i_1]))));
            arr_16 [i_1] [i_1] = 1747988215;
            var_15 = arr_0 [i_3 - 1];
        }
    }
    for (int i_4 = 3; i_4 < 13; i_4 += 3) 
    {
        arr_21 [i_4] [i_4] = ((/* implicit */short) var_9);
        arr_22 [i_4] = ((/* implicit */long long int) var_2);
        var_16 = ((/* implicit */int) min((((unsigned int) ((short) arr_2 [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_18 [i_4])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
    }
}
