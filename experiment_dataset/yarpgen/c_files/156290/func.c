/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156290
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-(var_7)))))));
    var_11 = min((((/* implicit */unsigned int) var_1)), (max(((-(var_0))), (((/* implicit */unsigned int) ((int) var_3))))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2063982565U))))), (max(((+(var_4))), (((((/* implicit */_Bool) var_1)) ? (18446744073709551606ULL) : (var_5)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [17U] [i_1] [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_1] [13LL]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        var_13 *= ((((/* implicit */unsigned int) ((/* implicit */int) ((11743613139859937138ULL) < (((/* implicit */unsigned long long int) -75040751)))))) + (((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0] [i_0] [i_2 + 1] [i_0]) : (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [20ULL] [20ULL] [i_0])))));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    for (int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] [(unsigned short)5] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        arr_16 [i_0] [i_1] [i_1] [i_4] [11ULL] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned int) -537834847)) : (2631677632U))), (((/* implicit */unsigned int) 3))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 2; i_6 < 24; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_2] [i_5] [i_1] [i_6] = ((/* implicit */int) var_0);
                            var_15 = ((/* implicit */short) var_8);
                        }
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) (+(((arr_17 [i_1] [i_1] [i_5] [23LL]) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            var_17 = ((/* implicit */signed char) arr_21 [i_2] [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1]);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0] [i_1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_2)) : (-540323566)));
                            arr_28 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
                        }
                        arr_29 [16ULL] [i_5] [i_2 + 1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_0] [i_0]))))) < (9578685661783823784ULL)));
                        var_19 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (4764614525386363167ULL))) << (((((((/* implicit */_Bool) arr_13 [i_5] [i_2] [i_0] [i_0])) ? (13681290359089667809ULL) : (((/* implicit */unsigned long long int) 413543883)))) - (13681290359089667791ULL)))));
                        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_2 - 1] [5U] [i_2] [5U]))));
                        arr_30 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (~(arr_17 [i_0] [i_1] [i_2 + 2] [(signed char)21])));
                    }
                    arr_31 [i_1] [i_0] [14ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [16] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5321257548967211869ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))))))) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_2] [i_1] [9U] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((signed char) 1145490695U));
        var_22 *= ((/* implicit */int) (-((-(((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_17 [i_8] [20LL] [i_8] [2LL]))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((4765453714619883821ULL) << (((((/* implicit */int) arr_9 [i_9] [i_9] [i_9])) - (45654))))), (var_4)))) ? (((((/* implicit */_Bool) (-(427010258U)))) ? (((/* implicit */int) ((_Bool) arr_17 [i_9] [i_9] [i_9] [14]))) : ((-(((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))) : (arr_5 [i_9])));
        /* LoopSeq 2 */
        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 3) 
        {
            var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_9] [1] [1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9] [i_10 - 1] [i_10]))) : (13681290359089667794ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)35)))))));
            var_25 |= ((/* implicit */long long int) var_9);
            arr_42 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (signed char)37)) ? ((-(((/* implicit */int) (signed char)-34)))) : (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
            var_26 &= ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) ((unsigned char) (unsigned short)15367))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            var_27 = ((/* implicit */int) var_5);
            var_28 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_5 [i_9])) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
            var_29 = ((/* implicit */unsigned short) ((long long int) 12450506765876386030ULL));
            var_30 *= 1663289663U;
        }
        arr_45 [i_9] = ((/* implicit */signed char) (+(((((/* implicit */int) var_2)) & (((/* implicit */int) var_8))))));
    }
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        arr_48 [i_12] [12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1663289692U)) || (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) -5555791127599712658LL))))))));
        arr_49 [i_12] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned short)15344)) & (((/* implicit */int) arr_19 [i_12] [i_12] [i_12] [i_12] [i_12])))));
    }
}
