/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13521
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned short) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) (signed char)-58))))));
                                var_17 ^= min((((/* implicit */int) (!(((/* implicit */_Bool) (+(31))))))), (((((/* implicit */_Bool) ((unsigned char) (signed char)-58))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-58)) > (((/* implicit */int) var_8))))) : ((-(((/* implicit */int) (unsigned short)65532)))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */long long int) max((((/* implicit */int) ((((6094772366218602597ULL) + (((/* implicit */unsigned long long int) 583632187422153605LL)))) < (((12351971707490949008ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))))))), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14)))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) max((min((15138547813586685267ULL), (1ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)53)))))));
                                var_20 = ((/* implicit */unsigned char) ((_Bool) max((max((6094772366218602594ULL), (6094772366218602582ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))));
                                arr_15 [i_1] = min(((-(max((((/* implicit */long long int) (short)-6)), (0LL))))), (((/* implicit */long long int) ((unsigned int) 12351971707490949012ULL))));
                                var_21 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned short) var_14)));
                                var_22 = ((/* implicit */int) (~(min((var_2), (((/* implicit */unsigned long long int) var_15))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = max((7942795772291643893ULL), (6094772366218602569ULL));
                    var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((10503948301417907716ULL) > (var_14)))) << (((min((var_9), (((/* implicit */unsigned int) var_11)))) - (50230U)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-4960)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned char)73))))), (((((/* implicit */_Bool) (unsigned short)38076)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
