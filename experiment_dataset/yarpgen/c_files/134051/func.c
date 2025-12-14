/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134051
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_1 [i_1] [i_0]))))) ? (((/* implicit */int) ((arr_5 [i_1]) == (arr_5 [i_0])))) : (((/* implicit */int) (!((_Bool)1)))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) min((34292629504ULL), (((/* implicit */unsigned long long int) 1754169311))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 4294967295U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_22 ^= min((((/* implicit */long long int) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))), (var_11));
                                var_23 = ((/* implicit */unsigned long long int) ((long long int) (((~(((/* implicit */int) (_Bool)1)))) > ((+(-1292528755))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) arr_11 [i_4]);
                    var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [12LL] [12LL])) && (((/* implicit */_Bool) ((unsigned char) arr_21 [(signed char)9] [i_3] [i_3 - 3] [i_3 + 1] [i_3])))));
                }
            } 
        } 
    } 
}
