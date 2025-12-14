/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152768
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) > (((/* implicit */int) var_3))));
    var_18 = ((/* implicit */signed char) (-((-((+(((/* implicit */int) (unsigned char)73))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [i_4] [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (0) : (((/* implicit */int) (_Bool)1))))) ? ((~((-(5))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_2] [i_2]))))))));
                                var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2 + 1] [i_4] [i_4] [i_4 - 1]))))), (min((arr_5 [i_2 + 1] [9LL] [i_3] [i_4 + 1]), (((/* implicit */unsigned short) (unsigned char)112))))));
                            }
                        } 
                    } 
                    var_20 = (!(((/* implicit */_Bool) arr_3 [i_2 - 2])));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_2] [i_2] [i_5] = ((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 0ULL))) ? (((/* implicit */int) min((var_9), (var_9)))) : (((/* implicit */int) (unsigned char)190)))))));
                                var_21 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2] [i_2 - 1] [i_6])) ? (((/* implicit */unsigned long long int) (-(var_12)))) : (((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned long long int) var_1))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) arr_6 [i_2])))) : ((~(var_15)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
