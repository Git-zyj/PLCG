/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163296
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)81)) ? (32736) : (((/* implicit */int) (unsigned char)0))))) : (min((5636016609241099597ULL), (((/* implicit */unsigned long long int) (unsigned char)13)))))))))));
    var_17 = ((/* implicit */_Bool) (unsigned char)255);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) >> (((max((((/* implicit */unsigned long long int) (short)-32764)), (arr_6 [i_4]))) - (18446744073709518838ULL))))) <= ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) == (arr_5 [i_3]))))))));
                                var_20 -= ((/* implicit */unsigned short) ((-7231494222268808849LL) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_0])) ? (((((/* implicit */int) (signed char)-9)) * (((/* implicit */int) (unsigned short)0)))) : (arr_4 [i_0]))))));
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)3)), (((((/* implicit */int) arr_2 [i_4] [i_3])) + (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [3U] [i_1] [i_0]) << (((arr_11 [i_2] [i_1] [i_0]) - (7722804096706093018ULL)))))) ? (((((/* implicit */unsigned long long int) 7231494222268808848LL)) & (arr_11 [i_0] [i_0] [i_0]))) : ((-(arr_11 [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
}
