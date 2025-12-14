/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139040
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551596ULL) ^ (14721317550692350117ULL)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_0])) > (((/* implicit */int) (short)-25397)))))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) ((short) var_6))), ((+(((/* implicit */int) (unsigned short)4585)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 13; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (((arr_19 [0ULL] [0ULL] [i_2] [i_5] [i_6 + 1]) << (((((/* implicit */int) var_0)) + (146)))))))) ? (min((((/* implicit */int) arr_7 [i_0] [i_0])), (0))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) var_7)))))))));
                                var_12 = ((/* implicit */signed char) ((int) var_2));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned int) max((var_9), (var_6)));
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (unsigned short i_8 = 3; i_8 < 21; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    var_14 += ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [3U] [i_8 + 1])) - (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (signed char)-66)) + (((/* implicit */int) arr_20 [i_7] [i_7])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [i_7] [i_7] [i_9] [i_9])))))));
                    arr_29 [i_7] [23] = ((/* implicit */short) (unsigned short)36768);
                    var_15 ^= ((/* implicit */unsigned int) var_2);
                    var_16 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_24 [i_8 + 3] [i_8 - 3] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36768))) : (arr_24 [i_8 - 2] [i_8 + 3] [i_8 - 3]))) < (arr_24 [i_8 - 3] [i_8 - 1] [i_8 - 3])));
                    var_17 &= ((/* implicit */short) (((~(arr_24 [i_8 + 1] [i_8 + 2] [i_8 - 3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 1]))))));
                }
            } 
        } 
    } 
}
