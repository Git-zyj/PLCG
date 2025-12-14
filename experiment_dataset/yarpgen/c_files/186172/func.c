/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186172
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((long long int) arr_2 [i_0] [i_0]))))));
        var_13 = ((/* implicit */short) min((var_13), (arr_1 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) var_0);
        arr_9 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)0)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_7);
            arr_16 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (unsigned char)72)))));
            arr_17 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_4))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_2])))))));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_5)));
        }
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [18LL])) ? (arr_5 [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (signed char)99)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2]))))))))));
    }
    var_17 = ((/* implicit */signed char) var_8);
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_8)) | (((/* implicit */int) (unsigned char)14)))), (((/* implicit */int) var_12))));
    var_19 = ((/* implicit */unsigned char) (_Bool)0);
    var_20 = var_9;
}
