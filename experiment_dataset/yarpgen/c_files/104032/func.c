/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104032
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_0 - 1] [(short)3])) : (13352174494867510551ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (7209602504514162787LL)))))));
                                var_19 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((long long int) 2511590569970315099ULL))))), (((((/* implicit */_Bool) 10184407716116374081ULL)) ? (((((/* implicit */_Bool) -7209602504514162796LL)) ? (((/* implicit */unsigned long long int) var_13)) : (1738474587315027450ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)86)))))))));
                                var_20 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)77)))), ((-(((/* implicit */int) var_15))))));
                                arr_14 [(signed char)4] [(short)1] [i_0] [i_2] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(133955584LL)))), (18191902596523199105ULL)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (var_12) : (((/* implicit */unsigned long long int) max((-525844971250675483LL), (((/* implicit */long long int) (signed char)-8)))))))));
                    arr_15 [i_0] [(unsigned char)1] [6ULL] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [(short)9] [i_0] [4ULL] [i_2] [i_0 - 1])) ? (arr_10 [i_2 + 1] [(_Bool)1] [i_0] [(unsigned char)5] [i_2] [i_0 + 1]) : (var_10)))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned int) (short)-21874))) ? (max((var_4), (((/* implicit */long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) (signed char)-17);
}
