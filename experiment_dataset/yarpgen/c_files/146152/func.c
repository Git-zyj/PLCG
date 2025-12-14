/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146152
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_4 + 4] [i_4 + 3])))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (max((((/* implicit */long long int) arr_5 [i_0])), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                                var_14 = ((/* implicit */short) (-(min((((((/* implicit */_Bool) 3111447379004382156ULL)) ? (2105991165364420118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (var_10)))));
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (2105991165364420118ULL)))) ? (16340752908345131508ULL) : (((arr_8 [i_0] [i_0] [(unsigned char)14] [i_0] [12LL] [i_0]) >> (((var_0) + (5669354934387725689LL))))))), (((2105991165364420089ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) min((1118768262U), (((/* implicit */unsigned int) var_2))))), (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(2105991165364420116ULL))))))));
}
