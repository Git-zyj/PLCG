/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101589
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) ^ (10503145957963488082ULL)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((signed char) 5795525370013819241ULL))) ? (arr_8 [i_0] [i_1] [i_1] [i_2 - 1] [i_3 - 1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50)))))))), (((/* implicit */unsigned long long int) (signed char)0))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_0 [i_0])));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned char) (signed char)-50)))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_9 [i_0] [i_1 - 3]), ((signed char)-50)))) > (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)50)) : (var_10))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                arr_20 [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1578989863U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) / (((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_5] [i_6]))))))) && (((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6] [i_6] [i_6]))));
                arr_21 [i_5] [i_5] = ((/* implicit */_Bool) min((min((((/* implicit */short) arr_1 [i_5] [i_6])), ((short)23121))), (((/* implicit */short) arr_1 [i_5] [i_5]))));
                var_22 = ((/* implicit */long long int) var_13);
            }
        } 
    } 
}
