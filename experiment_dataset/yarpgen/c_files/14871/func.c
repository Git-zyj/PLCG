/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14871
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
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((int) (-(-966580430))));
                                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)1392)) < (-966580430)))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (23)))));
                                arr_14 [i_0] [i_0] [(_Bool)1] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)46041))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))) | (((((/* implicit */_Bool) (unsigned short)1382)) ? (((unsigned long long int) arr_9 [i_4] [i_1] [i_1] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -966580430)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)64152)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_20 [i_1] [i_1 + 3] [i_2] [i_1] [i_2 - 2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max(((unsigned short)64136), ((unsigned short)64144)))) : ((-(((/* implicit */int) (unsigned short)7187)))))), (((/* implicit */int) min(((unsigned short)46014), (((/* implicit */unsigned short) (signed char)-29)))))));
                                arr_21 [i_0] [i_1] [i_0] [i_0] [16ULL] [(unsigned short)1] [i_0] = ((/* implicit */unsigned short) min(((-((-(var_1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))));
                                arr_22 [i_1] [i_0] [i_2 + 2] [i_1 + 3] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */int) min((var_5), (arr_2 [i_1] [i_1])))) + (min((((/* implicit */int) var_13)), (arr_18 [i_6] [(unsigned char)18] [(unsigned char)10] [i_1 + 3] [i_1 + 3] [i_0] [i_0]))))) : (((/* implicit */int) ((_Bool) min((-1126263625812606878LL), (((/* implicit */long long int) (unsigned short)14704))))))));
                                arr_23 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)64152))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (min((var_11), (((/* implicit */long long int) arr_10 [i_0] [i_1 + 3] [i_2 - 1] [i_5] [i_6 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
