/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128680
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
    var_16 ^= ((/* implicit */int) min((var_14), (((/* implicit */unsigned int) (unsigned short)255))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)255), (((/* implicit */unsigned short) arr_5 [i_1])))))) < (((((var_9) ^ (((/* implicit */unsigned long long int) var_5)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39891))))))))));
                                arr_12 [i_4] [i_3] [i_0] [i_1] [2U] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18710)) ^ (((((/* implicit */_Bool) var_9)) ? (1825492434) : (((/* implicit */int) arr_2 [i_0 + 2]))))));
                                var_18 |= ((/* implicit */short) ((((((((/* implicit */_Bool) 551262559)) || (((/* implicit */_Bool) 0U)))) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))) / (max((2147483648U), (((/* implicit */unsigned int) (short)25534)))))) : (((((/* implicit */_Bool) var_3)) ? (min((var_0), (((/* implicit */unsigned int) var_7)))) : (min((arr_0 [i_1]), (var_11)))))));
                                var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) ((551262567) == (-1949638871)))))), (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (7168U)))))) + ((+(max((((/* implicit */unsigned long long int) var_10)), (var_9))))));
                    arr_13 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((3028642257U) + (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (var_11))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32498)) : (((/* implicit */int) var_7))))) * ((-(var_11)))))));
                    arr_14 [i_0] [i_1] [i_2 - 3] [i_2 - 3] = max((((/* implicit */int) arr_5 [i_0])), (((((/* implicit */int) (short)-29068)) / (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 2028225572927781357ULL))))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */short) max(((-(var_3))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (11631053027636443862ULL)))));
    }
    var_21 += ((/* implicit */unsigned short) var_13);
}
