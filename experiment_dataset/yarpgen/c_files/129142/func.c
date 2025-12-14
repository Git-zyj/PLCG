/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129142
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [(short)7] [(signed char)10] [i_1] [i_3] [(signed char)10] = ((/* implicit */signed char) (+((+((+(((/* implicit */int) (_Bool)1))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)169)) >= (((/* implicit */int) (unsigned short)7))))) - ((-(((/* implicit */int) (unsigned short)65529))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (15819794432999595543ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-68)) > (((/* implicit */int) (_Bool)1)))))) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_1] [i_4 + 2] [i_2])) ? (min((var_0), (((/* implicit */long long int) (unsigned short)7)))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)12)), (arr_7 [i_1] [i_1] [18LL] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((((/* implicit */int) max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 2])))) & (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_1] [i_0] [i_1] [i_1 - 4] [i_1]))));
                var_16 = ((/* implicit */short) (+(((arr_13 [8] [8] [8] [i_0] [i_1 + 2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_1 - 2]))))));
                /* LoopNest 3 */
                for (long long int i_5 = 4; i_5 < 21; i_5 += 4) 
                {
                    for (short i_6 = 2; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_22 [i_1] = ((/* implicit */unsigned char) ((arr_12 [i_5 - 3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 - 2] [(short)0] [i_1] [i_6 - 1] [i_6])))));
                                var_17 = ((/* implicit */long long int) arr_21 [(signed char)14] [(signed char)14] [i_1] [i_1] [i_7]);
                                arr_23 [i_0] [i_6] [i_7] [i_6] [i_1] = ((/* implicit */unsigned short) (+(((int) arr_5 [i_1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */int) (short)32755)) >= (((/* implicit */int) (unsigned short)37374))))))) <= ((+(((/* implicit */int) var_4))))));
}
