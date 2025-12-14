/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145161
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
    var_11 ^= ((/* implicit */unsigned char) 1572658163U);
    var_12 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (unsigned char)20);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_14 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)155), (var_9)))) ? ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] [i_4])))) : (((((/* implicit */_Bool) (signed char)9)) ? (530823120) : (((/* implicit */int) (unsigned char)20))))))) - ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (3023483883109462112ULL))))));
                                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((((/* implicit */_Bool) 4187155508U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_3)))))), (((/* implicit */int) (short)10372)))))));
                                arr_13 [i_0] [i_1] [14] [i_3 + 1] [i_4] |= ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_10 [i_1 + 3] [i_1] [i_2 - 1] [i_3 - 1]), (arr_10 [i_1 + 1] [i_2] [i_2 + 2] [i_3 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
