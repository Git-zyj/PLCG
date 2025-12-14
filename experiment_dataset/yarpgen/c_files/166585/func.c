/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166585
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) -1175178779))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                                var_15 = ((/* implicit */int) ((signed char) var_3));
                                arr_15 [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_3)))) ? (13958171026322829869ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_25 [i_7] [i_1] [i_6] [i_5] [i_1] [i_1] [(signed char)13] = ((/* implicit */unsigned short) min((598523154), (598523154)));
                                var_16 = ((/* implicit */signed char) ((min((((unsigned long long int) (short)-1)), (((/* implicit */unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))))))));
                                arr_26 [i_7] [i_6] [15] [i_1] [(short)14] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_1] [i_5]);
                                var_17 = ((/* implicit */short) arr_17 [i_5] [i_5] [14U] [i_5]);
                            }
                        } 
                    } 
                } 
                arr_27 [(unsigned char)1] [i_1] [i_1] = ((/* implicit */_Bool) (~((+(arr_19 [i_1 + 3] [i_1 + 2] [i_1 - 2] [i_1] [i_1 + 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((-650122222), (((/* implicit */int) (unsigned short)35105))));
}
