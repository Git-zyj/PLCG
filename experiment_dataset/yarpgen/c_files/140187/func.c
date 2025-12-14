/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140187
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (+(18446744073709551614ULL)));
                arr_6 [(short)18] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(134184960U)))) <= ((~(((((/* implicit */_Bool) 4041208545U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56153))) : (18446744073709551611ULL)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((unsigned char) min((var_6), (((/* implicit */long long int) var_10)))))), (var_4)));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_4)) ^ (1546827220)))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) - (3039796173955483071ULL)))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_15 ^= ((((/* implicit */long long int) min(((-(2635483549U))), (((/* implicit */unsigned int) (_Bool)1))))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2ULL)) ? (arr_3 [i_2] [i_2]) : (((/* implicit */int) var_7))))) : (((arr_0 [i_2]) >> (((((/* implicit */int) var_2)) - (1112))))))));
        arr_10 [8LL] [i_2] = ((/* implicit */unsigned short) arr_0 [i_2]);
    }
}
