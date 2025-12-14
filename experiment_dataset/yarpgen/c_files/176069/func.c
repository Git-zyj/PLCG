/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176069
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
    var_14 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) -366243637)) ? (601695950) : (((/* implicit */int) (signed char)74)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 716583430)))))))) + (var_9));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_15 -= ((/* implicit */unsigned char) (~(max((min((var_8), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) 0LL))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_16 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) == (((((/* implicit */_Bool) (unsigned char)96)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1379499097786804816LL)) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)129)) : (601695973))) : ((~(var_6)))))), (((((/* implicit */_Bool) -3151273109779012267LL)) ? (((/* implicit */unsigned long long int) 366243640)) : (15453572552399647707ULL)))));
                                var_18 = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28666))))), (var_4))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_0 [i_0 - 2]))))))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 4; i_5 < 15; i_5 += 4) 
    {
        var_20 -= ((/* implicit */int) (signed char)-15);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8])) - (arr_0 [i_5])))));
                        var_22 = ((/* implicit */int) (unsigned char)92);
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) - (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                        arr_22 [i_7] [i_7] [i_7] [i_7] [i_6] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (var_9)))) && (((/* implicit */_Bool) arr_2 [i_7 - 1] [i_8])));
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)232))));
        }
        for (unsigned char i_9 = 4; i_9 < 16; i_9 += 3) 
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)118)) << (((-741636086) + (741636104)))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) arr_17 [i_5] [i_9] [i_9] [i_5])) : (((/* implicit */int) (signed char)-74))))), (((67108863U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) || (((((/* implicit */_Bool) min((130944U), (((/* implicit */unsigned int) var_10))))) && (((/* implicit */_Bool) ((long long int) (unsigned char)255)))))));
            var_27 = (+(0));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_28 = ((((unsigned int) (~(9149193277660006836LL)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_5] [i_5 - 2] [i_5] [i_5 - 3])))));
                            var_29 = ((((296544086) / (((/* implicit */int) (unsigned char)55)))) << ((((+(((((/* implicit */_Bool) 1041468604U)) ? (((/* implicit */unsigned long long int) 67108863U)) : (var_8))))) - (67108859ULL))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) arr_14 [i_12])) ? (arr_14 [i_5]) : (((/* implicit */unsigned long long int) 3871762758U)))) : (max((2993171521309903909ULL), (((/* implicit */unsigned long long int) 886564383819708447LL))))));
                            arr_32 [i_5 - 3] [i_11] [i_10] [i_11] [i_11] [i_12] = (+(((/* implicit */int) ((unsigned char) arr_28 [i_9 - 4] [i_11]))));
                            var_31 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned char)104))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (-(((max((var_8), (((/* implicit */unsigned long long int) (unsigned char)92)))) / (((/* implicit */unsigned long long int) arr_20 [i_10] [i_10] [i_10 + 1] [i_10])))))))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-112)) % (((/* implicit */int) (unsigned char)162))));
                var_34 = ((/* implicit */unsigned int) min((12982192603940641389ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255)))))));
            }
        }
    }
    for (unsigned char i_13 = 2; i_13 < 19; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            var_35 = ((/* implicit */unsigned char) max((0), (((int) 5908521114596711019LL))));
            var_36 = ((/* implicit */long long int) ((unsigned long long int) (~(arr_3 [i_13 + 1]))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned int) 1359921927)) ^ (4294967295U)));
        }
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                {
                    var_38 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) << (((7976839395276255155LL) - (7976839395276255151LL)))))) ? (((((/* implicit */_Bool) 2993171521309903909ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_44 [i_13 - 2] [i_15] [7])) : (((/* implicit */int) var_0)))))))));
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((unsigned char) ((unsigned int) (unsigned char)255))))));
                    var_40 = ((/* implicit */signed char) (+(3479215327U)));
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
    }
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((long long int) 2993171521309903910ULL)))));
    var_43 = ((/* implicit */signed char) (~(var_9)));
    var_44 = ((/* implicit */unsigned int) var_6);
}
