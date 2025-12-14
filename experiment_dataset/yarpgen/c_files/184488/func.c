/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184488
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
    var_18 = ((/* implicit */_Bool) (unsigned char)39);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)20)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-19448))))) ? (((((/* implicit */_Bool) var_17)) ? (arr_0 [11LL]) : (((/* implicit */long long int) 1373741339)))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_10 [i_0] [i_0] [i_1] [i_0]) : (3909802684008068246ULL))))))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-8)), (arr_8 [i_2] [i_2] [i_2 + 3] [i_2]))))))) << (((((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (332328447)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (8107767378260545117LL))) + (39LL))))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14536941389701483369ULL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) ((1008) < (((/* implicit */int) var_17)))))))), ((-(max((3859973141U), (((/* implicit */unsigned int) (unsigned char)155))))))));
                    var_22 -= ((/* implicit */_Bool) max((max((3135844589404730820LL), (((((/* implicit */long long int) 1073725440U)) & (var_0))))), ((~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 1373741339)) : (var_0)))))));
                    arr_15 [20] [20] &= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0])) ^ (((/* implicit */int) (short)-15648))));
                    var_23 &= ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49745))) > (3859973166U)))) < (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) ((signed char) arr_2 [i_2])))))));
                }
            } 
        } 
    } 
}
