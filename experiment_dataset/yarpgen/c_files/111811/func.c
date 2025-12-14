/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111811
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
    var_19 = ((/* implicit */signed char) ((min((((/* implicit */int) var_11)), ((+(((/* implicit */int) var_10)))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_11))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)74)) | (((/* implicit */int) var_0))))))))));
    var_20 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_10), (((/* implicit */short) (signed char)-113))))) ? (((/* implicit */int) min(((unsigned short)1023), (((/* implicit */unsigned short) (short)1))))) : (((/* implicit */int) var_14))))));
    var_21 = ((/* implicit */signed char) var_17);
    var_22 ^= ((signed char) (short)0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_23 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)2] [i_0]))) & (9195952869753915525ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-10)) ? ((-(((/* implicit */int) (unsigned short)13134)))) : (((/* implicit */int) arr_2 [(short)9])))))));
        var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (3725492172U) : (var_2)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)-2)) ^ (((/* implicit */int) (unsigned short)51743))))))) ? (((/* implicit */unsigned int) ((arr_3 [i_2]) ? (((/* implicit */int) arr_5 [(unsigned short)6] [i_1] [i_1])) : (((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned int) ((unsigned short) arr_0 [i_2]))), (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (569475134U))))))))));
                    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((!(arr_3 [i_1]))), ((!(((/* implicit */_Bool) arr_7 [(signed char)8])))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)2)) > (((/* implicit */int) arr_4 [i_0] [i_1]))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 536870911U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)17), (arr_7 [i_0]))))) : (3758096384U)))) : (((((((/* implicit */_Bool) (signed char)49)) ? (7097962024766512686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9756)))))));
    }
}
