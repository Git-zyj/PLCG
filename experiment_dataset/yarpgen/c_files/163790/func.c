/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163790
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 7757805088950839975LL))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = max((((/* implicit */long long int) ((_Bool) 255U))), (var_8));
                    arr_9 [i_2] [i_1] [(unsigned short)4] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)39398)), (max((arr_0 [i_0] [i_1]), (((/* implicit */int) ((-7757805088950839968LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) -7757805088950839976LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (7757805088950839977LL)))));
                    var_16 = ((/* implicit */unsigned char) 7757805088950840005LL);
                    var_17 = ((/* implicit */long long int) arr_7 [i_0]);
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) max((7757805088950839975LL), (7757805088950839975LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_0))))));
        var_19 = (~(((arr_6 [i_0] [i_0] [(unsigned short)16]) - (arr_6 [(short)2] [(short)2] [(_Bool)1]))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [20U] [i_3] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0] [i_3])))));
                    var_20 &= ((/* implicit */short) ((unsigned short) ((-7757805088950839976LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                    var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))))) : (((/* implicit */unsigned long long int) arr_14 [i_0]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) 4294967295U))), ((-(18446744073709551615ULL))))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (7757805088950839976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16367))))), (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */long long int) 3176064617U)) : (-7351629826476005807LL)))))) ? (((/* implicit */long long int) max((716747339U), (((/* implicit */unsigned int) max(((unsigned char)32), (arr_10 [i_0]))))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108)))))));
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (2292426183984540063ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)6324))))) : (((unsigned int) arr_5 [6U] [4U] [i_0]))));
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (signed char i_7 = 2; i_7 < 8; i_7 += 2) 
            {
                {
                    var_24 += ((/* implicit */unsigned char) min((((/* implicit */int) max(((unsigned char)207), (var_3)))), (((((/* implicit */int) arr_20 [i_5])) * (899558182)))));
                    arr_22 [i_5] [i_6] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (11090239317099252374ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24557))) : (9223372036854775807LL)))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2433)) ? (((/* implicit */int) (unsigned short)15423)) : (1485177270))))))));
        arr_23 [i_5] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_0))))));
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) arr_21 [i_8] [i_8]);
        var_27 = max((((/* implicit */unsigned long long int) (short)20278)), (0ULL));
    }
}
