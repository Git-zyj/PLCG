/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17624
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [7LL])) : ((+(576460752303423487ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                    var_14 ^= ((/* implicit */unsigned short) arr_2 [i_2] [i_0] [i_0]);
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))))) / (((unsigned long long int) max((var_9), (arr_5 [i_2] [i_2] [5LL] [i_0]))))));
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_4)));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1])) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)199)))))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1])))) ? (arr_9 [i_3 - 1]) : (((((((/* implicit */int) var_3)) + (2147483647))) >> (((arr_9 [i_3 - 1]) - (312447708))))))))));
                var_19 += ((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_4]);
                var_20 -= ((/* implicit */signed char) arr_12 [i_3 - 1] [i_4] [i_3 - 1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((var_4) / (((/* implicit */unsigned int) var_2)))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40688))))) : (max((((((/* implicit */_Bool) -18)) ? (var_8) : (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (unsigned char)55))))));
}
