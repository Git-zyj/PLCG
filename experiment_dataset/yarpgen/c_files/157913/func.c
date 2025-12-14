/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157913
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) max((var_20), ((-(0)))));
        var_21 = ((/* implicit */unsigned int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (short)11393)))));
        var_22 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_18))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((0U) << (((((/* implicit */int) var_9)) - (40608))))))))));
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(0U)));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) (unsigned short)22618))));
                }
            } 
        } 
    }
    var_26 = var_12;
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 1634521916)), (var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48069)) ? ((~(((/* implicit */int) (unsigned short)3)))) : (((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                arr_17 [(_Bool)1] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) arr_6 [i_3] [i_3 + 3])))), ((-(((/* implicit */int) arr_6 [22] [22]))))));
                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((((/* implicit */int) max((var_13), ((unsigned short)4088)))) / (((/* implicit */int) (unsigned short)4088)))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-275926591) : (((/* implicit */int) arr_16 [16ULL]))))) ? (4294967295U) : (((/* implicit */unsigned int) ((var_5) & (((/* implicit */int) (unsigned short)4106))))))) - (4294967285U))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) var_19);
}
