/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120073
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [11ULL] = ((/* implicit */short) arr_1 [(signed char)12]);
        arr_3 [i_0] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) ((long long int) (_Bool)0))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_17 *= (-(((/* implicit */int) (_Bool)0)));
        var_18 &= ((/* implicit */long long int) (+(((unsigned long long int) (signed char)10))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (-(3168959839U)));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_19 ^= arr_10 [(_Bool)1];
        arr_11 [i_2 + 1] [i_2 + 1] = ((/* implicit */short) arr_1 [i_2]);
        var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_2] [i_2 + 1]))), (((/* implicit */unsigned long long int) arr_6 [i_2 + 1]))));
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        for (int i_4 = 2; i_4 < 18; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((((/* implicit */int) arr_17 [i_3] [i_4] [i_4] [i_4])), (((((/* implicit */int) (short)21847)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)21853)))))))));
                    arr_21 [i_3] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)185))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(var_1)));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21022))) > (var_1)))), (var_12)))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) : (((/* implicit */int) var_13))))));
}
