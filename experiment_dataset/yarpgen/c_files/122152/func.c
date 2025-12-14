/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122152
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_11)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_13 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) * (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)16383))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) 18446744073709551601ULL);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (13555151780747980392ULL));
                                arr_12 [i_4] [i_3] [i_2 - 4] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_2 - 4] [i_1])), (arr_10 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_3] [(signed char)5] [i_2 - 4])))) || (((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    var_16 += ((/* implicit */signed char) (-(min((13555151780747980392ULL), (((/* implicit */unsigned long long int) (unsigned char)150))))));
                }
            } 
        } 
    } 
}
