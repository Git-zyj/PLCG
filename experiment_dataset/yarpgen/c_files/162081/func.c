/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162081
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
    var_12 = ((/* implicit */unsigned int) max((((max((((/* implicit */unsigned long long int) (unsigned short)6)), (4096130787633042609ULL))) >> (((((((/* implicit */_Bool) 547650089)) ? (((/* implicit */int) (short)20354)) : (((/* implicit */int) var_9)))) - (20299))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (((((/* implicit */int) (unsigned short)6)) << (((/* implicit */int) (unsigned short)23)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_10 [i_2] [i_1] [(signed char)2] [i_3] |= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65512)) / (((/* implicit */int) (signed char)27)))) / ((-(((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)64512))))))));
                        var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_0]))));
                        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+((+(((/* implicit */int) var_8)))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) min((var_15), (min((((/* implicit */long long int) ((((/* implicit */int) (signed char)88)) / (((/* implicit */int) arr_1 [i_0 + 1]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-5837671163915512913LL)))))));
        arr_11 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((~(2065566601U)))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_20 [(_Bool)1] [2LL] [i_5] [i_0] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)197))));
                    arr_21 [i_0] [i_5] = min(((-(((/* implicit */int) var_9)))), ((-((-(((/* implicit */int) (unsigned short)40389)))))));
                }
            } 
        } 
    }
}
