/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156299
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((var_0) / (var_16)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_18 = ((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0 - 2] [i_0] [i_3] [i_0 - 2] [i_3]) : (arr_5 [i_0 + 1] [i_0 + 1]));
                        var_19 = ((/* implicit */unsigned int) ((arr_8 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1]) != (arr_9 [i_0 - 1] [i_1] [i_2] [i_3])));
                        var_20 &= ((((/* implicit */_Bool) var_15)) ? (arr_4 [i_0] [i_1] [i_0 + 1]) : (arr_3 [i_3]));
                        var_21 |= arr_3 [i_0];
                    }
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_22 |= ((((/* implicit */_Bool) ((var_3) * (var_14)))) ? (((var_16) % (1317952272U))) : (4235664573U));
                        var_23 = ((var_1) % (arr_7 [8U] [i_4]));
                        var_24 = ((unsigned int) var_12);
                        var_25 += ((((unsigned int) var_6)) & (1824333054U));
                    }
                    for (unsigned int i_5 = 3; i_5 < 13; i_5 += 1) 
                    {
                        var_26 = var_12;
                        var_27 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_5 - 3] [i_1] [i_2] [i_0 - 1] [i_5]))));
                        var_28 = (+((~(arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        var_29 = ((((/* implicit */_Bool) ((unsigned int) 3246307280U))) ? (1409011117U) : ((~(arr_9 [i_5] [5U] [i_0] [i_0]))));
                    }
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1] [i_1])) && (((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_2])))))) & (arr_0 [i_1])))));
                    var_31 = (i_0 % 2 == zero) ? (((((var_9) ^ (var_5))) << (((arr_12 [i_0] [i_1] [i_1] [i_2]) - (1305334424U))))) : (((((var_9) ^ (var_5))) << (((((arr_12 [i_0] [i_1] [i_1] [i_2]) - (1305334424U))) - (3268688200U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            {
                                var_32 = ((((/* implicit */_Bool) ((var_8) & (0U)))) ? (arr_17 [i_0] [i_0] [i_0] [4U]) : (817423138U));
                                var_33 = ((2851643374U) & (2556484659U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_34 = ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (1322038854U) : (0U)));
                                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) < (var_10))))) >= ((-(arr_18 [i_0] [i_1] [i_2] [i_8]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2470634248U)) ? (5U) : (2972928442U)))) ? (arr_27 [i_0] [i_0] [i_0] [i_1] [i_10]) : (((((/* implicit */_Bool) 209657684U)) ? (var_5) : (var_12))))) ^ (((((/* implicit */_Bool) ((unsigned int) 1322038853U))) ? (((3989467543U) + (2972928441U))) : (((var_3) - (var_13)))))))));
                    var_37 = 2972928442U;
                }
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    var_38 ^= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))), (((unsigned int) arr_19 [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1] [i_1] [i_0 - 2])));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 2; i_12 < 13; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            {
                                var_39 = ((((arr_40 [i_0]) * (arr_40 [i_0]))) + (((arr_37 [i_0] [i_0] [i_0] [4U]) - (((((/* implicit */_Bool) 23U)) ? (2556484659U) : (2371620722U))))));
                                var_40 = ((/* implicit */unsigned int) max((var_40), ((((~((~(var_4))))) ^ (arr_22 [i_12])))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */unsigned int) (((+(arr_34 [i_0 - 2]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((min((3338808073U), (var_2))) < (arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2])))))));
                    var_42 = ((/* implicit */unsigned int) min((var_42), (2470634254U)));
                    var_43 &= ((unsigned int) (!((!(((/* implicit */_Bool) 1U))))));
                }
                var_44 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) ^ (var_9))))))), (((arr_27 [i_0] [i_0] [i_0 + 2] [1U] [i_0]) % (1824333054U))));
                var_45 = max((1329338627U), (((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8388607U)))))))));
            }
        } 
    } 
    var_46 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (var_9)))) ? (1824333062U) : (((var_0) >> (((var_11) - (2358886506U))))))), (min((var_1), (((((/* implicit */_Bool) 2809898197U)) ? (5U) : (1329338627U))))));
    var_47 = ((((/* implicit */unsigned int) ((/* implicit */int) min((((var_11) > (var_7))), ((!(((/* implicit */_Bool) var_8)))))))) + ((-(max((4104643185U), (0U))))));
    var_48 = (+(((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_2)) ? (434722824U) : (var_7))) : (var_1))));
}
