/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151747
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
    var_10 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)4156))));
    var_11 = ((/* implicit */short) min(((~((~((-9223372036854775807LL - 1LL)))))), (var_0)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (((int) 9223372036854775807LL)) : (((/* implicit */int) min((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_0] [3U] [i_0 + 1]))))));
                            arr_10 [11LL] [i_1] [i_1] [i_0 + 1] = ((short) ((((/* implicit */_Bool) (short)12203)) ? (((/* implicit */int) (short)-12203)) : (((/* implicit */int) (short)-12203))));
                            arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12203)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12200))) : (1568848816295262353LL)));
                            arr_12 [i_0] [(short)22] [8ULL] [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */short) arr_0 [i_0 + 2])), (max((arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2]), (arr_8 [i_0] [i_0 - 1] [i_0 + 2] [i_0])))));
                        }
                    } 
                } 
                var_13 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((8995881965615613345ULL), (((/* implicit */unsigned long long int) var_3))))))) + (10183828212105094459ULL)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) (short)12211)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)-12201))))), (((/* implicit */long long int) var_9)))) <= (max((((/* implicit */long long int) var_2)), (var_0)))));
}
