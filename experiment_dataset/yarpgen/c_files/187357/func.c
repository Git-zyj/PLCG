/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187357
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-8318298025148910011LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-110)))) : (min((((((/* implicit */_Bool) -5569361025489651727LL)) ? (arr_6 [i_0] [i_1] [(short)8] [i_0]) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5590429393004997140LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-10059)), (arr_3 [i_1] [i_1]))))))) ? (((((((/* implicit */int) max(((short)-16257), (var_9)))) + (2147483647))) >> ((((+(((/* implicit */int) (short)421)))) - (402))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (short)6118)) <= (((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_3 = 4; i_3 < 17; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3323871043U)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (short)-25120))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)24415)))));
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                {
                    var_10 |= ((/* implicit */long long int) ((((/* implicit */_Bool) -68998487)) ? (((((/* implicit */int) (signed char)13)) ^ (((/* implicit */int) (signed char)-84)))) : (((((/* implicit */_Bool) (unsigned short)22622)) ? (((/* implicit */int) (unsigned short)26194)) : (((/* implicit */int) var_2))))));
                    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (17721096897655636244ULL) : (((/* implicit */unsigned long long int) arr_15 [i_3 - 3]))));
                    var_12 = ((((/* implicit */_Bool) -779314156487855095LL)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)72))));
                }
            } 
        } 
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)156)) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)53059)) : (((/* implicit */int) var_2))))));
        arr_20 [i_3] = ((/* implicit */signed char) -392371358);
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19559)) ? (((((/* implicit */int) (signed char)-30)) + (((/* implicit */int) (short)24599)))) : (((/* implicit */int) arr_22 [i_6]))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (4342237341094687604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27129)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3881252997562115178LL)) && (((/* implicit */_Bool) 9223372036854775807LL)))))) : (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */long long int) 2535057503U)) : (arr_21 [i_6] [i_6])))));
    }
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (2167525857U)));
    var_16 = ((/* implicit */int) ((max((((/* implicit */int) var_4)), ((~(((/* implicit */int) (short)-25712)))))) <= ((-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-50)), ((unsigned char)221))))))));
    var_17 = ((/* implicit */unsigned char) var_8);
}
