/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154086
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)252)) ^ (((/* implicit */int) (signed char)110)))));
                                var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) max(((unsigned char)8), (((/* implicit */unsigned char) (signed char)-118)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))) ? (((unsigned int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)56127)) - (56114)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
                            }
                        } 
                    } 
                    arr_15 [i_2] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8358496863815642040ULL) : (((/* implicit */unsigned long long int) 897230803348369812LL)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) max((((long long int) ((int) var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (2147483648U)))) ? (((/* implicit */unsigned int) var_5)) : (max((((/* implicit */unsigned int) (unsigned short)56150)), (var_6))))))));
}
