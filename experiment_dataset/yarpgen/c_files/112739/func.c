/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112739
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
    var_14 = ((/* implicit */unsigned long long int) 4294967295U);
    var_15 = ((/* implicit */unsigned short) ((signed char) (unsigned char)50));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [(signed char)17] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((int) var_3))), (arr_1 [i_0] [i_0])));
                var_16 = ((/* implicit */unsigned char) arr_4 [i_0]);
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)1)))) >> (((min((arr_6 [i_0] [i_0] [16LL] [i_0]), (((/* implicit */long long int) var_9)))) + (6314214306807329584LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) var_10)) : (var_1)))) ? (((((/* implicit */unsigned long long int) arr_1 [i_0] [12])) / (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) / (arr_0 [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_3 [i_1]))));
                    var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-1), (var_11))))) / (((((/* implicit */_Bool) var_1)) ? (-4169304471009187307LL) : (arr_6 [i_0] [14U] [i_0] [i_0]))))), (((/* implicit */long long int) max((((/* implicit */int) max((var_6), (var_6)))), (((((/* implicit */int) (unsigned char)252)) / (var_1))))))));
                    var_20 = ((/* implicit */signed char) ((arr_0 [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [18LL])) ? (arr_0 [16] [16]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11223)) ? (((/* implicit */long long int) 1073741823U)) : (72057594037927935LL)))) ? (((((/* implicit */_Bool) var_6)) ? (-4854705664044286012LL) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [(unsigned char)13] [i_1]))));
                    arr_10 [i_0] [i_1] [i_3] = ((/* implicit */short) ((unsigned long long int) var_13));
                }
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)(-127 - 1));
                                var_22 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_17 [i_0] [i_0] [18LL] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_23 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)69)) ? (3221225481U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16663)))))), (((7047165603416437557ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), ((+(max((var_5), (((/* implicit */unsigned long long int) 4230782023U))))))));
                                arr_20 [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_18 [i_1] [i_4] [i_4] [i_6]))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741814U)) ? (((/* implicit */int) (short)16664)) : (((/* implicit */int) (signed char)0))))))))));
                                arr_21 [i_6] [i_5] [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((20U), (((/* implicit */unsigned int) (unsigned char)5))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) ((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_4 [i_4])))))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) (signed char)-1)))) ? (((/* implicit */unsigned long long int) -9223372036854775804LL)) : (var_0)));
                    var_24 = ((/* implicit */long long int) 2636754520807972550ULL);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-23697))));
        arr_27 [i_7] [11] = ((/* implicit */signed char) ((unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (arr_11 [i_7] [6ULL] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_2)) : (var_0))))));
        var_25 = ((/* implicit */signed char) var_12);
    }
}
