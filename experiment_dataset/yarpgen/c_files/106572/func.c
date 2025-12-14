/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106572
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
    var_19 ^= ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1 + 1] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))));
                    arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) -1202103735))) >= (((/* implicit */int) min((var_17), (((/* implicit */short) arr_0 [i_0] [i_0]))))))))));
                    arr_8 [i_0] [i_2] [i_2] &= ((signed char) ((int) ((4121933864945227897ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                    var_20 |= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (min((var_11), (((/* implicit */long long int) 2351365410U))))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (var_1))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned int i_5 = 3; i_5 < 18; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)28029)) ? (((/* implicit */int) max(((unsigned char)203), ((unsigned char)144)))) : (((/* implicit */int) var_1)))) & (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-66)), (arr_9 [i_3] [i_7])))))))));
                                var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_18 [i_6] [i_4] [0])) ? ((-(((/* implicit */int) (short)120)))) : (-1362328446))) : (((/* implicit */int) (unsigned char)163))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)78)), (var_2)))) || (((/* implicit */_Bool) max((arr_21 [(_Bool)1]), (((/* implicit */long long int) (short)32746)))))))) <= ((+((~(arr_18 [(unsigned short)7] [i_4] [i_3])))))));
                        var_25 = ((/* implicit */signed char) max((max((arr_15 [i_5 - 3] [i_5 - 3] [i_5 + 2]), (arr_15 [i_5 - 3] [i_5 + 2] [i_5 - 3]))), (((/* implicit */unsigned long long int) ((signed char) arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 2])))));
                        arr_22 [i_3] [i_3] = ((/* implicit */int) 607181221U);
                        var_26 += ((/* implicit */_Bool) ((unsigned char) var_6));
                        var_27 *= ((/* implicit */unsigned int) (~(arr_21 [i_3])));
                    }
                    for (short i_9 = 4; i_9 < 16; i_9 += 2) /* same iter space */
                    {
                        arr_25 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) (unsigned char)82);
                        arr_26 [i_3] [i_3] [i_5 + 1] [i_9] [i_9 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((((!(((/* implicit */_Bool) (unsigned char)133)))) ? (((/* implicit */unsigned int) max((1362328445), (((/* implicit */int) (unsigned char)0))))) : (arr_19 [i_5] [i_3] [i_5 - 3] [i_5] [(unsigned short)19]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))));
                    }
                    /* vectorizable */
                    for (short i_10 = 4; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        arr_29 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) arr_28 [i_10 + 3] [i_10 + 2] [i_10 + 2] [i_5] [i_5 - 3])) ? (((var_11) | (((/* implicit */long long int) 219194911)))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5 + 1]))));
                        var_28 = ((/* implicit */signed char) (unsigned char)161);
                    }
                }
            } 
        } 
    } 
}
