/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131834
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (1794464340U) : (1794464347U))))) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((1794464351U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16112))))))))), (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) arr_5 [i_1 + 4])) : (((/* implicit */int) arr_5 [i_0]))))));
                                var_19 ^= ((/* implicit */_Bool) (unsigned short)16116);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49425)) / (((/* implicit */int) (signed char)85))))), (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) -802769264753231214LL)) : (6089424697724084303ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31)))));
                                var_21 = ((/* implicit */signed char) arr_16 [i_0] [i_1] [i_1] [i_6]);
                                arr_22 [i_0] [(unsigned char)10] [i_5] [(short)4] [i_5] [i_6 - 2] [i_7] = ((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned long long int) 6296234710151333746LL))));
                                var_22 = ((((/* implicit */_Bool) (-(802769264753231222LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (+(((/* implicit */int) (signed char)82))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) 1222256619))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_1 + 4] [i_1 + 4]);
                var_24 = ((/* implicit */int) max((var_24), (var_2)));
            }
        } 
    } 
}
