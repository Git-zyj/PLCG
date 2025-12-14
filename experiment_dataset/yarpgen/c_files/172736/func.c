/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172736
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
    var_19 += ((/* implicit */unsigned long long int) ((signed char) (~((~(5365389526336732155ULL))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7935630078739379308ULL)) ? (((/* implicit */int) (short)32393)) : (((/* implicit */int) (short)32393)))) > (((/* implicit */int) var_7)))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), (var_13)))))))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)203)), ((short)-157)))) : (((/* implicit */int) ((var_15) <= (var_17)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned short i_5 = 4; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [15LL] [i_0] [(short)9] [i_5 + 1] [15LL] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_16 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [(signed char)1])) * (((/* implicit */int) var_13)))), (((max((var_11), (((/* implicit */int) (signed char)92)))) >> (((((/* implicit */int) arr_3 [i_6 - 1] [i_5 + 1])) - (224)))))));
                                var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_10 [i_6 - 2] [i_1] [i_1] [i_0 + 1])) % (((/* implicit */int) arr_10 [i_6 - 1] [(signed char)4] [i_6] [i_0 - 1])))));
                                arr_24 [i_0] [i_1] [14U] [i_5 + 4] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4215638883733022193ULL)) ? (arr_13 [i_1] [i_5 - 4] [i_5 + 1] [i_5 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0 + 1] [i_4]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
