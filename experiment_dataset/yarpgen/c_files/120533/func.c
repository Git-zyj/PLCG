/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120533
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
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_10 = ((((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (unsigned short)12537))))) ^ (423826180788442168LL));
                            var_11 = ((/* implicit */unsigned int) arr_10 [i_1]);
                        }
                    } 
                } 
                var_12 *= ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [3U] [i_0 - 4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (423826180788442168LL)))), (((((/* implicit */_Bool) 7668276176966667081LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))))), (max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (signed char)12)))))))));
            }
        } 
    } 
    var_13 = ((var_5) + (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 14; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            {
                arr_17 [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) ? (arr_1 [i_4 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [(unsigned char)16] [i_5]) < (((/* implicit */int) var_7)))))))));
                arr_18 [i_4] [i_4] = ((/* implicit */signed char) var_9);
                /* LoopNest 3 */
                for (unsigned int i_6 = 3; i_6 < 12; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_19 [i_8 - 2] [i_6 - 2] [i_7 + 1])))));
                                var_15 ^= ((/* implicit */unsigned long long int) (signed char)41);
                                var_16 = ((/* implicit */unsigned int) 0ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
