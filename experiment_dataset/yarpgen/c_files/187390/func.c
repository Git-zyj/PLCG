/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187390
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
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9870)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        var_20 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 814678039U))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 4294967289U))))) >> (((((/* implicit */int) var_6)) - (191)))))) && (((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */_Bool) 4294967289U);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) var_4)))))) ^ (((var_5) / (((/* implicit */unsigned long long int) 2U)))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_6)))) / (((/* implicit */int) (unsigned short)52501)))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)56354))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (((~(var_15))) > (((/* implicit */unsigned long long int) ((long long int) arr_7 [(signed char)10]))))))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = 67108863LL;
        arr_12 [i_2] [i_2] = 11753257335317260854ULL;
    }
    var_23 = ((/* implicit */short) (~(((/* implicit */int) var_18))));
}
