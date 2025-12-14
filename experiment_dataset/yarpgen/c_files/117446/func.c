/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117446
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
    var_13 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) 2147483623)))))) : (var_4)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) 2147483620)) + (589991424U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (short)-5127))))) ? (((/* implicit */unsigned long long int) var_6)) : (var_7))) : (((/* implicit */unsigned long long int) -2147483621))));
                var_15 *= ((((/* implicit */unsigned int) (-(-2147483608)))) + (((((/* implicit */unsigned int) 15)) + (753127213U))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_7))))));
                                arr_13 [i_4] [i_3 - 1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)118)) ? (var_1) : (((/* implicit */unsigned long long int) 8297364594777746122LL)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((unsigned long long int) (short)22978)) : (((((36028797018963967ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((134217727ULL) + (((/* implicit */unsigned long long int) (+(1791289724)))))));
            }
        } 
    } 
}
