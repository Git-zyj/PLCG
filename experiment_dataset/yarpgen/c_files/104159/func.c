/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104159
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (_Bool)1))));
        var_17 = ((/* implicit */unsigned int) (-(((unsigned long long int) arr_0 [i_0]))));
    }
    for (long long int i_1 = 4; i_1 < 9; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((unsigned long long int) var_3)) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)14125))))))))));
        var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (var_3)))) && (((/* implicit */_Bool) 14LL)))), ((!(((/* implicit */_Bool) (short)-32760))))));
        var_19 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775789LL)) ? (var_15) : (((/* implicit */unsigned long long int) 9223372036854775789LL))))) ? ((-(((/* implicit */int) (short)14125)))) : (((/* implicit */int) ((_Bool) 7080374729353632004ULL))))) <= (((/* implicit */int) (short)-14141))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_4 [i_1]))))) ? (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_4 [i_1])), (6558444428268828608ULL))))) : ((-(((((/* implicit */int) (short)4095)) << (((11138223839047957115ULL) - (11138223839047957106ULL)))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_9 [i_2 + 2] [i_2]));
        arr_10 [i_2] = ((/* implicit */short) ((arr_8 [i_2 + 2]) ? (1073741823ULL) : (0ULL)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (arr_7 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_3] [i_3])))) : ((~(9223372036854775789LL)))));
        var_21 = ((/* implicit */short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-14999))))) - (arr_13 [i_3])))));
        var_22 = ((/* implicit */unsigned long long int) (short)-16762);
    }
    var_23 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        arr_19 [i_4] [4LL] = (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8065232235494505788ULL))));
        arr_20 [i_4] = -9223372036854775783LL;
    }
    for (short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_24 -= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_22 [22ULL])))));
        var_25 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_5])) | ((~(((/* implicit */int) (short)14999))))));
        var_26 = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((unsigned short) arr_21 [i_5] [i_5]))))) != (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)15)) && (((/* implicit */_Bool) arr_22 [i_5])))) && (((/* implicit */_Bool) (short)(-32767 - 1))))))));
    }
}
