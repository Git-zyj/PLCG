/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115048
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_0 [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31816)) < (((/* implicit */int) (unsigned short)31816)))))) >= (max((arr_7 [i_1] [(signed char)10] [(_Bool)1]), (((/* implicit */long long int) (signed char)-90))))));
                            var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_0] [i_0] [i_2] [i_1]))) + (arr_3 [i_0] [i_0] [i_0])))), (arr_1 [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 787758894)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3311038439U))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [2U] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
                var_21 = ((/* implicit */unsigned int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33720)))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) min(((short)-5758), ((short)-5758)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_2);
}
