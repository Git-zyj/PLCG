/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132707
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 7939249378684510011LL)) || ((!(((/* implicit */_Bool) 4294967295U)))))) && ((!(((/* implicit */_Bool) (unsigned short)0))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_2] [i_1] = max((((/* implicit */unsigned char) (!(var_2)))), (max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (var_1)))), ((unsigned char)253))));
                        var_12 = (~((+(((/* implicit */int) (unsigned short)22378)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 3; i_4 < 20; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (short)-1686))))));
        arr_19 [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (4272947908U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)32768)), (22019391U))))));
    }
    for (long long int i_5 = 3; i_5 < 12; i_5 += 1) 
    {
        var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11592605470994679126ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_9)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) : (22019391U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)128)))))))) ? ((-(((((/* implicit */_Bool) (signed char)91)) ? (4272947905U) : (22019392U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    {
                        arr_30 [(signed char)10] [i_6] [i_5] [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (short)-236)))))) ? ((+(((/* implicit */int) ((unsigned short) var_0))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3)))))));
                        var_15 = ((/* implicit */signed char) (-(var_6)));
                        arr_31 [i_5] [(_Bool)1] [i_5] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551607ULL) ^ (((/* implicit */unsigned long long int) -8418992))))) ? (((((/* implicit */int) (unsigned short)0)) << (((var_6) - (1448421881U))))) : (((((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))) | (((/* implicit */int) var_1))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_5)) ^ (267329515))), (min((1573357841), (((/* implicit */int) var_5))))));
    }
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) (+(4502500115742720ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(-3338994288650576910LL)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_3))) : (var_9)));
}
