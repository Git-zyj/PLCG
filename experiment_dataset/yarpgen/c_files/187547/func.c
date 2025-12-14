/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187547
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])), (2774855053693407350ULL))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1482424368U)) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 8235654716327827839ULL))))) : (((/* implicit */int) (unsigned short)29305))));
                var_22 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9156)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)156))));
                arr_6 [i_0] [13U] = ((/* implicit */int) min((((/* implicit */unsigned int) ((var_19) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))))), ((((+(var_19))) << (((arr_3 [(unsigned short)3] [i_0]) - (2590970094U)))))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -5376874048549221705LL)) ? (((((/* implicit */_Bool) (short)1008)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [11] [11]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 16110005791252434361ULL))))) << ((((+(((/* implicit */int) var_9)))) - (92))))))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_3))));
}
