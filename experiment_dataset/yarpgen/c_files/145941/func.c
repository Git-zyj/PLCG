/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145941
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 += (unsigned char)93;
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))), ((+(arr_2 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_13 [i_2] &= ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_3])), (arr_8 [i_2] [i_3]))))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_21 += var_10;
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) -619176557))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_14 [i_2] [i_3]))) ? (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((signed char)-91), ((signed char)-33)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)36)))))))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) min((min((((/* implicit */int) (unsigned char)162)), (-482328651))), ((~(2147483647)))));
    var_26 &= ((/* implicit */long long int) var_0);
    var_27 = ((/* implicit */short) var_14);
}
