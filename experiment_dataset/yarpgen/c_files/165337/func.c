/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165337
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
    var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)106)) <= (((/* implicit */int) (unsigned char)0))))) * (((((/* implicit */int) var_14)) / (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [8] [i_1])))) ? (arr_0 [2ULL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                var_18 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_7)))))))));
                arr_6 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 9747147656527229448ULL)) ? (65535ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_12)))) < (max((((/* implicit */int) (short)-1)), (arr_5 [i_0 + 1] [i_0] [i_1])))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                    var_20 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]);
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21))) : (709961627U))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((unsigned long long int) arr_1 [i_0]))));
                    var_23 = ((/* implicit */int) (-(max((var_4), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                {
                    var_24 += min((min(((-(arr_5 [i_0] [(_Bool)1] [i_3]))), ((-(((/* implicit */int) arr_7 [(signed char)1] [i_1] [i_0] [i_0])))))), (((((int) 6580763609974320977ULL)) ^ (((((/* implicit */_Bool) 5023037683642793692LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_3])))))));
                    var_25 = ((/* implicit */_Bool) arr_9 [i_3]);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((int) (short)22));
    var_27 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) var_7)), (var_3))))))), (max((((/* implicit */unsigned long long int) ((signed char) var_5))), (min((((/* implicit */unsigned long long int) var_11)), (var_1))))));
    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) & (((/* implicit */int) var_6)))) & (((/* implicit */int) min((((/* implicit */short) var_6)), (max((((/* implicit */short) var_0)), (var_2)))))))))));
}
