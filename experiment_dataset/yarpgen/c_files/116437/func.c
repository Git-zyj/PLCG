/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116437
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (2289259956353267987ULL)))));
        var_13 = ((/* implicit */long long int) (((+(((unsigned long long int) 16157484117356283629ULL)))) / (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 545256218553588255ULL)) && (((/* implicit */_Bool) 545256218553588255ULL)))) || (((/* implicit */_Bool) (-(((((/* implicit */int) (short)25091)) * (((/* implicit */int) (short)-15514)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) arr_0 [(unsigned short)9]))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_1)))) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])))))))) || ((!(((/* implicit */_Bool) 4117444980682267597ULL))))));
        arr_7 [i_1 - 1] = ((/* implicit */unsigned short) arr_1 [i_1 - 1]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_16 = (+(((/* implicit */int) (short)15260)));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned char)96)) == (((/* implicit */int) var_5)))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) var_8)))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_4 + 1]))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (unsigned short)59894))));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)64))));
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            var_20 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) (unsigned short)43319)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_1)))) ? (607792284U) : (((/* implicit */unsigned int) var_10)))));
            var_21 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) arr_18 [i_5])), (arr_20 [i_5] [i_6] [i_6])))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((min((((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_6])) || (((/* implicit */_Bool) var_11))))), (var_9))), (((short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_1)))))))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 4) 
        {
            var_23 &= ((arr_22 [(_Bool)0] [i_7 + 3] [(_Bool)0]) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_22 [4ULL] [i_7 + 1] [4ULL])))));
            arr_26 [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_11)) | (arr_16 [i_5]))) ^ (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_6)))) : (min((((/* implicit */long long int) 32505856)), (arr_22 [i_5] [i_7 + 1] [i_7 - 1])))));
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        {
                            arr_35 [i_5] [i_7 + 1] [i_5] [i_9] [i_9 + 3] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_32 [i_7 - 1] [i_9 + 1] [i_8] [i_10 + 1] [(unsigned short)13]) : (arr_32 [i_7 + 2] [i_9 + 1] [i_5] [i_10 + 1] [i_10 + 2])))) & (min((545256218553588255ULL), (((/* implicit */unsigned long long int) arr_32 [i_7 + 3] [i_9 + 1] [i_8] [i_10 + 2] [i_10 + 2]))))));
                            arr_36 [i_5] [i_7] [i_8] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_5] [i_7 - 1] [i_8] [i_9 + 3] [i_10]))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_1))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) 2289259956353267987ULL)))))));
            arr_40 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((+(arr_18 [i_5]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) : (arr_25 [i_5])))))) ? (((max((0U), (((/* implicit */unsigned int) var_9)))) << (((((/* implicit */int) arr_39 [i_11] [i_5])) + (63))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_5] [i_5] [i_11])))));
            arr_41 [i_5] [i_11] = ((/* implicit */long long int) max(((~(((((/* implicit */int) (unsigned char)244)) * (((/* implicit */int) (signed char)-3)))))), (((/* implicit */int) ((signed char) (short)(-32767 - 1))))));
            var_26 &= ((/* implicit */_Bool) (-(var_6)));
            arr_42 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 5U)) | (arr_23 [i_5] [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) var_10)) | (var_6)))))) ? (((/* implicit */unsigned long long int) ((2155436570U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31726)))))) : ((((~(arr_23 [i_5] [i_11]))) << (((var_10) - (1900950674)))))));
        }
    }
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_3))));
    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((14329299093027284019ULL) == (4117444980682267577ULL)))), ((unsigned short)65511))))));
}
