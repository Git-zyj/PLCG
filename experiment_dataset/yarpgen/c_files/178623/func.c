/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178623
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_4))))) ? (var_13) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))) ? (2181843386368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (((((/* implicit */_Bool) 167319576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (18446741891866165243ULL)))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) -167319577)) : (2181843386373ULL)))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (2181843386386ULL)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        arr_12 [i_1] [(unsigned char)19] [i_1] = ((/* implicit */unsigned short) (+(((arr_9 [i_4] [i_1] [i_3] [i_2] [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446741891866165229ULL))))))));
                        arr_13 [2ULL] [2ULL] [i_2] [i_1] [2ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_16)))))))));
                        var_21 = ((/* implicit */_Bool) 167319569);
                        arr_14 [i_1] [i_2] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) - (-167319585)))), (max((((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_4]))))), (var_14)))));
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 66062039)))))))), ((~(var_13)))));
                        arr_17 [i_1] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)47640)))) : (var_13))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)7349)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) < (arr_19 [i_1] [i_1]))) && (((/* implicit */_Bool) (-(arr_19 [i_1] [i_1]))))));
                        var_24 *= ((/* implicit */unsigned short) ((max((min((arr_18 [i_1 - 1] [(unsigned short)15] [i_1 - 1] [(unsigned short)15] [i_6] [(unsigned short)15]), (var_3))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)8160))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8195147223248736848ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37514))))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        var_25 = ((/* implicit */signed char) ((short) (signed char)-114));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (~((-(arr_19 [i_7] [i_7]))))))));
        var_27 = ((/* implicit */signed char) 4294967289U);
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_28 = ((/* implicit */short) 18446741891866165229ULL);
        var_29 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-16384))));
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) var_7))));
        var_31 = ((/* implicit */unsigned long long int) ((((((arr_6 [i_8]) + (2147483647))) >> ((((+(arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) - (3288192706360773130ULL))))) * (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_8] [i_8]))))), (var_16)))));
    }
}
