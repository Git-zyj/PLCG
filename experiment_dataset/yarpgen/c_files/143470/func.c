/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143470
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (-((-(max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */short) (-(max((min((arr_1 [i_0] [i_0]), (var_6))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_11 [i_2] [i_2] [i_2 + 1] [i_2] = ((/* implicit */long long int) (-(min((((/* implicit */int) arr_10 [i_2] [i_2] [i_2])), (var_5)))));
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_16)))))) ? ((~(max((((/* implicit */unsigned long long int) var_16)), (arr_7 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_3 + 1])))));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */long long int) var_15);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_1] [i_1] [i_1])), (arr_9 [i_1] [i_1] [i_1] [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1]))) : ((~(arr_5 [i_1] [i_1])))));
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_4]))))), ((~(((((/* implicit */unsigned long long int) 1261732668)) - (var_11)))))));
        var_21 = ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8114))))) : ((-(arr_7 [i_4]))));
    }
    var_22 = ((/* implicit */short) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_11) : (6939172797181658242ULL)))) ? (min((var_14), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) var_10)))))))));
    var_23 = min((((((((/* implicit */_Bool) 2016856780)) ? (((/* implicit */unsigned long long int) var_15)) : (var_11))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (-1872572261))) - (14679))))), (((/* implicit */unsigned long long int) ((short) (short)-8114))));
    var_24 = ((/* implicit */long long int) (((+(((/* implicit */int) var_13)))) << (((((/* implicit */int) var_2)) - (4097)))));
}
