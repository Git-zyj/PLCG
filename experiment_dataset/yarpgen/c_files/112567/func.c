/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112567
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
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_2] [0LL] [i_3] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 4])) ? (var_10) : (arr_4 [i_0 - 4]))));
                        arr_14 [0U] [i_2] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21989)) ? (((/* implicit */int) ((_Bool) (signed char)-20))) : (((/* implicit */int) ((signed char) (signed char)-20)))))) : (((min((-1LL), (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [0LL])))))));
                    }
                    for (long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38460))) + (arr_1 [i_0])));
                        arr_19 [i_0] [i_1] [(_Bool)0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (var_2)))) | ((-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7)))))));
                        arr_20 [16LL] = ((/* implicit */unsigned short) var_10);
                    }
                    for (short i_5 = 3; i_5 < 22; i_5 += 4) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] [i_2] [i_0] [i_5] [i_2] = ((((/* implicit */_Bool) var_0)) ? (-7637977601844477515LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        arr_24 [i_0] = ((/* implicit */unsigned int) (+(arr_0 [i_2])));
                    }
                    for (short i_6 = 3; i_6 < 22; i_6 += 4) /* same iter space */
                    {
                        arr_29 [i_6] [0LL] [0LL] [i_0] = ((/* implicit */short) (~(1792)));
                        arr_30 [i_0] [6LL] [i_2] [i_2] [i_6] = ((/* implicit */signed char) ((unsigned int) (!((_Bool)1))));
                        arr_31 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned short) ((min((arr_12 [i_0] [i_0] [i_0] [i_6 - 1] [i_6]), (((/* implicit */long long int) (_Bool)1)))) < ((+(672113109013331696LL)))));
                    }
                    arr_32 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_1] [i_2 + 1] [i_0])) * (((/* implicit */int) ((var_2) != (var_4)))))) > ((-(((/* implicit */int) var_18))))));
                }
            } 
        } 
        arr_33 [4U] = ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (var_9)))), ((+(var_0))))) > (((/* implicit */unsigned int) var_17)));
        arr_34 [i_0] [i_0] = (~(var_11));
    }
    var_20 = ((/* implicit */_Bool) var_16);
}
