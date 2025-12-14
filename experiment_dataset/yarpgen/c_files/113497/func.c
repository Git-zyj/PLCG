/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113497
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_5)) ? ((+(var_5))) : ((+(12254430714845583067ULL)))))));
                            var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_2]))))) ? (((arr_1 [i_2] [i_2]) ? (((/* implicit */unsigned int) 1167091980)) : (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15024))))) != (((/* implicit */unsigned int) (~(1167091980))))));
                            var_18 *= ((/* implicit */unsigned short) arr_4 [i_3 + 2]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) (+(1167091980)));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (arr_9 [i_5] [(unsigned short)4] [i_1] [i_0])))))))) | (((((arr_7 [i_1] [i_1] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_4]))))) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [2U] [i_1] [i_0])))))));
                                var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-30951)) ? (((/* implicit */int) ((((/* implicit */long long int) 235544064U)) > (5513861395556556817LL)))) : (((/* implicit */int) (signed char)76)))), (((((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_5] [i_5]))))) ? (((/* implicit */int) min(((unsigned short)43238), (((/* implicit */unsigned short) (signed char)76))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
