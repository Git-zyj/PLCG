/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104264
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_2))))) ^ (((/* implicit */int) ((unsigned short) var_12)))))) ? (((min((((/* implicit */unsigned long long int) 1223695818U)), (var_8))) >> (((var_1) - (17175737086725446501ULL))))) : (var_8));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (signed char)-65)) ? (54043195528445952LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
                    var_16 = max(((-(((/* implicit */int) (unsigned char)175)))), ((+(((/* implicit */int) ((signed char) arr_7 [0] [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 + 2] [i_3] [i_2]))))), (695574114)));
                                arr_16 [i_3] = (~(min((((((-885793731) + (2147483647))) << (((((-885793731) + (885793732))) - (1))))), (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) arr_9 [i_1] [(short)6])) : (((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((int) ((min((((/* implicit */long long int) (unsigned char)0)), (var_11))) + (((/* implicit */long long int) ((((/* implicit */int) (signed char)6)) - (((/* implicit */int) (unsigned short)22882))))))));
                                var_18 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)0)))), ((+(((((/* implicit */int) (short)9428)) % (((/* implicit */int) arr_5 [i_1] [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            {
                var_19 |= arr_27 [i_7] [i_8] [13U];
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (signed char)-64))));
            }
        } 
    } 
}
