/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15663
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((long long int) 9223372036854775803LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4))) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    var_20 = max((var_15), (((/* implicit */long long int) var_7)));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) ((unsigned long long int) 18446744073709551615ULL))) : (var_10)));
    var_22 = ((/* implicit */unsigned char) 8944994398793667896ULL);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [8LL] [8LL] &= ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) : (arr_1 [(unsigned char)10]));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_8))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (-129163259449719196LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)38159)) : (((/* implicit */int) var_11)))))))))));
            arr_7 [i_0] [i_0] = max(((~(arr_0 [i_0 - 2]))), (((/* implicit */long long int) min((((((/* implicit */int) var_7)) / (((/* implicit */int) var_18)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (arr_5 [i_0] [6ULL] [9ULL]))))))));
            var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((3054412077755573710LL), (arr_1 [i_0])))), (17980918704260150824ULL)));
            arr_8 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((8712239918250198674ULL), (((/* implicit */unsigned long long int) 368861711U))))) ? (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) min((var_1), (var_1)))))), (min((((/* implicit */long long int) arr_4 [i_0 + 1] [i_0])), (((((/* implicit */_Bool) (unsigned char)231)) ? (arr_0 [i_1]) : (arr_1 [i_0])))))));
            arr_9 [(unsigned char)4] [i_1] [i_1] |= ((/* implicit */unsigned char) ((long long int) (-9223372036854775807LL - 1LL)));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_19 [i_0] [i_2] [12] [12] [14LL] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) ((arr_13 [i_4] [i_3] [i_0] [i_0]) + (8067407997106979008ULL))))), (((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) var_18))))) ? (min((((/* implicit */unsigned long long int) var_6)), (var_10))) : (max((5903572427681936133ULL), (((/* implicit */unsigned long long int) -6059001986828531219LL))))))));
                        arr_20 [i_0] [i_2] [i_3 + 1] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */unsigned long long int) -1LL)) % (arr_11 [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7124))))));
                    }
                } 
            } 
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_2);
        }
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_10) >> (((arr_12 [i_0 - 1]) + (970894808662971195LL)))))) ? (max((var_6), (arr_12 [i_0 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_0 + 2]))))));
                var_26 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [i_5] [i_5] [1LL] [i_0])) / (((/* implicit */int) arr_22 [i_0 + 2]))))), (max(((-(-1892758416495193700LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (short)32766))))), (((((/* implicit */_Bool) var_9)) ? (2090505867436139524ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (arr_14 [(unsigned char)3] [(unsigned char)3] [i_0] [i_6]) : (((unsigned long long int) var_11))));
                var_28 = min((((/* implicit */unsigned long long int) ((int) min((((/* implicit */long long int) (_Bool)1)), (var_5))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))) / (var_10))));
            }
            var_29 ^= (-(((unsigned long long int) ((((/* implicit */int) var_11)) << (((/* implicit */int) (unsigned char)7))))));
        }
        var_30 *= ((/* implicit */unsigned long long int) ((-8747932650525598589LL) / (41647934484797409LL)));
        var_31 -= min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [8LL] [i_0] [i_0] [4LL]))) < (var_1)))) >> (((((((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ ((-9223372036854775807LL - 1LL)))) - (-9223372036854775793LL))) + (27LL)))))), (var_10));
    }
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        var_32 ^= ((/* implicit */unsigned char) ((((1168182546263402842ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (7403654081587476564LL)))))) % (((/* implicit */unsigned long long int) var_1))));
        var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)108)), (((short) 9827637417412009990ULL))))) ? (((arr_16 [i_7] [i_7] [i_7] [i_7]) / (max((((/* implicit */long long int) var_7)), (arr_12 [i_7]))))) : (max((18LL), (413625104990388341LL)))));
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 4; i_11 < 13; i_11 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */short) ((((/* implicit */int) var_8)) >> (((min((var_10), (((/* implicit */unsigned long long int) arr_39 [i_8] [i_10] [i_10 + 3] [i_10 + 3])))) - (228ULL)))));
                                var_36 = ((/* implicit */long long int) 15728640U);
                                var_37 = ((/* implicit */int) min((((long long int) ((4617174772892037949ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))), (((/* implicit */long long int) (+(((/* implicit */int) var_18)))))));
                            }
                        } 
                    } 
                    var_38 ^= ((/* implicit */unsigned char) var_14);
                }
            } 
        } 
    }
}
