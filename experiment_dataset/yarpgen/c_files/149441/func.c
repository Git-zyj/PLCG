/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149441
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
    var_11 = var_2;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_2);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_7);
            var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26013)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (208172230U)))))) ? ((-(((((/* implicit */_Bool) (unsigned short)26013)) ? (((/* implicit */int) (unsigned short)26013)) : (((/* implicit */int) (unsigned short)26013)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (33554432U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((((_Bool)1) ? (((/* implicit */int) (short)-14782)) : (((/* implicit */int) (signed char)48))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_13 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
            arr_8 [(_Bool)0] [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)39540));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_3]))));
        var_14 = ((/* implicit */unsigned short) var_4);
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        arr_14 [i_4] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_7), ((signed char)-64)))), (2125062065U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [(_Bool)1]))) : (((((unsigned int) (unsigned short)39546)) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4237))))));
        var_15 = ((/* implicit */unsigned int) var_4);
        arr_15 [i_4] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_4] [i_4]) : (var_9)))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26013)) ? (((/* implicit */int) arr_9 [i_4])) : (1566158367))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        var_16 = (_Bool)1;
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((785474112U) ^ (9U)))))))));
    }
}
