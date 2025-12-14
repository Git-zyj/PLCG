/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152365
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned short) min(((~(max((255), (-242))))), (((/* implicit */int) ((212317442047594443ULL) >= (arr_0 [i_0]))))));
        arr_2 [i_0] &= arr_0 [i_0];
        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) && (((/* implicit */_Bool) -267))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (unsigned short)34843);
                    var_21 = ((unsigned char) (unsigned short)34844);
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */_Bool) ((max((arr_3 [i_3]), (20U))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) var_13);
        var_22 |= ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) 241)) ? (254) : (((/* implicit */int) (signed char)-97)))) >> (((max((9224986388874193600ULL), (((/* implicit */unsigned long long int) var_15)))) - (9224986388874193577ULL)))))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)69)) ? (27ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16020))))), (((/* implicit */unsigned long long int) var_5))));
        var_23 = ((/* implicit */long long int) (signed char)-89);
    }
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) (~(((min((var_2), (((/* implicit */unsigned int) (_Bool)1)))) | (2202264518U)))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                arr_21 [i_4] [i_5] [(_Bool)1] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_5 + 1])))))));
                var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned short) (unsigned short)30241))) ? (var_15) : (min((((/* implicit */unsigned int) arr_7 [i_4] [i_4] [0ULL] [i_4])), (0U))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4]))))) >= (((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */long long int) 731274156)))))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) (~(3018589521U)));
                            var_27 = ((/* implicit */unsigned int) arr_13 [i_8] [i_5]);
                            arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] |= (!(((/* implicit */_Bool) (unsigned char)87)));
                            arr_30 [i_4] [i_5] [i_6] [i_8] [i_8] [i_8] = (+(((((/* implicit */_Bool) (unsigned char)107)) ? (var_8) : (2202264515U))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_27 [i_4] [5ULL] [i_5 - 1] [15U] [i_5])))) < (((((/* implicit */_Bool) -282545987)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63046))) : (4294967278U)))));
            }
            var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned int) (unsigned short)11952))) ? (((/* implicit */int) arr_28 [i_5 + 1] [i_5] [i_5 - 1])) : (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) min(((unsigned char)97), (((/* implicit */unsigned char) (_Bool)1)))))));
            var_30 = ((/* implicit */unsigned char) (unsigned short)26580);
            var_31 = ((/* implicit */_Bool) var_3);
            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)207)) && (((/* implicit */_Bool) min((arr_23 [i_5 + 1] [i_4] [i_4] [i_4]), (arr_23 [i_5 - 1] [i_5] [i_4] [i_5 - 1])))))))));
        }
    }
    var_33 |= ((/* implicit */unsigned char) var_8);
}
