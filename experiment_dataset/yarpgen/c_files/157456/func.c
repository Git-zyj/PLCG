/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157456
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
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_0) : (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)65534)))))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 1] [i_0 - 2])) ? ((-9223372036854775807LL - 1LL)) : (8825613725666766912LL)))) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : (var_6)))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_8) ? (var_3) : (var_3)))) ? (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_4 [i_0 - 1] [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58570)))))));
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 16; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8444662642908697277LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (6207568498158622516LL)));
                        arr_18 [i_2] = ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 2] [i_3 - 1])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                        var_16 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned char)253))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_13))));
                    }
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_13 [i_2] [(short)2] [(short)2] [i_4 + 2])) : (((/* implicit */int) arr_13 [i_2] [4] [i_2 - 1] [i_4 - 1]))))) ? (((((/* implicit */_Bool) (signed char)-123)) ? (-7011451409114922536LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_6 = 1; i_6 < 7; i_6 += 2) 
    {
        arr_23 [i_6 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (signed char)-76))))) ? (((((/* implicit */_Bool) 3223229512U)) ? (var_11) : (arr_9 [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)58570)))))));
        arr_24 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6] [i_6 + 4] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) : (var_4)))) ? (((((/* implicit */_Bool) (signed char)71)) ? (14117933338617662778ULL) : (((/* implicit */unsigned long long int) 5441877962848447373LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-85)))))));
    }
    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7 + 3] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_7] [i_7]))))) ? (2031616U) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (2765811416U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7 + 3])) ? (((/* implicit */int) arr_26 [i_7 + 3] [6LL])) : (((/* implicit */int) arr_25 [i_7 + 3] [i_7 + 1]))))) : (((((/* implicit */_Bool) arr_27 [i_7 + 2])) ? (4292935677U) : (((/* implicit */unsigned int) -1342207714))))));
        arr_29 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8444662642908697290LL)) ? (2825867890500386369LL) : (-8444662642908697277LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_7 - 2])) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_27 [i_7 - 2]))))) : (((((/* implicit */_Bool) arr_25 [i_7 + 2] [i_7 + 1])) ? (3487973093U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    for (unsigned short i_8 = 2; i_8 < 19; i_8 += 3) /* same iter space */
    {
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) 7522761099202149353LL)) ? (((/* implicit */int) arr_25 [i_8] [i_8])) : (((/* implicit */int) arr_30 [i_8] [i_8]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_3)) : (-7234275929787459520LL)))) ? (((/* implicit */int) (unsigned char)52)) : (((((/* implicit */_Bool) (unsigned short)47228)) ? (((/* implicit */int) (unsigned short)7682)) : (((/* implicit */int) (unsigned short)57853))))))) : (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-104))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (-8444662642908697315LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (short)-20418)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24576)) ? (7522761099202149353LL) : (arr_28 [(short)4])))) ? (((((/* implicit */_Bool) arr_28 [i_8 - 2])) ? (-1) : (1266900714))) : (((/* implicit */int) arr_27 [i_8 + 1]))))) : (((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_8 + 3])) ? (5643032984729520444LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8 + 3] [i_8 + 2]))))))))));
    }
}
