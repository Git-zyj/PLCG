/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146858
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
    var_19 = ((/* implicit */signed char) var_14);
    var_20 = var_15;
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_5 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [12ULL])))));
            arr_7 [i_0] = arr_5 [i_1] [i_1] [i_0];
            arr_8 [i_0] [i_0] = arr_2 [i_0];
            arr_9 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)43))));
        }
        arr_10 [i_0] |= ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        arr_15 [6ULL] = ((/* implicit */unsigned long long int) var_6);
        arr_16 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)58918), (((/* implicit */unsigned short) var_4))))) == (((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_4)))))))) >= (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_5 [i_2] [(signed char)16] [i_2])) ? (arr_14 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2])))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_20 [i_3] = ((/* implicit */signed char) ((_Bool) ((signed char) var_4)));
            arr_21 [i_2] = min(((-(arr_4 [i_2] [i_3]))), (min((((/* implicit */unsigned long long int) arr_18 [i_3] [i_2])), (var_1))));
            arr_22 [i_2] [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (10021805844416894440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58934)))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_29 [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 1260980201070646435ULL)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)0)), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)29)))))))));
            arr_30 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)5)), (((var_17) ? (((/* implicit */int) (unsigned short)48108)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        arr_31 [i_4] = ((/* implicit */signed char) var_1);
    }
}
