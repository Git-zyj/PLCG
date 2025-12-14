/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123369
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
    var_20 ^= ((/* implicit */short) (_Bool)0);
    var_21 = ((/* implicit */int) (-(((long long int) (short)-15823))));
    var_22 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_0] [i_1] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */signed char) -4842300570048946800LL);
                                arr_14 [i_2] [i_1] [i_2] [i_1] [i_3] [13U] [i_4] = ((/* implicit */long long int) max(((~(1841605835U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1] [i_1])))))));
                                arr_15 [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((signed char)103), (max(((signed char)105), ((signed char)118)))))), (var_3)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_1))));
                            arr_22 [i_6] [i_6] [i_1] = ((/* implicit */signed char) 0U);
                            var_24 = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_1]));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) 1290017247U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            arr_27 [i_0] [17] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */unsigned short) var_3);
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? ((~(arr_12 [i_0] [i_1] [i_7] [i_7]))) : (((/* implicit */long long int) arr_5 [i_8] [i_1] [i_7]))))) ? (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) ((((/* implicit */int) (signed char)-119)) != (((/* implicit */int) (short)20711)))))))) : (arr_2 [(_Bool)1])))));
                            var_27 = (~((~(arr_17 [i_7] [i_7] [i_0]))));
                            arr_28 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min(((-(var_7))), (((/* implicit */int) (signed char)-119))));
                        }
                    } 
                } 
            }
        } 
    } 
}
