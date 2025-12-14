/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140340
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-5366824402749364496LL)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */int) (signed char)124)) >= (((((/* implicit */int) arr_3 [i_1] [i_1])) ^ (((/* implicit */int) var_14))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) var_12);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (3561660255U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_3 - 2])))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) 1945994073)) != (3561660258U)));
                        arr_14 [(unsigned short)3] [(unsigned short)3] [i_1] [12] [i_2] [13ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((((/* implicit */int) (signed char)-87)) + (2147483647))) >> (((16366138776826586165ULL) - (16366138776826586160ULL)))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [i_3 + 1] [8] [i_1]))))) : (min(((+(3686762750U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25168)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned char)235)))))))));
                    }
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (var_12))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) - (3561660282U)))))), ((~(((((/* implicit */_Bool) (unsigned char)229)) ? (9711317652644657753ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))))))));
    var_17 = ((/* implicit */unsigned long long int) var_13);
}
