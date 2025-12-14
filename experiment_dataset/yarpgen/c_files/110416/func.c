/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110416
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)52787)))), (max((var_8), (((/* implicit */long long int) (unsigned short)33511)))))))));
    var_16 = ((/* implicit */int) var_14);
    var_17 = ((/* implicit */unsigned int) max((min((var_8), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_0)))))))));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_11 [(signed char)1] = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_1)), ((~(arr_8 [i_0]))))) & (var_0)));
                    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)181)) && (((/* implicit */_Bool) (unsigned short)21977)))))));
                    var_19 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((max((((/* implicit */unsigned int) var_1)), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (arr_8 [i_2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_4])), (arr_17 [i_0] [i_0] [(unsigned char)2]))))) - (max((-5263258023092069704LL), (arr_0 [i_0]))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) max((-5263258023092069704LL), (-5263258023092069704LL)))) ? (var_2) : ((-(((/* implicit */int) arr_18 [i_3])))))))));
                                arr_19 [i_0 + 2] [i_1] [i_1] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */short) ((-5263258023092069704LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))))))))), (min((var_3), (((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_0 - 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [(unsigned short)11] = ((5263258023092069682LL) - (576460752303423480LL));
        arr_21 [i_0] = (~(5263258023092069703LL));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */unsigned char) ((400392734U) ^ (var_12)));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_5])))))));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(792667029))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_24 ^= (+(max((max((((/* implicit */long long int) (signed char)67)), (-5263258023092069704LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)3)) >> (((6148328747260618589LL) - (6148328747260618575LL)))))))));
        arr_27 [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((6148328747260618589LL) ^ (((/* implicit */long long int) var_14))))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned int) 16384)) : (arr_22 [i_6])))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)234)) == (((/* implicit */int) (unsigned short)56387)))))) : (max((5263258023092069703LL), (((/* implicit */long long int) arr_22 [18U])))))))));
        arr_28 [i_6] &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_6])) / (((/* implicit */int) arr_26 [i_6]))))), (var_8)));
        var_25 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)26)), (159139460)));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_29 [i_7])) + (arr_23 [i_7])));
        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [(short)18])) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)253)) / (((/* implicit */int) var_7)))))));
        arr_32 [i_7] [i_7] = (-(((4294967290U) + (6U))));
    }
}
