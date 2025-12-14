/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122383
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) + (9874104343618745749ULL)))) ? (var_4) : (((-1467240579) | (((/* implicit */int) var_8))))))) ^ (max((((/* implicit */long long int) (unsigned short)32601)), (1022256425987424343LL)))));
    var_16 *= ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) 8572639730090805866ULL)) ? (((/* implicit */int) (_Bool)0)) : (var_12)))), (var_2))) > (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_18 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_1 + 1]))) > (0U))))) >= (((long long int) var_6))))) | (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (-365535655) : (((/* implicit */int) var_11))))));
                        var_19 &= ((/* implicit */short) min((((/* implicit */long long int) arr_10 [i_3] [i_3])), (arr_2 [i_0])));
                    }
                } 
            } 
        } 
        var_20 *= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)127))))))) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_4 [(_Bool)1] [i_0] [(_Bool)1])) - (83)))))));
        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (0)))) ? (min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)231)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    }
    for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        var_22 += ((/* implicit */int) arr_3 [i_4 + 1]);
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)0)) : (1778416929)))))) : (15565196770131037102ULL)));
    }
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)22)) | (((/* implicit */int) (short)-23))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (min((var_5), (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5))))))))));
}
