/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149307
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_3 [i_0])))) ? (max((arr_1 [i_0]), (arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)225)) > (((/* implicit */int) (unsigned char)205)))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) arr_7 [(short)17] [i_1])) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) <= (var_7))))))) | (((((/* implicit */_Bool) (unsigned char)30)) ? (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)237)))))))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_7 [i_1] [i_1]))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (unsigned char)225);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */int) var_7);
        arr_12 [i_2] = ((/* implicit */unsigned char) (~(((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_13 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_4)) ^ (arr_14 [i_6] [i_4]))));
                        arr_24 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28475)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((signed char) (short)-29854))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) arr_17 [i_3] [i_4] [i_3])) : (arr_14 [i_3] [i_3])))))));
                    }
                } 
            } 
        } 
        arr_25 [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >= (((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */int) var_10)) : (-1257074469))))));
        var_14 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned char)111), ((unsigned char)31)))), (((((/* implicit */_Bool) arr_15 [i_3] [0LL])) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4)))))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_3] [i_3])) == (((/* implicit */int) (unsigned char)30))))) : ((~((-2147483647 - 1))))))) ? (max((((/* implicit */unsigned long long int) var_4)), (((var_3) % (((/* implicit */unsigned long long int) arr_14 [i_3] [i_3])))))) : (((((_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_3])) & (var_3)))))));
    }
    var_16 = ((/* implicit */unsigned int) min((var_16), (var_9)));
    var_17 = ((/* implicit */signed char) var_1);
    var_18 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) var_7)))) >= (((/* implicit */unsigned long long int) var_1)))) ? (var_0) : (((/* implicit */unsigned long long int) var_7))));
    var_19 *= ((/* implicit */unsigned char) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_2)), (var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
}
