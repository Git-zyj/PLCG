/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170224
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
    var_19 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) 142708794);
                                var_21 += (~(((((/* implicit */int) var_1)) % (((/* implicit */int) ((142708811) == (142708811)))))));
                                arr_13 [(unsigned short)8] [4LL] [i_3] [i_2] [i_3] [(signed char)7] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) - (max((((/* implicit */unsigned long long int) (unsigned short)49846)), (18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) var_13))))) ? (var_6) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (-1126908808071892441LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_11)))) : (-142708811)))));
                                var_22 -= ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (-2147483647 - 1))))))) ? (((/* implicit */int) ((short) var_7))) : (142708792)));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [8ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((142708806) << (((((var_10) + (1690082874))) - (22)))))))) ? (((unsigned long long int) (unsigned short)49846)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((14537925260643319280ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (min((3262607065267918491LL), (((/* implicit */long long int) (signed char)-1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-96)) : (-142708812)))))))));
            }
        } 
    } 
}
