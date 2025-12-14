/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188879
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
    var_19 = var_14;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((((((/* implicit */_Bool) ((arr_2 [i_0]) ^ ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (-666206751) : (((/* implicit */int) arr_1 [(unsigned char)9]))))) : (arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] [(short)3] [i_1] = ((/* implicit */unsigned long long int) ((short) ((unsigned short) var_12)));
            arr_8 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) arr_4 [i_0]))), (min((arr_4 [i_0]), (((/* implicit */unsigned int) var_5))))))), (min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_14))))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) var_15)));
            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) arr_2 [0U]);
        }
        arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_0]))) <= (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (arr_6 [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_7))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        arr_18 [i_3] = ((/* implicit */short) min(((+(((/* implicit */int) arr_15 [i_3])))), ((+(((/* implicit */int) var_2))))));
        arr_19 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_3] [i_3])) > (((/* implicit */int) arr_16 [i_3] [i_3])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_22 [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
            arr_23 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_5))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            arr_26 [i_3] [i_5] = -666206740;
            arr_27 [i_3] [i_5] [(unsigned short)2] = ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_20 [i_5])), (min((arr_25 [i_5]), (((/* implicit */unsigned int) var_2)))))), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) var_18)) < (((/* implicit */int) var_9))))))));
            arr_28 [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) arr_20 [i_3]))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
        {
            arr_31 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_6])) ? (((/* implicit */unsigned long long int) (~(-666206752)))) : ((+(var_15)))));
            arr_32 [(unsigned char)5] &= ((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_6]);
        }
    }
    var_20 = ((/* implicit */unsigned char) var_2);
}
