/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183719
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
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_0)))) * (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((arr_6 [i_0] [i_1] [i_0] [i_1]) < (((/* implicit */int) arr_1 [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) (short)-31867)) != (((/* implicit */int) (short)-13886))))))))))));
                    var_14 &= ((/* implicit */_Bool) (-((-(((arr_1 [i_0]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_8))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) + (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_16 = ((min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (arr_7 [9LL] [i_3])))), (((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) var_2)))))) >= ((((-(((/* implicit */int) arr_8 [i_3])))) ^ (((/* implicit */int) max((arr_0 [i_3] [i_3]), (arr_8 [i_3])))))));
        var_17 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_2 [i_3])))), (((((/* implicit */int) var_5)) > (486032103))))))));
    }
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(max((min((((/* implicit */unsigned int) var_8)), (var_12))), (((/* implicit */unsigned int) var_8)))))))));
}
