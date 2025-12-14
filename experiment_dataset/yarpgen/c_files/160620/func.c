/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160620
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))), (((/* implicit */unsigned int) var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max(((-(((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [(signed char)10] [i_1] [i_1])) : (((/* implicit */int) var_6))))))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) var_9);
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (-7794695304631608385LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)75)) / (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)3] [i_0]))) : (((((/* implicit */_Bool) var_15)) ? (arr_0 [(unsigned short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))));
                    var_20 -= ((/* implicit */short) (((-(arr_3 [i_0] [i_1]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)18)), (arr_7 [(_Bool)1] [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [14U] [14U] [i_2]))))))))));
                }
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_4 [(signed char)8] [i_1] [(signed char)8]))));
            }
        } 
    } 
}
