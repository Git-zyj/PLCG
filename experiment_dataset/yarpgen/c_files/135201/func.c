/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135201
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-127)), ((unsigned char)255)))) : (((/* implicit */int) (signed char)-127)));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15118848408642976473ULL)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (var_16))) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)29))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [19ULL] [(unsigned char)7] [i_2] [i_0] [i_4]))) : (3327895665066575143ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (unsigned char)253)))))));
                                var_22 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) -313084700)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((arr_6 [i_0] [i_1] [i_1]) - (8101024567784653796ULL)))))) ? (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)4364)), (var_8))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)171))))) ? (((((/* implicit */_Bool) -7012385150723810306LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87))) : (3327895665066575150ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 1]))))));
                                arr_17 [i_0] [i_1] [i_1] [i_0] [i_6 - 3] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_16)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) <= (var_13))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_5)))))))));
    var_25 = ((/* implicit */signed char) -8559812216474932771LL);
}
