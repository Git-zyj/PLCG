/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104771
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
    var_13 = ((/* implicit */unsigned long long int) (unsigned short)62378);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) var_9);
        arr_2 [(signed char)16] [i_0] = ((/* implicit */short) arr_1 [(signed char)12] [(signed char)12]);
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_0))))));
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) var_3)), (var_10))), (((/* implicit */unsigned long long int) var_4)))))));
        arr_5 [i_1] = min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1 - 3] [(short)1]))))), (min((((/* implicit */unsigned int) (~(2147483647)))), (((((/* implicit */_Bool) -1110284465)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_17 = ((/* implicit */long long int) max((((((/* implicit */int) arr_3 [i_1] [i_1])) & ((+(((/* implicit */int) arr_4 [i_1] [i_1])))))), ((+(((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1]))))));
        var_18 ^= ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_19 = ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-432)) && (((/* implicit */_Bool) -2147483639))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11))))) & (((/* implicit */unsigned int) (-((+(((/* implicit */int) (signed char)12)))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_2])))))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned short) ((arr_7 [i_2 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766)))));
            arr_12 [i_2 + 1] [i_2] = ((/* implicit */signed char) var_8);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-439)) ? (((/* implicit */int) (signed char)-117)) : (2147483641))))));
            var_21 = arr_9 [i_2 - 1] [i_2 - 1] [i_2];
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    {
                        var_22 ^= -1420198339;
                        arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_6])) : (((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_5]))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [i_2] [i_6])) - (((/* implicit */int) arr_9 [i_2] [i_4] [i_6])))))));
                        arr_22 [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)120)) && (((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 - 1] [i_6] [i_2]))));
                    }
                } 
            } 
            arr_23 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? ((+(((/* implicit */int) (signed char)110)))) : (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (_Bool)0)) : (1246046371)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_26 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_2 - 2] [i_2 + 1] [i_2])) * (((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 3] [i_2]))));
            arr_27 [i_2] = ((/* implicit */unsigned int) (signed char)-124);
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-50)) ? (((unsigned long long int) -1492661748)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)429)))));
            arr_28 [i_2] [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_2 - 2])) && (((/* implicit */_Bool) arr_15 [i_2 + 1]))));
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (-2038285867743447140LL)))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_7] [i_2]))) : (2337257796894965612LL))) : (((/* implicit */long long int) arr_24 [i_2 + 1] [i_7])));
        }
    }
}
