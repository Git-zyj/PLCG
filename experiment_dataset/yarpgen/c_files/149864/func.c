/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149864
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) var_13))));
        var_21 = ((/* implicit */unsigned int) var_8);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)32434)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (arr_4 [i_1]))))) : (((((/* implicit */_Bool) 4294967295U)) ? (7814648097744119938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) var_5);
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) 4294967295U);
                        arr_17 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3] [i_4]))));
                        var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)63751)) ? (7758315679145480205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_9))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))))))));
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1])))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (unsigned short)10611)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */int) var_15);
        arr_21 [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
        var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [(unsigned short)4]))));
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_14)) ^ (var_8))))));
    }
    var_31 = ((/* implicit */_Bool) ((long long int) (unsigned char)98));
    var_32 = ((/* implicit */unsigned int) var_0);
}
