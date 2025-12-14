/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161969
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
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)92)) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                var_19 = max((((/* implicit */int) ((unsigned char) var_14))), (arr_0 [i_0] [i_1]));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 6; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) arr_6 [i_2 - 2] [i_1 - 1] [i_0]);
                                arr_15 [i_4] [i_3] [i_2 + 2] [i_1] [i_0] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)-92))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned int) var_14)))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_31 [i_5 - 1] [i_6] [i_7 - 2] [i_9] [i_9] [i_7] |= ((/* implicit */unsigned short) var_13);
                                arr_32 [i_5 + 1] [14U] [i_5] [i_8] [(_Bool)1] = (+(min((62), (((((/* implicit */_Bool) -3569975700471733878LL)) ? (((/* implicit */int) var_6)) : (-1417218959))))));
                                var_22 = ((/* implicit */signed char) min((var_22), ((signed char)78)));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-77)) & (((/* implicit */int) (unsigned char)248))))) ? (((((/* implicit */_Bool) 3569975700471733900LL)) ? (((/* implicit */unsigned long long int) arr_20 [i_5] [i_6])) : (7597878438461611383ULL))) : (arr_17 [i_5 - 1] [i_5 - 1]))))))));
            }
        } 
    } 
}
