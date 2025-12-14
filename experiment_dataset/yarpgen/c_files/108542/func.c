/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108542
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
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((_Bool) 2147221504U)) ? (((((/* implicit */unsigned int) 2048)) - (352236580U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned char) -2048)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 3])) ? (-2050) : (2050)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 + 2])) : (2048))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), (arr_0 [i_0 + 1] [i_0 + 1]))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-2041)))) ? ((~(min((2050), (((/* implicit */int) (signed char)127)))))) : (((((((/* implicit */int) (unsigned char)14)) + (((/* implicit */int) arr_1 [(unsigned char)4])))) % (((/* implicit */int) arr_1 [i_0 - 3]))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)76)) % (((/* implicit */int) (unsigned char)249))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        var_22 = (!((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (-(min((max((31LL), (((/* implicit */long long int) 2748567400U)))), (((((/* implicit */_Bool) 2450686685246195876LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3940649673949184LL)))))));
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-23455))))));
                        var_25 = ((/* implicit */unsigned char) 14U);
                    }
                } 
            } 
        } 
        arr_16 [i_2] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_12 [i_2])))), (((/* implicit */int) max((((/* implicit */short) arr_12 [i_2])), ((short)7615))))));
        arr_17 [i_2] = ((/* implicit */unsigned char) (signed char)-76);
    }
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        var_26 += ((/* implicit */unsigned int) ((int) arr_18 [i_6]));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                {
                    var_27 += ((/* implicit */signed char) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)0))));
                    var_28 = ((/* implicit */signed char) var_0);
                    arr_25 [i_7 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) ? ((-(34LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) ? (((/* implicit */int) max((max((var_16), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) var_13))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_7 - 1])), (arr_23 [i_7] [i_7 - 1] [i_7 + 1]))))));
                    arr_26 [i_6] [i_7 - 1] [i_8] [8U] = (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (4294967281U)))) ? (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) : (((/* implicit */long long int) 2051)))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_0)), (-9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 48LL)))))))))));
}
