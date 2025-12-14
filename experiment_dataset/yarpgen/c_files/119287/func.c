/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119287
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 4])) ? (((long long int) max((arr_0 [i_0]), (((/* implicit */long long int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_6))))));
        arr_4 [(unsigned short)6] [i_0] = ((/* implicit */signed char) ((((var_3) - (arr_0 [i_0 - 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) max((var_6), (arr_2 [i_0 + 1])))))));
        var_17 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (var_8)))) ? (((var_10) & (var_3))) : (((/* implicit */long long int) var_16)))), (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((var_9) - (1489231913102930030LL))))) : ((+(arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) arr_6 [i_1]))));
        var_18 ^= ((/* implicit */long long int) ((unsigned int) var_15));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 8; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2] [i_2]))))) < (((var_13) << (((arr_15 [i_2] [i_2]) - (2023520495185621995LL))))))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [i_3])))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) | (arr_1 [i_1] [9LL]))));
    }
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_19 [6LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_5] [i_5])), (arr_17 [i_5])))) ? ((+(var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) & (var_9)));
        arr_20 [(unsigned short)18] = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((arr_16 [i_5]), (((/* implicit */unsigned short) var_2))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [i_5]) % (arr_17 [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */long long int) var_16)) ^ (arr_17 [i_5])))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (max((((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) (((+(var_14))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1]))))))))));
                    arr_25 [i_5] [i_6] [i_7 + 2] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) ((signed char) arr_21 [i_5]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) / (3505059355769776447ULL)))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_13)) >= (var_1)))) << (((/* implicit */int) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) > (((((((/* implicit */_Bool) (unsigned char)255)) ? (3505059355769776447ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23302))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
    var_24 = ((/* implicit */int) var_2);
    var_25 = ((/* implicit */int) ((long long int) var_11));
}
