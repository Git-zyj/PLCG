/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129452
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7179))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 13082407055752119917ULL)) ? (((/* implicit */unsigned long long int) 576460752303423488LL)) : (9007199254740991ULL)))))) ? ((+(3ULL))) : (0ULL)));
                var_16 = ((/* implicit */unsigned int) arr_1 [i_1]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1])))))) - (32757)))));
                            var_18 = ((/* implicit */unsigned short) max((20ULL), (min((9007199254740992ULL), (((/* implicit */unsigned long long int) (signed char)8))))));
                            arr_13 [i_3] [i_3] [i_2] [i_3] [i_3] &= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)13364)))) - (((var_12) - (((/* implicit */unsigned long long int) 923308023)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_5)) - (((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_4 = 3; i_4 < 19; i_4 += 4) 
    {
        var_19 = ((((/* implicit */unsigned long long int) 603960305999379871LL)) * (0ULL));
        arr_16 [i_4] = ((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_15 [i_4] [i_4 + 2]))))) >> (((((/* implicit */int) (short)-1)) + (17))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_20 = ((/* implicit */short) arr_17 [i_5] [i_5]);
        arr_20 [(unsigned short)12] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18437736874454810625ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5])))))) ? (arr_17 [i_5] [i_5]) : (((arr_17 [i_5] [i_5]) / (arr_17 [i_5] [i_5])))));
    }
    for (short i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)25903))))), (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6]))) : (-1269048953487208199LL)))));
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_4 [i_6] [i_6]) || (((/* implicit */_Bool) var_5))))) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_6] [i_6] [i_6] [i_6])), (var_9))))));
    }
}
