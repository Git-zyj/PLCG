/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142874
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
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)19277)) ? (((/* implicit */int) (short)-19303)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                arr_5 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-19278)), ((unsigned short)27322)))), (min(((((_Bool)0) ? (arr_0 [2U]) : (var_14))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_22 [1LL] [1LL] [(signed char)4] [i_5] [i_2 + 3] [(_Bool)1] = ((/* implicit */signed char) (((-(max((var_14), (((/* implicit */unsigned long long int) (_Bool)1)))))) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2258665270U))))) : (((/* implicit */int) (short)6806)))))));
                                var_22 = ((/* implicit */unsigned long long int) var_6);
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~((-((((_Bool)0) ? (((/* implicit */unsigned long long int) 3494200884U)) : (arr_17 [i_2] [i_4] [i_5 + 1] [i_6]))))))))));
                            }
                        } 
                    } 
                    var_24 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1518448156)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_3] [(short)2] [(short)2] [i_3])))) : (-2029337564411952009LL))))));
                }
            } 
        } 
    } 
}
