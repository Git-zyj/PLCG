/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107057
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */signed char) (unsigned char)128);
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (short)13603)) + ((-(((/* implicit */int) (short)13603)))))) % (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        arr_14 [i_2] [11ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 273804165120ULL)))))) <= (min((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12720))) : (17506568590514310437ULL))), (((/* implicit */unsigned long long int) min(((_Bool)1), (arr_12 [i_2]))))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_4))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) 1048575ULL);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (unsigned char)128))));
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                            var_20 = ((/* implicit */long long int) var_0);
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)105)), ((short)-5743)))))))));
                        }
                        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            arr_21 [i_0 + 1] [i_1] [i_2] [i_1] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) min((1892357947), (((/* implicit */int) var_3))))) / (((2685857481U) * (((/* implicit */unsigned int) 1391144067))))))) ? (((/* implicit */int) arr_18 [i_6 - 1] [(unsigned char)9] [(unsigned char)9] [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_0 - 1] [i_1] [i_0] [i_0] [i_6 + 1] [i_4] [i_0])) : (((/* implicit */int) (short)9097))))));
                            arr_22 [i_0 - 2] [i_0] [i_0] [(signed char)7] [i_0] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 1792)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned short)65535)))))) | (((/* implicit */int) (signed char)32))));
                            arr_23 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 8582267460587335509LL)) && (((/* implicit */_Bool) (unsigned char)64))));
                            var_22 *= ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)0))))) : (4ULL)))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max(((signed char)31), (var_3))), ((signed char)-1)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)0))));
                            var_24 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 3143821563U)) ? (((/* implicit */unsigned int) -1792)) : (arr_26 [i_0 - 1] [i_1]))));
                            arr_27 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [10ULL])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0 - 2] [i_0 - 2])), ((unsigned short)60276)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])))))));
                            arr_28 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (3239593632U)))), (min((((/* implicit */unsigned long long int) var_13)), (var_9)))))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (var_3)))))))));
                            arr_29 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [(short)8] [(unsigned short)11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) arr_3 [i_4] [i_2]))))) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) (signed char)10)))) : (((/* implicit */int) var_13))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) (_Bool)0);
    var_27 = ((unsigned char) var_5);
}
