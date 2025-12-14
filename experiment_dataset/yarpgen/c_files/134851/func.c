/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134851
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (min(((-((-(-4298285193827371703LL))))), (((/* implicit */long long int) (-(((int) -3044909402428890805LL)))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_1 [i_0])))), (var_9)))) ? (((((long long int) arr_0 [i_0])) + (((/* implicit */long long int) ((unsigned int) var_1))))) : (((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)45)) >> (((((/* implicit */int) arr_1 [i_0])) - (46)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) + (3708247440U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
            arr_6 [i_1] = ((/* implicit */long long int) (-(var_9)));
            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned char)11] [i_1])) ? (((/* implicit */int) (short)9153)) : (((/* implicit */int) (short)9153))));
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 1642171348U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (4294967295U)));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_3 = 3; i_3 < 19; i_3 += 4) 
            {
                var_21 *= ((/* implicit */signed char) arr_10 [(signed char)4] [(signed char)4] [0ULL]);
                arr_11 [20LL] [20LL] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_3 - 2] [i_2] [i_3])) - (((/* implicit */int) arr_5 [i_3 - 3] [i_2] [(unsigned short)13]))));
                var_22 ^= (-(((/* implicit */int) arr_9 [i_3 - 2] [i_3] [14U])));
                var_23 = ((/* implicit */short) (signed char)7);
            }
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_3 [(signed char)10] [i_2]) : (arr_3 [14U] [14U])))))))));
            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) var_15);
        }
        arr_13 [i_0] = ((/* implicit */unsigned int) (unsigned short)65525);
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_25 -= ((/* implicit */_Bool) (-((-((-(((/* implicit */int) (unsigned short)65530))))))));
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65535))));
        /* LoopSeq 2 */
        for (long long int i_5 = 3; i_5 < 22; i_5 += 4) 
        {
            var_27 -= ((/* implicit */signed char) arr_14 [(short)22]);
            arr_19 [i_4] [i_4 + 1] [i_4] = ((/* implicit */short) min((((((((/* implicit */_Bool) 3072420032U)) ? (((/* implicit */long long int) arr_18 [i_4] [(_Bool)1])) : (arr_16 [i_5 - 3] [i_4]))) << (((/* implicit */int) (signed char)0)))), ((-(arr_17 [i_4] [i_5 + 1] [i_4 + 1])))));
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((_Bool) (short)29313)))));
            var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_14 [i_4]) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)14] [i_4])))))) ? (((/* implicit */int) (unsigned short)51955)) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) var_8)) ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [i_4])))));
            arr_20 [i_4] = ((/* implicit */int) var_11);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            arr_23 [i_6] [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_22 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) var_9)))));
            var_30 = ((/* implicit */short) var_3);
            arr_24 [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) (+((+((-9223372036854775807LL - 1LL))))));
            arr_25 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)51955)) != (((/* implicit */int) (signed char)-63)))) ? (arr_18 [i_4] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)22459)))));
        }
        var_31 = ((/* implicit */long long int) max((var_31), (min((max((arr_14 [4U]), (((/* implicit */long long int) arr_18 [8LL] [8LL])))), (8851885076206618796LL)))));
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65511)) & (((/* implicit */int) (unsigned short)0))));
}
