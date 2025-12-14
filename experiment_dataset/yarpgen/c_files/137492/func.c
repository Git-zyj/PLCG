/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137492
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) -1177377773)));
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) var_15)) + (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)60)))))))));
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)55137)) ? (((((unsigned long long int) var_0)) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) arr_2 [i_1])) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)32443)))))))))));
        arr_6 [6ULL] = ((/* implicit */long long int) var_9);
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_8 [i_2]))));
        arr_10 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) var_9)))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) max(((signed char)79), (((/* implicit */signed char) ((((/* implicit */int) (short)28672)) == (((/* implicit */int) var_8))))))))));
    }
    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) * ((-(5432801412072562050ULL)))));
}
