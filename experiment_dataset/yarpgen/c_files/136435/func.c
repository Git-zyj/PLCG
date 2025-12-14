/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136435
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
    var_14 += ((/* implicit */signed char) 2209496616U);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */unsigned long long int) min((2995274244U), (2085470693U)))) : (((((/* implicit */_Bool) (signed char)38)) ? (arr_6 [i_1] [i_2 + 2] [(short)0]) : (((/* implicit */unsigned long long int) 2085470683U))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (unsigned char)14);
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) 2085470680U)) : (arr_4 [i_1])))) && (((/* implicit */_Bool) (-(1531046940U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (var_11) : (((/* implicit */unsigned long long int) 1299693065U))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6776308531423572810LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2085470683U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))) : (((((/* implicit */_Bool) var_4)) ? (max((var_13), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27507)) ? (var_11) : (11241177332239013268ULL)))) ? (((((/* implicit */_Bool) 2995274247U)) ? (2085470664U) : (((/* implicit */unsigned int) 1704049047)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), ((signed char)-127))))))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) var_3)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-61)) : (var_9))))))));
}
