/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138643
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-76))))), (max((((/* implicit */unsigned long long int) (unsigned short)0)), (0ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))))), (var_7)))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((long long int) 1724016172U)))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_5 = 3; i_5 < 22; i_5 += 3) 
                            {
                                var_21 |= ((/* implicit */long long int) var_10);
                                var_22 &= ((/* implicit */unsigned short) (signed char)-13);
                            }
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) (unsigned short)65529)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_0] [i_4])))) : (((/* implicit */int) (unsigned short)65522)))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                            {
                                arr_18 [i_6] [i_4] [i_3 - 1] [i_6] [i_6] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -3133427377666229645LL)) ? (1948566537) : (((/* implicit */int) (!(((/* implicit */_Bool) 860508749))))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 14371690159130438136ULL)))) - (var_6)));
                                var_25 += ((/* implicit */unsigned int) (_Bool)0);
                                var_26 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-15001)))), (11899253661402490086ULL))), (arr_4 [i_0] [i_3 + 3] [i_6])));
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                var_27 |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_7] [i_8])), (var_12))))));
                                var_28 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned char) arr_11 [i_0] [1])))))))), (((unsigned char) ((short) arr_14 [i_7] [i_7] [i_9])))));
                                arr_27 [i_0] [i_0] [16] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_9] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_11))));
}
