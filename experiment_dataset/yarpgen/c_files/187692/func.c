/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187692
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
    var_13 = ((/* implicit */unsigned char) var_9);
    var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) != (((/* implicit */int) (unsigned char)6)))))))) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)58))))) + (22U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))))))));
    var_15 = ((/* implicit */unsigned short) ((((unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) != (var_1)));
    var_16 = ((/* implicit */int) var_10);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (arr_0 [i_0])))))) ? (((/* implicit */long long int) (-((~(((/* implicit */int) (short)17415))))))) : (((arr_0 [i_0]) << (((((((/* implicit */int) (signed char)-20)) + (80))) - (59)))))))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (arr_0 [i_0])))))) ? (((/* implicit */long long int) (-((~(((/* implicit */int) (short)17415))))))) : (((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-20)) + (80))) - (59))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (arr_1 [i_0] [3LL]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)122))))))) < (((((/* implicit */_Bool) (-(3404535276U)))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-5009)) + (2147483647))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (130)))))) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */int) (!(((arr_1 [i_0] [i_0 + 2]) > (arr_1 [i_0] [i_0 + 3])))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_18 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)65535))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), ((!((!(((/* implicit */_Bool) arr_14 [i_0] [i_0 + 1] [i_3] [i_0] [i_0] [i_4] [i_4 - 1]))))))));
                            var_20 += ((/* implicit */unsigned int) ((arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]) && ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5])))))))) < (((unsigned long long int) (signed char)(-127 - 1)))));
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) var_8))))));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-17416)) % (((/* implicit */int) (unsigned short)9738))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 2) /* same iter space */
        {
            arr_24 [i_6] [i_7] = ((/* implicit */short) var_8);
            var_23 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_8)) << ((((-(((/* implicit */int) (signed char)17)))) + (42))))));
        }
        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) arr_20 [i_8 - 2])));
            arr_28 [i_8] [i_6] = ((/* implicit */unsigned char) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7993)))));
        }
        arr_29 [i_6] = ((/* implicit */short) (((+((~(var_7))))) + (var_1)));
    }
}
