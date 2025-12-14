/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165591
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [(signed char)8] [(signed char)8] = ((((/* implicit */_Bool) 15638342319243576343ULL)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1)))));
                arr_5 [i_1] [i_1] [i_0] |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (-1)));
            }
        } 
    } 
    var_11 = ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6))))) ^ (((/* implicit */int) ((short) (~(var_5))))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((2147483638) - (((/* implicit */int) (short)-1))));
        var_12 ^= ((/* implicit */_Bool) arr_7 [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((unsigned long long int) min((var_1), ((signed char)15)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))))))))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))))) : (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1961321594373627006LL)))))), (min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (132120576ULL)))))));
        arr_13 [(signed char)6] |= ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_7)), (var_4))))) == (((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (4ULL))))));
        var_14 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))));
        arr_14 [(_Bool)1] = ((/* implicit */signed char) (-(min((arr_11 [i_3 - 1]), (arr_11 [i_3 - 1])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) ((18446744073709551615ULL) - (18446744073709551613ULL)))) ? (((/* implicit */int) arr_17 [i_4])) : ((-(((/* implicit */int) (signed char)3)))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) var_10)) ? (arr_16 [i_4]) : (arr_16 [i_4])))));
    }
}
