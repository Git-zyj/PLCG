/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164648
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
    var_17 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_10 [9ULL] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)60)) >> (((((/* implicit */int) (signed char)-64)) + (84)))))) == ((-(388260259U)))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0 + 1] [i_1 + 2] [i_2] [i_3]), (((/* implicit */unsigned int) (signed char)-61))))) ? (((450859924U) ^ (var_13))) : (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) : (1609428539U)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        arr_14 [i_0] [(unsigned char)1] [i_2] [4U] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)60)) % (((/* implicit */int) (signed char)53))));
                        var_19 = ((/* implicit */signed char) ((unsigned char) 576460752303423488ULL));
                    }
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                    {
                        arr_17 [6ULL] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((signed char) (-(arr_13 [i_0 + 1]))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) ((unsigned int) var_2)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 3765783934100449707ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) : (3630590174U))) >> (((((/* implicit */int) max(((unsigned short)16137), (((/* implicit */unsigned short) arr_16 [i_1 + 1] [i_1 - 1] [i_0 + 2]))))) - (16135)))));
                        var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 1] [4U] [i_0 + 2]))) : (var_1))), (((/* implicit */unsigned long long int) var_7))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)112)), (var_0)))))))));
                        arr_20 [(signed char)7] [(signed char)5] [i_2] [i_6] [0U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) > (8440002324814463229ULL)));
                        arr_21 [i_0] [i_1 + 2] [(signed char)7] [i_2] [(unsigned char)8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)37))) ? ((-(66584576U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2705399651206494159ULL))))));
                    }
                    var_24 = var_6;
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_28 [(unsigned char)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (var_0))))));
                                var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1 - 1] [7U] [i_7] [i_8])), (((((/* implicit */_Bool) (signed char)-1)) ? (min((((/* implicit */unsigned long long int) (signed char)1)), (arr_25 [i_0 + 2] [i_1 + 2] [i_1] [i_2] [(unsigned char)5] [(unsigned char)10] [(unsigned char)8]))) : (var_1)))));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49399))))), (((((((/* implicit */int) (unsigned short)16124)) > (((/* implicit */int) (unsigned short)16146)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-31)) && (((/* implicit */_Bool) (signed char)-104))))) : (((/* implicit */int) (unsigned short)59447))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    var_28 = ((/* implicit */unsigned int) var_8);
}
