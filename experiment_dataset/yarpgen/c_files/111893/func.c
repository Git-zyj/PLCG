/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111893
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
    var_14 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-35))));
    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) (short)32763))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)40)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_17 &= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)187))));
                                var_18 = (+(((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_3] [i_3 - 2])) ? (((/* implicit */int) (_Bool)1)) : (arr_7 [i_1 - 2] [i_3] [i_2 - 2] [i_4] [i_4] [i_4]))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1 + 1] [i_1 + 1] [i_2 - 2]))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-40))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)94))))) / (((((/* implicit */_Bool) arr_8 [9] [i_2 - 2] [i_4] [i_3])) ? (arr_8 [5LL] [i_2 + 1] [i_4] [i_3]) : (arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_3])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-25660)) || ((_Bool)0))))) - (12825912696523620212ULL)))));
                            var_22 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) 4017409448724938877LL))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
}
