/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158571
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_10)) : (arr_1 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((long long int) arr_1 [i_1]));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min((var_3), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) >> (((-2058751798) + (2058751801)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) + (arr_0 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */int) (~(((((((/* implicit */int) (unsigned char)0)) > (var_4))) ? (min((arr_0 [i_1]), (((/* implicit */long long int) (unsigned char)252)))) : ((+(var_18)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_9 [i_2] [i_2]));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_10 [i_2]) : (arr_10 [i_2])));
    }
    /* LoopSeq 3 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_21 = ((/* implicit */int) arr_14 [i_3] [i_3]);
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) (-(-1792825523)))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_3]) : (arr_0 [i_3])))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (var_7) : (var_16)))))) && (((/* implicit */_Bool) arr_12 [i_3]))));
    }
    for (int i_4 = 3; i_4 < 8; i_4 += 1) /* same iter space */
    {
        var_23 ^= (-(((((/* implicit */_Bool) (unsigned char)0)) ? (var_1) : (((/* implicit */int) (unsigned char)238)))));
        var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_16) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 - 2] [8])))))) ? ((+(min((var_0), (arr_10 [(unsigned char)4]))))) : (((/* implicit */int) arr_18 [i_4] [8]))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 8; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) ((unsigned char) arr_19 [i_5]));
        /* LoopNest 2 */
        for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_6] [i_5]) != (((/* implicit */long long int) var_1)))))) : (var_17)));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) != (((/* implicit */int) (unsigned char)55))))))))));
    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */long long int) var_14)) : (var_17)));
}
