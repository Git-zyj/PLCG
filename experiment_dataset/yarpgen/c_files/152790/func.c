/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152790
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
    var_12 = ((signed char) 4294967289U);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((836670896) ^ (((/* implicit */int) (unsigned char)42))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [(unsigned char)10] [i_0])) ? (((/* implicit */int) arr_1 [(signed char)6])) : (((/* implicit */int) arr_1 [8U])))) == (((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) -517615463)) - (4294836224U))))) : (((((/* implicit */int) arr_5 [i_0] [i_1 + 3])) & (((/* implicit */int) var_4))))));
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned char) arr_6 [i_2] [i_1 + 2])), (var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)2))))), (min((min((((/* implicit */unsigned int) (unsigned short)20667)), (4294836232U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294836233U)))))))));
                                arr_14 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) 2853347036648384807LL);
                                arr_15 [i_4] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) 9771493043819345376ULL);
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) 6883601858238542703ULL)) ? (131061U) : (131046U))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)189)) ? (9771493043819345370ULL) : (9771493043819345376ULL))))));
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((4294836218U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
                        var_20 = ((/* implicit */unsigned long long int) (!(((6883601858238542690ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34228)))))));
                        arr_19 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (short)-27382))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)168))) : (1988698538466874363LL)));
                    }
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(11563142215471008925ULL)))) ? (4294836251U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-159)))));
        arr_23 [i_6] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)52102)) - (52078)))))) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (unsigned char)60))))))), (max((((((/* implicit */_Bool) (signed char)0)) ? (907127827) : (((/* implicit */int) (unsigned short)65526)))), ((+(((/* implicit */int) (signed char)53))))))));
    }
    var_22 |= ((/* implicit */_Bool) var_11);
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) < (((/* implicit */int) var_3))))) >> (((((int) (_Bool)1)) & (((/* implicit */int) var_8))))));
}
