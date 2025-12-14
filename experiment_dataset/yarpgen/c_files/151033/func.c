/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151033
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
    var_11 = ((/* implicit */signed char) 2130706432LL);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((413672061U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)30262))))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3306257765U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26459))) : (2817757821U)))) ? (((((/* implicit */_Bool) (unsigned short)18677)) ? (((/* implicit */int) (short)-8149)) : (((/* implicit */int) (short)8149)))) : (((/* implicit */int) (signed char)31))))));
        arr_2 [i_0] = ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [2ULL])) : (((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */short) ((unsigned int) ((short) ((((/* implicit */int) (short)8149)) % (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((((((((/* implicit */int) (short)-8149)) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) arr_1 [16U] [i_1])))) - (3709398))))), (((/* implicit */int) ((((/* implicit */int) ((short) arr_4 [i_1]))) != (((/* implicit */int) arr_0 [i_1])))))));
        var_15 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_16 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)11])) ? (((/* implicit */int) (short)8149)) : (((/* implicit */int) arr_5 [i_2]))))))))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [2ULL])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2]))))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 7; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_12 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-8149)) && (((/* implicit */_Bool) (short)6421)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [(short)13])))) * (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10)))))))));
                                var_19 = ((/* implicit */unsigned short) (((-(((10987329359700212505ULL) * (arr_13 [i_3] [i_3] [i_5] [i_6]))))) / (((/* implicit */unsigned long long int) ((unsigned int) ((-6230248623005554151LL) != (((/* implicit */long long int) ((/* implicit */int) (short)8149)))))))));
                                var_20 = ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)253)) >> (((((/* implicit */int) arr_6 [i_4] [i_4])) - (44702)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
