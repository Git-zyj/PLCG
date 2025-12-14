/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116413
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
        var_17 = ((/* implicit */int) var_5);
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) max(((short)-13515), (((/* implicit */short) arr_4 [i_1]))))) : (((/* implicit */int) arr_1 [i_1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (+((-(3868034811U)))));
                    var_20 = ((/* implicit */long long int) ((((arr_0 [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))) != ((-(arr_0 [i_2])))));
                    arr_12 [i_3] [i_2] [(signed char)1] [9ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((short)-13529), (((/* implicit */short) (_Bool)1))))), (66846720ULL)))) ? (max((((((/* implicit */_Bool) var_8)) ? (201326592) : (((/* implicit */int) (unsigned char)191)))), ((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))))))));
                    var_21 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)32767)) ? (max((var_5), (((/* implicit */unsigned int) (short)-2612)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_0))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (var_9)))) <= ((-(arr_10 [i_1] [i_1] [i_1] [i_1])))));
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)2616)))), (((/* implicit */int) ((unsigned char) (short)-64)))))), (var_5)));
    }
    for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 4) 
    {
        arr_17 [i_4] = ((((/* implicit */int) ((((long long int) 17013422931873979000ULL)) < (((/* implicit */long long int) max((((/* implicit */int) (short)-10035)), (957521902))))))) << (((((/* implicit */int) var_2)) + (6304))));
        arr_18 [i_4] [i_4] |= ((/* implicit */long long int) (short)-26468);
        var_24 |= ((/* implicit */signed char) var_9);
    }
    for (unsigned int i_5 = 3; i_5 < 14; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_28 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_5 [i_5 - 3] [i_6 - 2]);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 15; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)-26454)));
                        arr_31 [i_5] [i_5] [i_6] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_26 [i_5] [i_5] [i_5] [i_5])))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (2924296735822100804ULL))))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2616)) + (((/* implicit */int) (!(((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)26468)))))))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_12))));
        arr_32 [i_5] = ((((/* implicit */_Bool) (-(arr_26 [i_5 - 2] [17ULL] [i_5 - 2] [i_5])))) ? ((((!(((/* implicit */_Bool) (unsigned char)48)))) ? (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (arr_25 [i_5] [i_5] [14LL]))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)13551), ((short)26471))))) : (((((/* implicit */_Bool) 2013265920ULL)) ? (-7435061237658352409LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            var_28 = ((/* implicit */_Bool) (short)28017);
            var_29 = ((/* implicit */unsigned int) (short)2625);
        }
        for (int i_10 = 2; i_10 < 17; i_10 += 1) 
        {
            var_30 = ((/* implicit */int) (short)-32756);
            arr_39 [i_5] [i_5] = ((/* implicit */_Bool) arr_33 [i_10]);
            var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_12)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (6304346887100360047LL))))));
            var_32 = ((/* implicit */signed char) max((arr_13 [i_5 - 3]), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)30))) != (arr_11 [i_5 + 1] [i_5] [i_10]))))));
        }
    }
    var_33 = ((/* implicit */short) var_0);
    var_34 = max(((-(var_3))), (((((6304346887100360062LL) <= (((/* implicit */long long int) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) var_16)))))) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        for (int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            {
                var_35 -= (short)2625;
                /* LoopNest 2 */
                for (long long int i_13 = 4; i_13 < 11; i_13 += 2) 
                {
                    for (int i_14 = 1; i_14 < 14; i_14 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((-4395916601519890912LL), (arr_10 [i_14] [i_13] [i_12] [i_11])))), (max((arr_0 [i_14 - 1]), (((/* implicit */unsigned long long int) arr_29 [i_14 + 1] [i_14 - 1]))))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) ((unsigned char) var_15)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
