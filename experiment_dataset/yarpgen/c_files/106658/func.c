/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106658
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
    var_12 = ((/* implicit */int) ((((/* implicit */int) var_3)) != ((~(((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((16012589010405319585ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) arr_0 [i_0]))))))));
                    var_14 = ((/* implicit */unsigned short) min(((-(arr_4 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) arr_0 [i_0]))));
                    var_15 *= ((((((/* implicit */_Bool) min((-3525515522460771062LL), (((/* implicit */long long int) arr_2 [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) (short)-9414)))))) : (min((var_10), (9636924423459481899ULL))))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_1 + 1] [i_2 - 1])) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))))) - (3109079506ULL))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_2 - 2] [i_4 + 4] [i_1 - 1]) * (374549845U)))) ? ((+(arr_4 [i_2 - 1] [i_4 + 2] [i_1 + 2]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_3] [i_2] [i_2 - 1] [i_2])))))));
                                var_17 = ((/* implicit */int) min((var_17), ((((((~(-1662787448))) | ((-(((/* implicit */int) (short)-9412)))))) >> ((((-(((/* implicit */int) arr_11 [i_2] [i_1] [i_2 + 1] [i_3] [i_4] [i_3] [i_2])))) - (35)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)12492)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9413))) : (1082497130975461250LL))) >= (var_7))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3920417451U)))) : (var_2)))));
}
