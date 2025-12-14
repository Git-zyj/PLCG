/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106440
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_2 [i_0]), (arr_2 [i_2])))) ^ (arr_6 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)6]))) != (15102890396036705097ULL)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2])))) : ((~(((/* implicit */int) var_9)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_3 + 1] [i_0] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 2] [i_3]))))) / (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                                var_17 = var_3;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_0))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (min((3430225677U), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)1)))))))) ? (max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5))))) : (var_12)));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (2585814279046540790ULL))))) || (((/* implicit */_Bool) var_12))));
}
