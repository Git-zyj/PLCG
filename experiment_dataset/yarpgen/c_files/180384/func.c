/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180384
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
    var_17 += ((/* implicit */unsigned char) ((signed char) (short)0));
    var_18 = ((((/* implicit */_Bool) (unsigned char)80)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)111)), ((unsigned char)70))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_6 [i_1 - 1]))))));
                    arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1 + 1])), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_1 [1ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) != (max((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */long long int) arr_1 [(unsigned char)2])) + (arr_5 [i_0] [i_1 + 1])))))));
                    var_20 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 2382071269U)) && (((/* implicit */_Bool) (unsigned char)176))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3 + 1] [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)80))));
                                arr_15 [i_0 + 2] [i_0 + 3] [i_0 + 4] [i_0 - 3] [i_0] &= ((/* implicit */signed char) ((unsigned int) var_7));
                                arr_16 [i_1] [i_2] [i_4] = ((((/* implicit */_Bool) arr_0 [(_Bool)1])) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) - ((+(arr_0 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) arr_11 [i_0] [i_1 - 1] [i_5] [i_5 - 2] [i_5] [12U]))) <= (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1 - 1] [i_2] [i_5 + 2] [(unsigned short)7] [(unsigned char)1])), (var_3)))));
                                var_22 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)18634)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (~(0ULL)));
    var_24 = ((/* implicit */long long int) (_Bool)0);
}
