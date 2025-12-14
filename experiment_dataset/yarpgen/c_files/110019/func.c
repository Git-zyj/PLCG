/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110019
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0] [i_1])) << (((arr_1 [23U]) + (1342236999409700582LL))))) >> (((min((arr_1 [i_0]), (((/* implicit */long long int) var_6)))) + (1342236999409700573LL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7322))));
                                var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_3] [i_4 + 2] [i_4 + 1] [i_3] [i_3])) ? (arr_12 [i_4 - 2] [i_3] [i_4 - 4] [i_4 - 4] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))))));
                                var_18 -= max((((/* implicit */unsigned short) arr_4 [i_2] [i_3] [i_4])), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61783))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_1] [(unsigned short)15] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(unsigned short)18] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_15 [22] [i_5] [7LL] [i_0]), (((/* implicit */unsigned short) arr_5 [i_0] [(unsigned char)18] [i_0]))))))))));
                                var_19 = ((((/* implicit */_Bool) min((285971686), (((/* implicit */int) (unsigned short)58214))))) ? ((-(((((-1988868152) + (2147483647))) >> (((-3478929264645057931LL) + (3478929264645057932LL))))))) : (((/* implicit */int) (_Bool)1)));
                                var_20 -= ((/* implicit */unsigned short) (-((-(arr_16 [i_1] [i_5] [i_2] [i_5] [i_6] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_11) : ((~((~(((/* implicit */int) var_5))))))));
}
