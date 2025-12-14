/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187577
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46274))))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_12))) && (((/* implicit */_Bool) min((16883607465662056223ULL), (((/* implicit */unsigned long long int) var_4)))))));
        var_18 = ((((/* implicit */int) max((arr_1 [i_0]), (var_13)))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) - (22677))));
    }
    for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_5 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) arr_3 [i_1 - 2]);
        var_19 ^= (~(((/* implicit */int) (signed char)-112)));
        var_20 = (~(min((((/* implicit */int) (unsigned char)255)), (arr_4 [i_1 - 2] [i_1 - 2]))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_21 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)46256)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16883607465662056236ULL))) >> ((((-(((/* implicit */int) arr_0 [i_2])))) + (27522)))));
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(var_14)))))) || (((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned int) (unsigned short)19271)))), (((/* implicit */unsigned int) ((arr_4 [7] [i_2]) + (((/* implicit */int) arr_6 [(_Bool)1]))))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)19262)) >= (((/* implicit */int) (unsigned short)19552))));
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_10 [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_3]))) ? (1563136608047495373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763)))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) && (((/* implicit */_Bool) var_13))))), (((int) 0ULL))))) ? (((/* implicit */int) ((var_14) == (((/* implicit */long long int) min((var_12), (var_12))))))) : (((/* implicit */int) (signed char)0))));
    }
}
