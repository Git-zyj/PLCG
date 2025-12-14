/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159743
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)0] [(unsigned short)1] [i_2]))) : (var_18)))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((232541541028569984ULL) >= (max((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (18446744073709551615ULL))), (18214202532680981632ULL))))))));
                    var_22 = ((/* implicit */short) arr_3 [9ULL] [1ULL] [7ULL]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 1646008117U))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_19) : (((/* implicit */int) var_14))))) ^ (((var_9) | (var_10))))) : (((((/* implicit */_Bool) max((var_8), (var_9)))) ? (((unsigned long long int) var_4)) : (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    var_24 = ((/* implicit */_Bool) ((unsigned long long int) (!((!(((/* implicit */_Bool) var_15)))))));
    var_25 = ((/* implicit */_Bool) var_0);
}
