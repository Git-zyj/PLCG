/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100529
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) ((_Bool) (+(arr_6 [i_0 - 2] [i_0 - 2]))));
                arr_7 [i_0] = ((/* implicit */unsigned int) var_2);
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 7; i_2 += 4) 
                {
                    arr_11 [i_2 + 1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(-5407528257326393728LL)))) ? (min((((/* implicit */unsigned int) (unsigned short)2143)), (1045584702U))) : (min((((/* implicit */unsigned int) (unsigned char)144)), (1045584685U)))))), (arr_5 [i_0] [i_1] [(signed char)8])));
                    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) >= (18446744073709551615ULL)))) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 - 1]))));
                }
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-26611)) ? (((/* implicit */unsigned long long int) min(((+(-2147483643))), (((/* implicit */int) ((unsigned short) var_8)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [2LL] [i_0 - 2]))) - (((unsigned long long int) var_2))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) max((var_3), (((/* implicit */short) (_Bool)1)))))))), (5407528257326393727LL)));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1631586978)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned short)924))))) || (((/* implicit */_Bool) (signed char)87))));
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_2)), ((+(((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
}
