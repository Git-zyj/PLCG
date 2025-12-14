/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136816
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_2] [i_1] [i_2] = var_15;
                            arr_10 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))) : (-347783095345619690LL))))));
                            arr_11 [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_13)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                var_19 ^= ((/* implicit */int) var_14);
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)28770), (((/* implicit */unsigned short) (signed char)-89)))))))) ? (((((/* implicit */_Bool) min((arr_5 [i_0] [7LL] [i_1 + 1]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)56))))) : (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_5))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)31)), ((unsigned short)36766)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    arr_21 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_7 [i_4] [i_5 + 1] [i_6] [i_4]), (arr_7 [i_4] [i_4] [i_5 + 2] [i_6]))))));
                    arr_22 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)15558))));
                }
            } 
        } 
    } 
}
