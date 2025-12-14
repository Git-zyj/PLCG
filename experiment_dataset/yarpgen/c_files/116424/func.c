/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116424
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_18 [i_4 - 1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) (signed char)-1);
                                var_13 = ((/* implicit */signed char) (((((((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) + ((-(((/* implicit */int) var_0)))))) + (2147483647))) << (((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)65520)))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))) - (35)))));
                                var_14 = (+(((((/* implicit */unsigned long long int) 939970856U)) + (max((14727272871734379039ULL), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)10])))))));
                                arr_19 [i_4] [i_4 - 1] [i_3] [(signed char)5] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) arr_8 [i_4]));
                                arr_20 [i_4 - 1] [(short)12] [(short)12] [11U] [i_0] = ((/* implicit */unsigned int) (-(max((3719471201975172570ULL), (((/* implicit */unsigned long long int) (unsigned char)88))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((signed char) (~((~(939970851U))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) 3719471201975172576ULL);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3515304201U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))) : (1756536389U)));
    var_18 = ((/* implicit */signed char) max((((((((/* implicit */int) var_11)) == (((/* implicit */int) var_4)))) && (((/* implicit */_Bool) ((12416596895483076619ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28)))))))), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) == (((/* implicit */int) var_1))))));
    var_19 = ((/* implicit */long long int) ((3515304201U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56467)))));
}
