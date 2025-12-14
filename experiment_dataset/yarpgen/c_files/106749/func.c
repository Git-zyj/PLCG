/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106749
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
    var_14 = ((/* implicit */_Bool) (+((~((~(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) min((var_3), (arr_8 [i_0 + 2] [i_0 - 2] [i_0 + 3] [i_0 + 1])))) == (((/* implicit */int) ((short) var_6)))));
                            arr_9 [(short)8] [i_1] [8ULL] [(signed char)2] = ((/* implicit */long long int) min((((arr_8 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 3]) ? (((/* implicit */int) (short)-29727)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((short) min((((/* implicit */short) (unsigned char)97)), ((short)-10336)))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))));
                            arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (-2147483647 - 1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_17 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)-39)), (min((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */signed char) var_3))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL)))))));
                            var_18 = ((/* implicit */_Bool) (-((-(((/* implicit */int) ((arr_15 [i_0 + 1] [i_0 + 1] [i_1] [i_5]) == (9223372036854775807LL))))))));
                            var_19 = ((/* implicit */unsigned long long int) 1998320651);
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-82))))) ? (-821520717) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)29750)) == (((/* implicit */int) arr_12 [i_0] [i_1] [i_1])))))) | (arr_11 [i_0 - 2])))));
                        }
                    } 
                } 
                arr_16 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(arr_3 [i_1])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-16190)))))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])), (arr_11 [i_1])))));
            }
        } 
    } 
}
