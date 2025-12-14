/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126072
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
    var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) 1073783612U)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-27)))), (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(unsigned char)16] [i_1])) ? (((/* implicit */unsigned long long int) (~(-2129769381)))) : (((unsigned long long int) arr_0 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) max((var_14), (var_14))))))), ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_14 [i_4] [i_3] [i_2] [i_1] [i_0])))))));
                                arr_15 [i_3] [i_3] [i_3 - 3] [i_3 - 1] [i_1] = ((/* implicit */unsigned int) (signed char)-13);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            arr_20 [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) (((+(max((((/* implicit */unsigned int) var_2)), (1073783612U))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_5 - 1] [i_5] [12U]))) >= ((+(1073783612U)))))))));
                            arr_21 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((5294394656564243814LL), (((/* implicit */long long int) arr_16 [i_0]))))) ? (((/* implicit */int) min(((signed char)-40), ((signed char)33)))) : (((/* implicit */int) arr_0 [i_1] [i_6 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) <= (((/* implicit */int) var_7)))))));
                            var_21 = ((/* implicit */int) arr_2 [i_1]);
                            arr_22 [i_0] [i_1] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)27)) ? (max((var_2), (((/* implicit */int) (signed char)26)))) : (((/* implicit */int) var_15))))) : (1073783598U))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_23 [i_8] [i_1] [i_1]))));
                            arr_29 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_24 [i_0] [(signed char)6] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min(((_Bool)1), (var_6)))) : (((var_6) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) ? (min((((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))), (((var_13) ^ (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_1)))))));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) min((1073783598U), (((/* implicit */unsigned int) (_Bool)1)))))));
    var_25 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)36165)), (134217727U))))));
}
