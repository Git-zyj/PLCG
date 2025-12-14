/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17774
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [(_Bool)1] = arr_0 [i_0] [i_1];
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) var_10);
                            var_16 = (_Bool)0;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) ((-5125159995746614410LL) < (-7842016891416139030LL)))) < ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (signed char)-118)))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((arr_1 [i_4]) * (((/* implicit */unsigned int) var_12)))))) && (((/* implicit */_Bool) ((unsigned char) arr_3 [i_5]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((arr_12 [i_1] [i_1] [i_8]) * (((((((/* implicit */_Bool) arr_19 [i_0] [i_6 - 1] [i_0])) ? (var_12) : (((/* implicit */int) arr_20 [i_6])))) - (max((var_12), (var_12)))))));
                                var_20 *= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_1])) || (arr_22 [i_0] [i_0] [i_6 - 1] [6LL])))) : (((/* implicit */int) ((((/* implicit */_Bool) 2364110703U)) || (((/* implicit */_Bool) arr_2 [i_1])))))))), (((-8327147631103002686LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 + 1] [i_6 - 1] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            {
                var_21 += ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned short) arr_14 [i_9] [i_9] [i_9] [i_10]))), (((unsigned long long int) var_4))))) ? (((long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (3054759829U)))) : (min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_20 [i_10])))))))));
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 20; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned long long int) (+(max((arr_31 [i_10] [i_11] [i_12]), (((/* implicit */int) (signed char)-118))))));
                            var_23 = ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-11)), ((short)0)));
                        }
                    } 
                } 
                arr_35 [i_9] = ((/* implicit */unsigned short) ((int) 2276705230U));
            }
        } 
    } 
    var_24 -= ((/* implicit */signed char) var_1);
}
