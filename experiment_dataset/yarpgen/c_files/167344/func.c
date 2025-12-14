/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167344
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((signed char) (unsigned char)53)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 8636291366854585699LL)) ? (((/* implicit */unsigned long long int) -634323087)) : (12306919990267882826ULL))))) : (((int) 3541885723U))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) | (268435456)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) 268435456);
    var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_19)) ? ((~(var_15))) : (((/* implicit */int) var_5))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) var_10);
        var_26 = (signed char)7;
        var_27 = ((/* implicit */long long int) var_0);
    }
    for (unsigned short i_3 = 4; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) var_0);
        var_29 = (unsigned short)52365;
    }
    for (unsigned short i_4 = 4; i_4 < 20; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 3; i_5 < 20; i_5 += 1) 
        {
            var_30 = ((/* implicit */int) (-(var_8)));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_9 [i_5 + 2] [i_5 - 2]))) ? (((((/* implicit */_Bool) arr_9 [i_5 + 2] [i_5 - 2])) ? (arr_5 [i_5 + 2] [i_5 - 2]) : (arr_5 [i_5 + 2] [i_5 - 2]))) : (((/* implicit */long long int) ((int) var_14)))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(-505377206)))) ^ (753081573U)));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                            arr_25 [(unsigned short)16] [i_5] [i_4] [i_5] [i_5] [i_5] [(unsigned short)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-7437112063160766218LL)))) ? ((-(arr_7 [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 279223176896970752ULL)) ? (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */long long int) 3541885723U)) : (-7869854677552872835LL))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) 753081573U)) ? (arr_8 [i_5]) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_5] [i_5] [(signed char)0] [i_6])))))))));
            }
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            var_35 = ((/* implicit */long long int) ((signed char) var_16));
            var_36 -= ((/* implicit */unsigned int) var_4);
        }
        var_37 = ((/* implicit */short) (-((((-(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) arr_24 [i_4] [i_4] [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_4 - 3]))))));
        var_38 = ((/* implicit */signed char) arr_4 [i_4] [i_4]);
    }
    for (unsigned short i_10 = 4; i_10 < 20; i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] = ((/* implicit */unsigned short) (signed char)-110);
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10 + 1] [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 3] [i_10 - 1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10] [i_10] [1LL] [i_10 - 1] [i_10 - 1] [i_10 - 1] [(unsigned short)5]))) : (3541885723U)))) ? (((((/* implicit */_Bool) arr_23 [(unsigned short)7] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 - 1] [(short)0])) ? (((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 - 1] [13LL])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)7656))));
    }
}
