/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183700
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        var_10 = ((/* implicit */long long int) min((var_10), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 863964073722262037ULL)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0] [(short)8]), (((/* implicit */short) (unsigned char)169)))))) | (arr_1 [17])))))));
    }
    for (unsigned char i_1 = 3; i_1 < 7; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) var_4);
        var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 4008892223443883125LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19150))))) << (((((1545973197) >> (((var_3) - (1517226978U))))) - (94342))))))));
        var_12 = var_0;
    }
    for (unsigned char i_2 = 3; i_2 < 7; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 219441496U)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (unsigned char)203))));
        var_13 = ((/* implicit */int) var_2);
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_2 + 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [6] [6])) ? (((/* implicit */int) ((unsigned short) (signed char)45))) : (max((var_5), (((/* implicit */int) arr_5 [i_2]))))))) ? ((+(7119460933121086967ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [(unsigned short)8])) + (((/* implicit */int) arr_3 [8] [i_2 + 2])))))));
            arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43707))))) ? (2058602189) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3]))) > (arr_1 [i_2]))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_2] [(unsigned char)20])), (arr_2 [i_2])))) ? ((+(arr_9 [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_8 [i_2]))))))));
            var_14 = ((/* implicit */long long int) (((((+(((/* implicit */int) (signed char)-37)))) + (2147483647))) << ((((+(((/* implicit */int) arr_10 [i_2 - 2] [i_3])))) - (20733)))));
        }
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1LL)) | (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2]))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)16] [i_2]))) : (max((((/* implicit */long long int) (+(var_7)))), (arr_1 [21ULL])))));
        var_16 = (short)7936;
    }
    var_17 = ((/* implicit */signed char) -3333401647592161592LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_4 = 2; i_4 < 21; i_4 += 3) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) var_6);
        var_18 = ((/* implicit */int) (_Bool)1);
        var_19 = ((((((/* implicit */int) (unsigned char)123)) << (((((/* implicit */int) arr_2 [i_4])) - (45590))))) - (((var_4) ? (arr_17 [i_4 - 1]) : (((/* implicit */int) arr_2 [i_4])))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-7157312609784156045LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) 1740810978)))))));
            var_21 = ((/* implicit */unsigned int) var_5);
        }
        for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_22 = ((/* implicit */_Bool) (+((+(var_2)))));
            arr_24 [i_4 - 1] [i_6] = ((/* implicit */unsigned short) ((977847848U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4 + 1] [i_6])))));
            var_23 = ((/* implicit */_Bool) (unsigned char)121);
            arr_25 [i_4] [i_6] = ((/* implicit */short) arr_20 [i_6] [i_6] [i_4 - 1]);
        }
        var_24 = ((/* implicit */signed char) 3363300512U);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        arr_29 [i_7] = ((/* implicit */unsigned int) (+(arr_1 [i_7])));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_20 [i_7] [i_7] [i_7]) : (arr_20 [i_7] [i_7] [i_7])));
    }
    var_26 = ((/* implicit */long long int) ((((var_4) || (((/* implicit */_Bool) var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))));
    var_27 = ((/* implicit */long long int) var_7);
}
