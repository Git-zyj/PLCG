/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100879
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_5))))), (max((var_8), (((/* implicit */signed char) var_0))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_10 *= ((/* implicit */short) var_4);
                    arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((min((var_9), (((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) var_1)) & (((/* implicit */int) var_0)))))) : (min((((((/* implicit */int) var_5)) % (((/* implicit */int) var_7)))), (((/* implicit */int) min((var_6), (((/* implicit */signed char) var_5)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */int) var_3))))) - (var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                                arr_17 [i_0] [i_1 - 1] [i_2] [i_3 + 2] [i_4 - 2] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    var_11 = min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_4))), (min((((/* implicit */unsigned long long int) var_6)), (var_2))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) && (var_5))))) & (max((var_2), (((/* implicit */unsigned long long int) var_6)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) (short)-22488)), (5582141809697876304ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22487)) || (((/* implicit */_Bool) (unsigned short)61904)))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_2))));
                    var_13 = ((/* implicit */long long int) var_7);
                    var_14 |= ((/* implicit */unsigned short) min((min((var_9), (((/* implicit */int) var_5)))), (((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_3))))) / (var_9)))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((var_9) % (((/* implicit */int) var_1)))), (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) var_1)), (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_6))))) : (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_5), (var_5)))) + (((/* implicit */int) var_1))))))))));
        /* LoopNest 3 */
        for (unsigned int i_8 = 1; i_8 < 16; i_8 += 3) 
        {
            for (signed char i_9 = 3; i_9 < 14; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 3; i_11 < 15; i_11 += 3) 
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */_Bool) max(((short)22492), (((/* implicit */short) (signed char)-1))))) ? (((/* implicit */unsigned long long int) var_9)) : (min((var_2), (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_18 *= ((/* implicit */short) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))));
                            arr_38 [i_9] [i_9] [i_9 - 3] [i_9 + 1] [i_9 - 3] = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((var_0), (var_0)))))), (((/* implicit */int) var_1))));
                            var_19 = ((/* implicit */signed char) var_9);
                            arr_39 [i_8 - 1] [i_9 - 2] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) var_5)), (var_3)))) & (((/* implicit */int) max((((/* implicit */short) min((((/* implicit */signed char) var_0)), (var_6)))), (min((((/* implicit */short) var_0)), (var_3))))))));
                        }
                        for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 1) 
                        {
                            var_20 |= ((/* implicit */unsigned short) var_3);
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */short) var_7)), (max((var_3), (((/* implicit */short) var_1))))));
                        }
                        arr_42 [i_5] [i_5] [i_8 + 1] [i_9 + 3] [i_9 + 2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((var_2) % (((/* implicit */unsigned long long int) 192391097U)))) / (((/* implicit */unsigned long long int) var_9))))));
                    }
                } 
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        var_22 = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */int) var_3)) != (((/* implicit */int) var_8)))) || (((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned short)3631)))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3631)) || (((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) var_8))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1859)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5336733351815757266LL)));
        arr_46 [i_13] = ((/* implicit */int) var_2);
        arr_47 [i_13] [i_13] = min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_8)));
        var_24 = ((/* implicit */long long int) var_0);
    }
    var_25 = ((/* implicit */short) min((((min((((/* implicit */unsigned long long int) var_6)), (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))), (((/* implicit */unsigned long long int) var_8))))));
    var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) min((18446744073709551614ULL), (((/* implicit */unsigned long long int) 1889197556404185368LL))))) ? ((((_Bool)1) ? (15388798385960745391ULL) : (((/* implicit */unsigned long long int) 192391105U)))) : (min((((/* implicit */unsigned long long int) var_0)), (var_4)))))));
}
