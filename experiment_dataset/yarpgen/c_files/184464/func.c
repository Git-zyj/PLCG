/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184464
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((min((arr_6 [i_1] [i_3 + 1] [i_1]), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])))) ^ (arr_2 [i_3] [i_1 + 2]))));
                                arr_13 [i_2] [6U] [(short)2] [i_1] [(short)7] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_1]);
                                var_17 -= ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)147)) % (((/* implicit */int) (short)32767)))), ((-(((/* implicit */int) ((arr_4 [i_1] [i_2] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)20054))))))))));
                                var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))), (((unsigned long long int) arr_5 [(unsigned char)11] [i_1 + 2] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((((((var_0) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)23))))), (((unsigned int) var_10)))))));
    var_21 = ((/* implicit */unsigned int) (-((+(((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))))));
    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) > (min((var_8), (((/* implicit */unsigned long long int) var_0)))))) && (var_15)));
}
