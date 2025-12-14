/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157169
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-8)) == (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_2)) ? (var_1) : (536854528U)))))));
                                var_12 = ((((/* implicit */unsigned int) max((max((((/* implicit */int) arr_5 [i_0] [5U])), ((-2147483647 - 1)))), (arr_6 [i_0])))) % ((~(arr_2 [i_0]))));
                            }
                        } 
                    } 
                    var_13 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-8)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_0] [i_1] [i_2 + 2] [i_2] [i_1]))))))), (min((18446744073709551611ULL), (10006837187765495340ULL)))));
                    var_14 ^= ((unsigned short) ((arr_2 [i_0 + 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)58221)) : (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (int i_5 = 2; i_5 < 15; i_5 += 4) 
    {
        var_16 = ((/* implicit */int) ((short) ((max((((/* implicit */int) arr_16 [i_5 + 1] [i_5 - 1])), (243772235))) & (((((/* implicit */int) arr_16 [i_5 - 1] [i_5 + 1])) << (11ULL))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (int i_9 = 2; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_24 [i_6 + 1]), (((unsigned char) arr_21 [i_5 + 1] [i_6 + 1] [10U])))))) : (var_1));
                                arr_33 [i_5] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */signed char) var_1);
                                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6 + 1] [i_5 - 2])) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_29 [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5])))))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (18446744073709551611ULL)))))));
                            }
                        } 
                    } 
                    var_19 = -8127529683472665086LL;
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned short) arr_19 [(unsigned char)8] [i_5])))));
    }
    var_21 = ((/* implicit */int) var_1);
}
