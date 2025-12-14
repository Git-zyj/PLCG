/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111229
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */_Bool) 14U);
                var_17 = ((/* implicit */int) (_Bool)1);
                var_18 = (((-(((unsigned long long int) var_3)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_5))));
                    var_20 = ((((/* implicit */_Bool) ((int) var_8))) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) arr_5 [19ULL] [(signed char)17])));
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_1 [(unsigned short)18] [i_1 - 1]) : (arr_1 [i_0] [i_1 + 2])));
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2]))));
                }
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7194917178879978004LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41570))) : (4230897713U)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) - (17317308137472ULL)))) ? (((/* implicit */unsigned int) var_14)) : (468120501U)))), (var_13)));
}
