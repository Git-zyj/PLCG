/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140630
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 += ((/* implicit */short) ((((/* implicit */_Bool) 1751611670)) ? (max((arr_4 [i_0] [i_1]), (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) (signed char)127))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) -1751611652);
            }
        } 
    } 
    var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_5), (min((-9223372036854775805LL), ((-9223372036854775807LL - 1LL))))))) || (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))), (min((((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-107)))), (((/* implicit */int) (short)-32759))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 1751611671)))))) * (min((12950009844014663864ULL), (((/* implicit */unsigned long long int) 1631885698U)))))) * (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) arr_8 [i_2] [i_3] [i_2])), (5795987508984091599LL))))))))));
                var_15 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 1000764858U))) ? (((var_3) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (min((-9223372036854775785LL), (((/* implicit */long long int) (_Bool)0)))))));
                /* LoopNest 3 */
                for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_16 = min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (short)32759)) : (min((((/* implicit */int) (signed char)68)), (2017451331)))))), (((((/* implicit */_Bool) 13261157247011075628ULL)) ? (((long long int) (signed char)-61)) : (((((/* implicit */_Bool) 0U)) ? (9223372036854775793LL) : (((/* implicit */long long int) 1467224733U)))))));
                                var_17 ^= min((((min((2134910148U), (((/* implicit */unsigned int) (_Bool)0)))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58205))))), (((/* implicit */unsigned int) max((-1751611679), (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                } 
                var_18 = max((max((((/* implicit */unsigned int) var_1)), (arr_0 [i_3]))), (((/* implicit */unsigned int) ((int) 1802028744))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((max((((/* implicit */int) (_Bool)0)), (max((var_1), (((/* implicit */int) (signed char)59)))))), (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (short i_7 = 3; i_7 < 15; i_7 += 4) /* same iter space */
    {
        var_20 += ((/* implicit */long long int) min((1873341781U), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-100)))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8419458788203279213LL)) ? (1526856236U) : (((/* implicit */unsigned int) 1279900877))))) ? (((((/* implicit */_Bool) -1591102487359083738LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) : (2843816390U))) : (((4144821015U) + (((/* implicit */unsigned int) -1751611671))))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_19 [i_7 - 3])), (4294967280U)))), (11546716689508294367ULL))))));
    }
    for (short i_8 = 3; i_8 < 15; i_8 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) 2843816390U))));
        var_24 *= ((/* implicit */short) max((((((((/* implicit */int) (signed char)127)) % (((/* implicit */int) arr_21 [i_8 - 3])))) % (1598443023))), (((int) ((signed char) -7834231161508073016LL)))));
    }
}
