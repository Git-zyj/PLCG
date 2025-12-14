/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182431
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
    var_12 = ((/* implicit */_Bool) ((max(((-(((/* implicit */int) (unsigned char)84)))), (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((unsigned char) (unsigned char)243)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)21)) || (((/* implicit */_Bool) 12684283746671048070ULL))));
                var_14 = ((/* implicit */unsigned long long int) (signed char)-54);
                arr_6 [(signed char)6] [i_1] = ((/* implicit */_Bool) var_4);
                arr_7 [i_0] [i_1] [i_1] = (_Bool)1;
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                {
                    var_15 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
                    var_16 -= ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)229)) / (((/* implicit */int) var_11)))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (unsigned char)238))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) (signed char)73);
                                arr_23 [i_6] [i_6] [0ULL] = var_11;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)171)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_30 [i_2 + 2] [i_2 + 2] [i_2 - 1] [(unsigned char)2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)-42)))))))) ? (((/* implicit */int) (!(arr_13 [i_2 + 2] [i_7 + 2])))) : (((/* implicit */int) var_0))));
                                var_19 = ((/* implicit */_Bool) (unsigned char)0);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (!(((_Bool) var_11))));
}
