/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188083
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_10 *= ((((/* implicit */_Bool) ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50746)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 805306368U)) - (arr_2 [i_0 - 2])))) : (283709287841473820ULL));
                    arr_8 [i_2] = ((/* implicit */unsigned int) (unsigned char)38);
                    var_11 *= ((/* implicit */unsigned char) (-(arr_2 [i_0 - 2])));
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 643360892U)))) : (1260268259U))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) arr_3 [i_3 - 2] [i_1])) ? (15557248616543280573ULL) : (18163034785868077795ULL))))), (((max((0ULL), (((/* implicit */unsigned long long int) (signed char)68)))) ^ (((((/* implicit */_Bool) 18446744073709551592ULL)) ? (var_9) : (18163034785868077795ULL))))))))));
                            var_14 = ((/* implicit */long long int) arr_4 [i_3]);
                            var_15 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((((/* implicit */int) (short)-7394)) / (((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) (unsigned short)50746)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */short) (unsigned short)13941);
                            var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)7393)) ? (((/* implicit */int) (unsigned short)25158)) : (((/* implicit */int) (signed char)94))))));
                        }
                        var_17 -= ((/* implicit */unsigned char) 323443553U);
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) var_3)) - (((var_9) * (23ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (805306374U)))) && (((/* implicit */_Bool) var_7))))))));
}
