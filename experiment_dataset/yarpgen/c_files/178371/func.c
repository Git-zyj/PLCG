/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178371
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
    var_15 = ((/* implicit */short) ((signed char) ((unsigned char) max((((/* implicit */short) (unsigned char)202)), (var_4)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned char)222)) < (((/* implicit */int) (signed char)-120)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0]))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_4))) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_5 [i_1])))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned char) ((_Bool) (-((+(((/* implicit */int) var_11)))))));
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) var_5)))))) <= (((/* implicit */int) arr_9 [i_2]))));
        }
        for (long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) % (5228923241256706256LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52134)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (signed char)25)))))))));
            var_18 = ((/* implicit */signed char) ((arr_0 [i_1 + 4]) ? (((/* implicit */int) ((arr_0 [i_1 - 2]) || (arr_0 [i_1 - 1])))) : (((/* implicit */int) ((short) arr_0 [i_1 - 2])))));
            arr_16 [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)75)) + (((/* implicit */int) (unsigned short)20000))));
            var_19 = ((/* implicit */short) ((((/* implicit */int) var_11)) * (((/* implicit */int) (short)18713))));
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) arr_12 [i_3] [i_1 + 4]))));
        }
        var_20 = ((/* implicit */unsigned int) ((((arr_6 [i_1]) != (arr_6 [i_1]))) ? (((/* implicit */int) arr_0 [6ULL])) : (((((/* implicit */_Bool) 1129078783U)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (unsigned char)81))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned short)22914)) + (((/* implicit */int) (short)19936)))) * (((/* implicit */int) arr_0 [i_1 + 3])))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1 + 3] [i_1 + 2]))) < (((arr_6 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))))))));
        arr_18 [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (var_12) : (((/* implicit */unsigned long long int) ((arr_0 [i_1 + 4]) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2])))))));
    }
}
