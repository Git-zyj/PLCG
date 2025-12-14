/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165706
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
    var_13 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_9))))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)50))) >= (var_4)))) << (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) ? (min((((/* implicit */unsigned int) var_9)), (((2439218640U) << (((((/* implicit */int) var_12)) - (78))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) var_2);
                                var_16 = max((((/* implicit */unsigned long long int) -355274817537674760LL)), (((((/* implicit */_Bool) 3579684868U)) ? (((/* implicit */unsigned long long int) 1328151520)) : (((140600049401856ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_17 -= ((/* implicit */unsigned long long int) max((((long long int) ((((/* implicit */_Bool) 10093210296685951753ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_6)))), (((/* implicit */long long int) var_9))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 - 1] [i_2 - 1] [(unsigned short)1] [i_2])) ? (((/* implicit */unsigned long long int) ((unsigned int) -1366023579460935839LL))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2 + 1] [i_1] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_4);
    var_20 = var_9;
}
