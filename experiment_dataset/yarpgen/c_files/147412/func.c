/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147412
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 12780027231729081089ULL)) ? (((((/* implicit */_Bool) 2ULL)) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-1), (arr_8 [i_0] [i_1 + 3] [i_1] [14ULL] [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))))));
                            arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -614699932)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) -1779771728)) : (0LL)))) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */_Bool) (short)1047)) ? (3037193553U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23)))))))) : (max((((unsigned long long int) (signed char)-22)), (((18446744073709551613ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27039)))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_7 [i_3 + 3] [i_1] [i_1 + 1] [i_3 + 3]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) / (8748163530474351730ULL)));
                            arr_11 [11] [i_1] = ((/* implicit */short) (-((-(max((((/* implicit */long long int) -614699932)), (var_3)))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((0LL) | (((/* implicit */long long int) 2574517499U))))))) ? (max((1779771728), (((/* implicit */int) ((5ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */int) ((unsigned char) 2ULL)))));
                arr_13 [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21110))) & (var_13)))), (((unsigned long long int) (unsigned char)205)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_1)))));
}
