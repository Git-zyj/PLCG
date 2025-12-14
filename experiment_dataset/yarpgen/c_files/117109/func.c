/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117109
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned short)8] = ((/* implicit */_Bool) arr_0 [i_1]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_10 += ((/* implicit */unsigned int) min((((/* implicit */long long int) ((signed char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_5)))))), (9223372036854775807LL)));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            arr_12 [i_0] [i_2] = ((/* implicit */signed char) max((arr_5 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_3 + 1])))))));
                            var_11 += ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_0 [i_2])) : (arr_8 [i_0] [i_0] [i_1] [i_2] [15])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 3; i_4 < 20; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [14U] [i_4] [14U] [i_5] = ((/* implicit */signed char) (short)29656);
                            var_12 = ((/* implicit */unsigned char) ((short) max(((short)29656), (((/* implicit */short) arr_10 [i_4 - 2] [i_4 + 3] [i_4 + 2])))));
                            arr_19 [i_4] [i_1] [i_1] [i_4] [i_4] &= ((/* implicit */_Bool) (-2147483647 - 1));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) var_6)))))))) ? (((/* implicit */unsigned int) var_0)) : (var_3)));
    var_14 &= var_2;
    var_15 += ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (var_2)))), (var_1)));
}
