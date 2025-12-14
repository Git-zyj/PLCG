/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177784
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
    var_17 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [i_0 - 1] = ((/* implicit */signed char) max((((((/* implicit */int) var_16)) * (((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned char)99))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((short) arr_10 [i_0 - 1] [i_0 - 1] [i_3])))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32256)) * (((/* implicit */int) var_13)))))));
                        arr_11 [i_0 - 1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(1345654719U)));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_16 [(unsigned short)7] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-22431)) < (((((/* implicit */int) (!((_Bool)0)))) >> (((((var_2) ? (2199023251456LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_4]))))) - (35LL)))))));
                        arr_17 [i_4] [(signed char)7] [(signed char)7] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [(unsigned char)0]))))));
                        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [1U])) + (((/* implicit */int) arr_0 [i_0 - 1]))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_4])));
                        var_23 = ((/* implicit */short) (-(arr_4 [(unsigned short)9])));
                    }
                    for (short i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(signed char)6] [i_0 - 1] [i_0 - 1] [i_1])) ? (((/* implicit */int) max((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 - 1]), (var_0)))) : ((+(((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5 - 1])))))))));
                        var_25 = max((((long long int) ((((/* implicit */_Bool) 0)) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((/* implicit */long long int) (unsigned short)512)));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_0)))))))) ? (max((((((/* implicit */_Bool) var_14)) ? (7857701713025521266LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_5 - 1])) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) arr_19 [i_0 - 1] [i_1] [5ULL] [i_5]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) var_10)))))));
                    }
                    var_27 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) max(((short)22431), (((/* implicit */short) (unsigned char)74))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((13370867322246231975ULL) - (((/* implicit */unsigned long long int) -1)))))));
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5983))))) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255)))) : ((+(((/* implicit */int) (unsigned short)27095))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_30 += ((/* implicit */unsigned short) ((_Bool) (short)22431));
}
