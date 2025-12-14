/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108627
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
    var_20 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_21 *= ((/* implicit */signed char) ((_Bool) var_14));
                        arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) >= ((((_Bool)1) ? (1993270229) : (((/* implicit */int) (unsigned short)45922)))))));
                        var_22 = ((unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (-1141695361) : (1710755877)));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 7; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (14121244742467291471ULL)))))))));
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0] [10ULL] [i_2])) : (((/* implicit */int) var_7))))))));
                        arr_11 [i_4 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_15)))))))));
                        arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [(short)5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ ((-(arr_10 [i_0] [(short)3] [(short)3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 1) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned char) var_15);
                        arr_15 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_19))))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (var_4))))), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (var_16) : (2006164865U)))))));
                    }
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */unsigned int) 1141695360)) : (2695488391U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) << (((((unsigned long long int) ((-224154075) ^ (((/* implicit */int) (_Bool)1))))) - (18446744073485397532ULL))))))));
                    var_27 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
