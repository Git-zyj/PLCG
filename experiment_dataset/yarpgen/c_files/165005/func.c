/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165005
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_0]))));
                                var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-120)) > (1645734274)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) arr_9 [i_0 + 3] [i_0 + 3] [i_1 - 2] [i_1] [11LL] [11LL]);
                    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (unsigned short)59367))))))), (((((((/* implicit */unsigned int) var_18)) <= (2128809532U))) && (((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_2]))))));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (unsigned short)13450)))) ? ((-(var_2))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) var_18))));
    var_25 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) min(((unsigned short)54766), (var_3)))) <= (((/* implicit */int) max(((short)-24), ((short)-1))))))) <= ((~(((/* implicit */int) (unsigned short)52720))))));
}
