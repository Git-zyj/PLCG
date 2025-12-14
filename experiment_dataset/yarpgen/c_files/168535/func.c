/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168535
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((-1972582018352140796LL) - (-7189150889891925870LL))), (((/* implicit */long long int) ((unsigned int) var_2)))))) + (var_7))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_13 = ((/* implicit */long long int) var_2);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                arr_9 [i_0] [i_2] [5LL] = ((/* implicit */long long int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-25843)) <= (1336644465)))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    arr_12 [14U] [i_1] [i_2] [i_3] [3LL] [i_2] = ((/* implicit */signed char) ((int) var_6));
                    var_14 = ((/* implicit */int) ((signed char) 1336644465));
                    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((_Bool) var_8))) : (((/* implicit */int) ((short) (_Bool)1)))));
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (unsigned char)254))) | (((/* implicit */int) (signed char)3))));
                }
                for (signed char i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                {
                    var_17 ^= ((/* implicit */unsigned int) (signed char)16);
                    var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((1525526298U) > (((/* implicit */unsigned int) -1336644465)))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_5 = 4; i_5 < 20; i_5 += 2) 
                {
                    var_19 += ((((/* implicit */int) ((unsigned short) (short)18548))) == (((/* implicit */int) ((_Bool) var_9))));
                    arr_19 [12LL] [12LL] [i_2] [12LL] [i_5] |= ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) var_7)))));
                }
            }
            arr_20 [i_0] [2U] = ((/* implicit */unsigned char) (-((((_Bool)1) ? (var_2) : (var_5)))));
        }
        var_20 ^= ((/* implicit */unsigned char) (signed char)-55);
        var_21 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1279465334U)) ? (((/* implicit */unsigned long long int) var_1)) : (var_7))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32))) & (var_5)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)18570))))) : (((/* implicit */int) var_4))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_1)) : (266664406507448126ULL))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)0))))));
        var_22 = ((/* implicit */unsigned char) ((long long int) 2147483640));
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) 8452479589722204816LL))), (((signed char) (signed char)-90))))) ? (((((/* implicit */_Bool) min(((signed char)56), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(-8452479589722204817LL)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_29 [(unsigned char)20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1279465334U)) : (var_10))) - (((/* implicit */unsigned long long int) min((var_1), (67108863)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4079864014612493177ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)92))))) ? (((unsigned int) 4079864014612493204ULL)) : (((/* implicit */unsigned int) ((var_1) | (((/* implicit */int) (short)-16384))))))))));
        arr_30 [i_7] = ((/* implicit */signed char) ((long long int) (+(((((/* implicit */_Bool) (unsigned char)239)) ? (3333667202U) : (1279465359U))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_24 |= ((/* implicit */int) ((((((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) <= (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))))))) ? (8492447023504545086LL) : (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) var_7)) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3326941239U))))))))));
                    var_25 = ((/* implicit */long long int) ((int) (_Bool)1));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (-147001178)))), (((unsigned long long int) ((((/* implicit */_Bool) (short)-18556)) ? (var_2) : (((/* implicit */unsigned int) var_1))))))))));
    }
}
