/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156466
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) var_0))), (((((/* implicit */_Bool) 0U)) ? (var_6) : (((/* implicit */unsigned long long int) var_11))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)28672), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (min((((/* implicit */unsigned int) (short)2)), (1471169724U))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) var_8)) : (0U)))) ? (min((1668253925U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)28648)))))));
        var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-54)))) ? (((/* implicit */unsigned long long int) (~(-545837107)))) : ((+(var_2)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (unsigned short)28353)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_12) - (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28671))))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28672))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((var_11), (((/* implicit */unsigned int) var_5))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (_Bool)0))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_17 [i_2] [14LL] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((signed char) 18446744073709551601ULL));
                    arr_18 [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((4294967295U) - (((/* implicit */unsigned int) 395941558))));
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) (signed char)4)) - (((/* implicit */int) (unsigned short)15)))))));
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_8)) & (var_6)));
    }
    var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1010006025) : (395941558)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(var_10)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            {
                arr_28 [i_5] [i_5] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (signed char)-127)) ? (2613591185U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80)))))))), (min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_1))) - (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned long long int) 2576970823U)) : (var_12)))));
                var_22 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) (_Bool)0)), (var_11))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max(((unsigned short)36880), (((/* implicit */unsigned short) (unsigned char)127)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (var_8)))) - (var_9)));
}
