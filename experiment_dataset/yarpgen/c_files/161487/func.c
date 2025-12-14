/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161487
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_4)) + (18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))) - (arr_2 [i_1])));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] [(unsigned char)3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? ((-(((((/* implicit */_Bool) arr_9 [i_0] [1] [1] [i_1] [1] [i_0])) ? (arr_10 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) -1107079064)) * (arr_12 [i_0] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7]))) < (((/* implicit */unsigned long long int) arr_1 [i_3]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (-((+(-8397218028158208425LL)))));
    var_15 = ((((/* implicit */_Bool) var_6)) ? (max((((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (18446744073709551615ULL))))) : ((+(((unsigned long long int) 12717186387533596816ULL)))));
}
