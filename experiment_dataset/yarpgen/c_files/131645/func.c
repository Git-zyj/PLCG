/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131645
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 576460752303423360ULL)))) : (((((/* implicit */_Bool) var_4)) ? (16590220678454264959ULL) : (var_17)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((arr_0 [i_0]), (arr_0 [i_0]))), (((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)-112)) : (var_14))))))));
        var_21 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) max((2216418289421374747ULL), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) var_16)))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 7; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((arr_1 [i_1]) ^ (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)114)) : (arr_4 [i_1] [i_1])))));
        var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 576460752303423360ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_5) : (arr_1 [17U])))) : ((~(7058334118109617607ULL)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_23 += ((/* implicit */unsigned short) (~(arr_4 [i_1 - 1] [5U])));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((arr_4 [i_1] [i_2]) != (((/* implicit */int) arr_3 [i_1])))))));
            var_25 = ((/* implicit */unsigned short) (-(((576460752303423360ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 1])) ? (992) : (((/* implicit */int) arr_9 [i_1 - 3] [i_2]))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8629290811388997458LL)) ? (7058334118109617607ULL) : (((/* implicit */unsigned long long int) 4076529719732685488LL))))) ? (17030219526170092039ULL) : (((unsigned long long int) (unsigned char)179))));
                        arr_14 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((long long int) ((long long int) arr_7 [i_1])));
                    }
                } 
            } 
        }
        arr_15 [i_1 + 4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
    }
    for (int i_5 = 3; i_5 < 13; i_5 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5 - 2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_5]) == (((/* implicit */int) (signed char)-68)))))) : (arr_17 [i_5])))) ? (((((/* implicit */_Bool) 1362303315U)) ? (8161048057888223997ULL) : (((/* implicit */unsigned long long int) 2838979426743104727LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((17030219526170092039ULL) >= (((/* implicit */unsigned long long int) arr_16 [i_5] [i_5]))))))))));
        arr_20 [i_5] = ((/* implicit */unsigned char) ((unsigned int) arr_16 [3] [i_5]));
        var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_5])) && ((!(((/* implicit */_Bool) (unsigned char)155))))));
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 12; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) var_5);
                                var_30 = ((/* implicit */long long int) min((var_30), ((((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_6] [9LL]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(signed char)8] [i_10])) ? (((/* implicit */int) arr_31 [i_9 - 1] [i_10])) : (((/* implicit */int) ((signed char) (signed char)-68)))))) : (((((/* implicit */_Bool) min((1416524547539459576ULL), (arr_26 [i_8])))) ? (8144928109461858408LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_18 [i_6]))))))))));
                                arr_34 [i_6] [4] [i_8] [i_9] [i_9] [i_7] = (-(((((/* implicit */int) ((unsigned char) arr_21 [i_6]))) - ((+(((/* implicit */int) var_1)))))));
                                arr_35 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) 18217540247364855530ULL);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((min(((+(arr_32 [(unsigned char)3] [(_Bool)1] [i_6] [i_6] [i_6]))), (((/* implicit */long long int) arr_24 [i_8] [i_8])))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))) == (1495397876439075187ULL))))))))));
                    var_32 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)-72)), ((((!(((/* implicit */_Bool) arr_16 [i_6] [i_7])))) ? (var_3) : (((/* implicit */unsigned long long int) var_12))))));
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) arr_1 [8]))));
    }
    var_34 ^= ((((/* implicit */_Bool) 2932663980U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)));
}
