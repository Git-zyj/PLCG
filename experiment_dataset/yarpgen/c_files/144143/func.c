/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144143
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
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (((!(((/* implicit */_Bool) 111649811U)))) ? (4281770561U) : ((+(arr_5 [i_0 + 1]))))))));
                            var_20 = ((/* implicit */unsigned long long int) max(((-((-(arr_5 [i_0 + 1]))))), ((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_7 [5U] [(unsigned char)8] [i_2])))))));
                        }
                    } 
                } 
                var_21 = (-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_16)) / (4183317484U)))) >= (min((var_2), (((/* implicit */unsigned long long int) 111649811U))))))), (111649806U))))));
                /* LoopNest 3 */
                for (short i_4 = 2; i_4 < 18; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5 + 1])) ^ (var_7)))) & (((((/* implicit */_Bool) arr_2 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8))))))));
                                var_24 = ((/* implicit */_Bool) (+(max(((+(((/* implicit */int) arr_14 [i_5])))), (((((/* implicit */_Bool) 111649811U)) ? (((/* implicit */int) var_13)) : (arr_11 [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_18)) << (((/* implicit */int) var_3))));
    var_26 -= ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) var_15)), (max((10749610976106908525ULL), (((/* implicit */unsigned long long int) var_10))))))));
    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max(((unsigned char)228), (((/* implicit */unsigned char) (_Bool)1))))) : ((~(((/* implicit */int) var_18)))))) & (((/* implicit */int) var_3))));
}
