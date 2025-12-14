/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140752
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
    var_11 = ((/* implicit */_Bool) 7743033532604862134LL);
    var_12 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 += ((((/* implicit */_Bool) (signed char)34)) ? (10080712403806879436ULL) : (((/* implicit */unsigned long long int) ((int) 8552130378178565385ULL))));
                            arr_10 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((arr_5 [i_0 + 1] [i_0] [i_3 - 1]), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */signed char) var_5)))))))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) (unsigned short)14150))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)83))))));
                            arr_12 [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)59)), (min((((/* implicit */unsigned long long int) (signed char)-99)), (8552130378178565385ULL)))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)174)), (min((((/* implicit */int) (_Bool)1)), (arr_8 [i_0 + 4])))));
                var_16 = ((unsigned long long int) ((((/* implicit */_Bool) (signed char)34)) ? (7826513126280706956LL) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51385)))))));
                arr_13 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)51385))) ? (((/* implicit */unsigned long long int) min((arr_8 [i_0 + 1]), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (signed char)-65))))))) : (((((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (var_1))))))));
                var_17 = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (signed char)119)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_5 = 2; i_5 < 8; i_5 += 1) 
        {
            var_18 = ((/* implicit */signed char) (_Bool)0);
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) < (arr_21 [i_6] [i_5] [i_5 + 1]))))));
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_20 += ((/* implicit */_Bool) arr_1 [i_4]);
                    arr_25 [i_7] [i_6] [i_5] [i_4] = ((/* implicit */short) ((long long int) (unsigned short)51376));
                    arr_26 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (-2147483647 - 1));
                    arr_27 [i_4] [i_4] [i_5] [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (1760849952) : (((/* implicit */int) (signed char)57))));
                }
            }
            for (signed char i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                arr_30 [i_4] [i_4] [i_4] = ((/* implicit */long long int) (signed char)-94);
                arr_31 [i_4] [i_5] [i_8] = ((/* implicit */int) ((arr_15 [i_4] [i_5 - 2]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_5 + 4])))));
                var_21 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_29 [i_4] [i_5] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))));
                arr_32 [i_8] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_5 + 2] [i_8] [i_8 - 2]))));
                arr_33 [i_8] [i_4] [i_4] = ((/* implicit */_Bool) ((arr_6 [i_8 - 1] [i_8 - 2] [i_5 + 2]) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_6 [i_8 - 1] [i_8 - 2] [i_5 + 2]))));
            }
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)99)))))));
        }
        arr_34 [i_4] = ((/* implicit */unsigned short) ((short) var_6));
    }
}
