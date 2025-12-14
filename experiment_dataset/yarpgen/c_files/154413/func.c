/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154413
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (short)-5923)))) : ((~(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((var_13) | (1540481218U)))) ? (((((/* implicit */_Bool) var_7)) ? (15279908562836531033ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 &= var_4;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 2] [2U] [i_3 + 4] [i_3 + 4])) / (((/* implicit */int) (signed char)-53))))));
                                arr_13 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 2] [i_3] [i_3 - 1]))) & (4503599627370495ULL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((int) ((((/* implicit */_Bool) (unsigned short)2758)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-3488)))))));
                                var_22 = ((/* implicit */unsigned char) ((unsigned int) ((((var_15) == (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-3476)))))) : (4294967295U))));
                                var_23 = ((/* implicit */signed char) (!((((~(var_3))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_10 [i_1] [(unsigned short)2])) ? (11563391748507682744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5947))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65532)) << (((/* implicit */int) (unsigned short)6))))))) + (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)2))))))));
                    arr_14 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(signed char)2] [i_0]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_3 [i_0]))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65529)))))))) : (min((((/* implicit */int) ((short) (signed char)-69))), ((-(((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) == (((int) max((-3891181244110948270LL), (((/* implicit */long long int) 4294967295U)))))));
}
