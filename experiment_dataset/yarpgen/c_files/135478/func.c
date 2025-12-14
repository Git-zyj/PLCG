/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135478
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
    var_12 = ((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((unsigned char) (unsigned char)7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    arr_6 [i_0 - 1] [i_1] [(signed char)1] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (arr_5 [i_1])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1))))) != (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_2 [i_2] [7U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)0)))) : (arr_5 [i_1]))));
                    arr_7 [i_1] [i_1] [(short)12] = ((/* implicit */short) (((~((-(((/* implicit */int) (short)-32759)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 511U)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (short)-18))))) ? (((/* implicit */int) (short)25059)) : (arr_0 [i_2] [i_2 + 3])))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) | (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (signed char)0))))) | (((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)143))) : (var_4))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)22])))))));
                                arr_14 [0] [i_0 - 1] [(unsigned char)20] [(unsigned char)20] [i_3] [i_4] [0] |= ((/* implicit */int) (short)-9);
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)9)))) > (((((/* implicit */_Bool) (short)6)) ? (((/* implicit */unsigned long long int) 1924044066U)) : (288230358971842560ULL)))));
                                var_16 = ((/* implicit */unsigned long long int) min((arr_0 [i_4 + 2] [i_4 + 2]), ((((_Bool)1) ? (((/* implicit */int) (short)-23585)) : (((/* implicit */int) (short)11))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)0)))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) (short)-23566)))))))) > (((((/* implicit */_Bool) arr_8 [i_2 + 3] [i_0 + 1] [i_2 + 3] [i_1 - 1] [i_0 + 1])) ? ((~(0ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    arr_17 [i_1] [i_1] = (unsigned char)0;
                    var_18 = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (arr_16 [i_0 - 1] [i_1 + 1] [i_1 - 1]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 3; i_6 < 23; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            arr_23 [i_1] [i_6] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((18446744073709551613ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((8148066900523437543LL) >> (((((/* implicit */int) (signed char)-1)) + (13))))) << ((((~(((/* implicit */int) (short)-8694)))) - (8688)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (signed char)1)))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */int) (short)-6)) : (arr_18 [i_1] [i_1]))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [(unsigned char)20] [(unsigned char)20] [i_1] [i_1 - 1] [(_Bool)1])), (arr_1 [13U])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -536870912))));
}
