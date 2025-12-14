/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154054
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
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((_Bool) (signed char)15))) / (((/* implicit */int) (_Bool)1)))), (min((var_3), (var_4)))));
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 = ((/* implicit */_Bool) ((((min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (signed char)0)) ? (var_2) : (var_2))))) + (9223372036854775807LL))) >> (((/* implicit */int) var_9))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [(_Bool)1] &= ((/* implicit */short) ((unsigned char) var_4));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(short)12]))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) (signed char)-20))))) / ((+(((/* implicit */int) (signed char)20))))))) || (((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20)))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_3])) & (((/* implicit */int) (signed char)19)))))));
        var_20 = ((/* implicit */unsigned char) var_1);
        arr_12 [i_3] &= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
        var_21 = ((/* implicit */_Bool) (~(var_11)));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) max((((signed char) var_1)), (((/* implicit */signed char) var_5))))) >> (((/* implicit */int) var_13))));
        var_22 += ((/* implicit */unsigned long long int) -6160033477572495815LL);
    }
    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_7 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) (short)-17657))))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-21))))))) ? ((+(((((/* implicit */int) var_7)) * (((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_9))))) ? (min((arr_18 [i_5]), (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_5 - 1]))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((7340032U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) : ((~(((/* implicit */int) max((((/* implicit */short) var_9)), (arr_6 [(short)6] [4ULL]))))))));
        arr_19 [3U] [7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_5 + 1]))))) * (min((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_12))))));
        var_25 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(var_11)))) ? (min((var_3), (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_8 [i_5 - 2]))))));
        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_5]))));
    }
}
