/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18760
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
    var_20 = ((/* implicit */unsigned long long int) var_19);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_21 *= ((/* implicit */signed char) min((17164339280693745177ULL), (17164339280693745177ULL)));
                    var_22 = ((/* implicit */long long int) var_18);
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) arr_5 [i_1])), (var_2)))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 17164339280693745184ULL)) ? (var_10) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) arr_5 [8ULL])) : (2147483647)))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+((+(590031348094726774LL)))))), (((((/* implicit */_Bool) 6536481939247584628ULL)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))))));
                        arr_17 [i_3] [i_4] [i_4 - 1] [i_5] [i_3] |= ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-51)), (var_15)))) ? (min((17164339280693745177ULL), (17164339280693745177ULL))) : (((/* implicit */unsigned long long int) (+(8124304723908873300LL))))))));
                        var_24 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_16 [i_4 - 2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_16 [i_4 - 1])))), ((~(-2147483632)))));
                        var_25 += ((/* implicit */unsigned int) (unsigned short)48928);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_11 [i_0])));
    }
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) min((var_27), (((((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_22 [i_7])), (860649916U)))) * (((long long int) (signed char)-53)))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_28 [i_6] [i_7 + 1]), (arr_28 [i_6] [i_7 + 1])))))))));
                                arr_30 [i_8] [(signed char)0] [i_8] [4LL] [(unsigned short)22] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2147483647) | (((/* implicit */int) var_16))))) ? (((((/* implicit */unsigned long long int) -2147483625)) & (var_15))) : (((/* implicit */unsigned long long int) arr_26 [i_6] [i_6] [i_8] [i_9]))))) ? (((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) var_3))))) + (arr_18 [i_8]))) : (((/* implicit */unsigned long long int) ((-1202170007446536746LL) / (((/* implicit */long long int) arr_27 [i_7 + 1] [i_6] [i_7 - 1] [i_7] [i_6])))))));
                            }
                        } 
                    } 
                    arr_31 [7U] = ((/* implicit */unsigned short) min((min((18446744073709551611ULL), (((/* implicit */unsigned long long int) min(((_Bool)1), (var_14)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-2147483621)))))))));
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)105))));
                }
            } 
        } 
    } 
}
