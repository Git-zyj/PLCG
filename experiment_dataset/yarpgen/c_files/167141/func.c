/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167141
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
    var_10 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) -2030040498)) ? (((/* implicit */unsigned long long int) -2009350235)) : (0ULL))))), (((/* implicit */unsigned long long int) var_2))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_0))));
    var_12 |= ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) (unsigned char)42)) && (((/* implicit */_Bool) 0U)))) ? (-4611686018427387904LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */int) min(((unsigned char)182), ((unsigned char)129)))), (min((var_6), (((/* implicit */int) (unsigned char)201)))))), (((/* implicit */int) max((((((/* implicit */int) arr_0 [i_0])) > (var_6))), ((!(((/* implicit */_Bool) (signed char)115)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_3))));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 201326592)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (signed char)-4))))) - (min((((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))))), (((/* implicit */long long int) (short)8160))))));
                    }
                    for (long long int i_4 = 3; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
                        arr_15 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((arr_1 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0] [18LL] [i_4 - 2]), (((/* implicit */short) (signed char)112))))))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (-(2092373288298191482ULL)))) ? (((arr_1 [i_0]) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) arr_13 [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0] [7ULL])), (var_8)))) + (((/* implicit */int) (short)28597))))))))));
                        var_16 *= ((/* implicit */int) ((((((-4611686018427387904LL) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)))) - (65408))))) | (((/* implicit */long long int) min((((((((/* implicit */int) arr_3 [i_0] [i_1] [6LL])) + (2147483647))) << (((((((/* implicit */int) var_8)) + (11339))) - (23))))), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_5])) + (87))))))))));
                    }
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : ((-(var_6)))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)91)) | (((/* implicit */int) (unsigned short)4028))))) ? (min((((/* implicit */unsigned long long int) (short)32755)), (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (min((10453359645482845211ULL), (((/* implicit */unsigned long long int) arr_17 [i_2] [i_1]))))))) && (((max((((/* implicit */unsigned int) arr_0 [12LL])), (arr_17 [i_1] [i_1]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned short i_7 = 3; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_22 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_7] [(unsigned short)11] [i_7 - 2]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6]))) : ((-9223372036854775807LL - 1LL))))));
                    var_19 = ((/* implicit */unsigned short) ((min((((/* implicit */int) ((signed char) var_2))), (min((4194048), (((/* implicit */int) arr_3 [19] [19] [i_7])))))) / (((/* implicit */int) (unsigned char)214))));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)247))));
        var_20 = ((/* implicit */signed char) arr_18 [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
    {
        arr_27 [i_8] = ((((/* implicit */unsigned int) min((var_4), (((/* implicit */int) (signed char)-64))))) + (((arr_17 [12U] [i_8]) + (((/* implicit */unsigned int) var_6)))));
        var_21 = ((/* implicit */long long int) (!(((((/* implicit */long long int) 522240)) <= (7975347867357909530LL)))));
    }
    for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 4) 
    {
        arr_31 [i_9 - 3] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-13180))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_5), (((/* implicit */short) arr_29 [i_9 - 2] [i_9 - 2]))))) == (((((/* implicit */int) (!(((/* implicit */_Bool) (short)28597))))) & (((/* implicit */int) arr_30 [i_9]))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 2])) % (((/* implicit */int) arr_29 [i_9 - 4] [i_9 + 1]))))) ? (((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 4])) : (((/* implicit */int) (signed char)110))));
        var_24 = ((/* implicit */unsigned long long int) min(((unsigned char)182), (((/* implicit */unsigned char) (signed char)25))));
        var_25 = ((/* implicit */unsigned short) ((arr_30 [i_9 - 1]) ? (((/* implicit */int) arr_30 [i_9])) : (((((/* implicit */_Bool) max((arr_28 [i_9]), (7983128456246191461ULL)))) ? (((/* implicit */int) arr_30 [i_9 - 1])) : (((/* implicit */int) arr_30 [i_9 + 1]))))));
    }
}
