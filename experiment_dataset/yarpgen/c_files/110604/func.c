/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110604
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-32760)), (var_9)))) ? (((/* implicit */long long int) 1816928771U)) : ((~(536870911LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
                var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) max((3207983425U), (((/* implicit */unsigned int) var_14)))))), (max((((/* implicit */unsigned int) ((short) var_10))), (2519193313U)))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((var_9), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) max((var_7), (var_11))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */long long int) var_1)) : (var_9)));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)101)) == (((/* implicit */int) (signed char)-41)))));
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((((_Bool)1) ? (arr_8 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_12)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))) * ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)26))) : (var_13)))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_13 [i_3] = ((/* implicit */short) max(((~(((/* implicit */int) arr_2 [i_1] [i_3])))), (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)-65)) == (((/* implicit */int) var_0))))), (var_7))))));
                    var_22 = ((/* implicit */short) (+(min((-3LL), (((/* implicit */long long int) (signed char)91))))));
                    arr_14 [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) min((536870907LL), (((/* implicit */long long int) max(((signed char)-21), (var_11))))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (short i_5 = 3; i_5 < 15; i_5 += 1) 
                        {
                            {
                                var_23 = (short)-32750;
                                arr_21 [i_0] [i_1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) (short)-6608);
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) + (3207983417U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            {
                arr_26 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) max(((signed char)75), ((signed char)-9)))) / (((/* implicit */int) ((_Bool) (_Bool)1)))));
                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            {
                                arr_35 [i_6] [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_3)))))))));
                                arr_36 [i_10] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */short) min(((_Bool)1), ((_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_39 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                        var_26 -= ((/* implicit */_Bool) ((short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-18928))) | (7540831422907768387LL))) & (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                    }
                    for (short i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        arr_42 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) min((max((((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */long long int) 3207983428U)) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 1691916309U))))))), (((/* implicit */long long int) min((var_11), (((/* implicit */signed char) (_Bool)1)))))));
                        arr_43 [i_6 - 1] [i_6] = ((/* implicit */unsigned int) (~(((long long int) var_1))));
                        arr_44 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (2269814212194729984ULL))))));
                    }
                    for (short i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-536870913LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                        var_28 = ((/* implicit */long long int) max((((signed char) ((((/* implicit */long long int) var_12)) - (-245174657641713416LL)))), (((/* implicit */signed char) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((short) var_14))))))));
                        arr_48 [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)1)), ((short)18941))))) : (arr_34 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6]))));
                    }
                    for (short i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
                    {
                        arr_52 [i_6] [i_6] = ((/* implicit */unsigned int) arr_46 [i_6] [i_6 + 1] [i_6] [i_6]);
                        var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)84)), (var_5)))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (var_6))) : (((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */long long int) var_12)))))) < (((/* implicit */long long int) max((12169426U), (((/* implicit */unsigned int) (signed char)-22)))))));
                        var_30 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_14)))), ((_Bool)1)))), (((((((/* implicit */_Bool) 1086983876U)) || (((/* implicit */_Bool) var_12)))) ? (var_1) : (((((/* implicit */_Bool) arr_50 [i_6] [i_6] [i_8] [i_14])) ? (var_1) : (var_1)))))));
                    }
                }
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) ((((((max((var_10), ((_Bool)1))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_2)))))) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
}
