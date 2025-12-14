/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179063
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
    var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? ((+(min((((/* implicit */long long int) (short)10088)), (-7347922101535492709LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (+(var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */_Bool) -796587283)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) ((((/* implicit */int) (short)-10088)) <= (-2147483622))))))), (((((/* implicit */_Bool) arr_0 [i_1 - 4])) ? (((/* implicit */int) max(((signed char)-24), ((signed char)-23)))) : ((-(((/* implicit */int) (_Bool)1))))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (unsigned char)5))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (unsigned char)7)), (arr_8 [i_3] [i_4] [i_3 - 1] [i_3])))));
                                var_19 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_3] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_0] [i_3] [i_2] [i_3] [i_2] [i_3] [i_2]))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_0])) ? (arr_5 [(unsigned char)8] [i_1] [i_0]) : (((((/* implicit */_Bool) ((int) arr_8 [i_3] [i_2] [i_3] [i_2]))) ? ((+(var_15))) : (arr_5 [0LL] [i_1] [(unsigned short)17])))));
                            }
                        } 
                    } 
                } 
                arr_14 [(unsigned short)4] [(signed char)15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
}
