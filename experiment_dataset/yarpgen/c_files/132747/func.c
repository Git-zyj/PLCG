/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132747
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
    var_10 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) var_2)), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (min((((/* implicit */unsigned short) var_6)), (var_7)))))))));
    var_11 *= ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((var_2) - (3518297720U)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (var_9)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_5))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((_Bool) 5832048463679459093ULL));
                    arr_7 [(unsigned char)17] [i_1] = ((((_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((max((154831878U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (2474103200U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_0))))) : (min((var_3), (((/* implicit */unsigned long long int) var_7)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) max((min((-5347482213294968915LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (_Bool)1)))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3))), (((/* implicit */unsigned long long int) var_6)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_0))))) ? (min((((/* implicit */unsigned int) var_0)), (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_1)))))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
    } 
    var_16 = var_2;
}
