/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184437
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
    var_13 = (_Bool)1;
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((4859539697452304328ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (var_12)));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((_Bool) max((max((((/* implicit */long long int) var_5)), (var_9))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_5)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */long long int) (_Bool)1);
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) min((640730136464730247LL), (((/* implicit */long long int) var_3)))))))), ((short)572)));
                    var_18 ^= ((/* implicit */signed char) ((((((/* implicit */int) (short)32743)) * (((/* implicit */int) min((var_2), (var_4)))))) / (((/* implicit */int) (short)32721))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10)))), ((!((!(((/* implicit */_Bool) (short)3917))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (_Bool)1))));
                                var_21 = ((/* implicit */signed char) var_0);
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */int) var_11)) / ((~(((/* implicit */int) arr_7 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
