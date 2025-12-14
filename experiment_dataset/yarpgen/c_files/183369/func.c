/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183369
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
    var_16 = ((((/* implicit */_Bool) (unsigned short)65516)) && (((/* implicit */_Bool) 17592186044415ULL)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) min((max((-536870912), (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0)))))), (((((/* implicit */_Bool) min((17592186044416ULL), (((/* implicit */unsigned long long int) (unsigned char)44))))) ? ((~(((/* implicit */int) (unsigned char)211)))) : (112742992)))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned short) (short)0)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)37773)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (short)0)))) <= (((((/* implicit */int) (signed char)-112)) - (((/* implicit */int) (unsigned char)212))))));
            arr_7 [i_2] = ((/* implicit */unsigned int) var_3);
        }
        var_19 = ((/* implicit */short) ((arr_6 [(unsigned char)7] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [(unsigned short)6] [(unsigned short)6])))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_5 [i_1] [9LL])))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 2431010856U)) ? (18446726481523507209ULL) : (((/* implicit */unsigned long long int) 3518873680U))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_1 [i_1])))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 111935632409404702LL)) ? (3518873666U) : (((/* implicit */unsigned int) var_15))))) < (arr_12 [i_5])));
        var_22 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_5])) | (((/* implicit */int) (signed char)60))))) ? (((((/* implicit */int) arr_15 [i_5])) << (((((/* implicit */int) arr_14 [i_5])) - (83))))) : (((int) 1863956439U))))), (min((((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) : (arr_12 [i_5]))), ((+(var_5)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        arr_19 [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (min((((/* implicit */unsigned int) (short)0)), (3254951398U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6]))))) | (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), ((+(((/* implicit */int) arr_14 [i_6])))))))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (_Bool)1))));
        arr_20 [i_6] [i_6] = 0;
    }
    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_21 [i_7] [i_7])) ? (3516581147U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7 + 2] [i_7]))))) ^ (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) -1)) : (2431010829U)))))));
        arr_25 [2U] [i_7] = ((/* implicit */int) (((((!(((/* implicit */_Bool) -112742999)))) ? (arr_23 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4294967289U)))))) == (((((/* implicit */_Bool) arr_23 [i_7 + 4])) ? (arr_23 [i_7 + 4]) : (arr_23 [i_7 + 2])))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                {
                    arr_31 [i_7] [i_8] [i_9] [i_7] = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)180)), ((unsigned short)0)))) != (((/* implicit */int) (_Bool)1)))) ? (((2431010865U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((arr_21 [i_9 - 1] [i_8]), (((/* implicit */unsigned long long int) arr_29 [i_9] [i_9] [i_9] [i_9])))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_29 [i_7] [i_8] [i_8] [i_7 - 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7 + 2] [i_8] [i_9 + 2]))))))) * (arr_29 [i_7] [i_7 - 1] [i_7] [i_7 + 1])));
                }
            } 
        } 
    }
}
