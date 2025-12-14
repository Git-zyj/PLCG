/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137547
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(510971953617414191LL))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) ^ (8880791091086510138LL)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) var_13))))), (min((10620545423451665433ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (7826198650257886183ULL)))));
                var_21 = ((/* implicit */unsigned long long int) ((long long int) min((arr_3 [i_1] [i_1] [i_1]), ((unsigned char)177))));
                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_0]))))));
                var_23 += ((/* implicit */long long int) arr_1 [i_1]);
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) : (var_1)))) ? (((((/* implicit */int) (signed char)-111)) ^ (((/* implicit */int) var_16)))) : ((+(((/* implicit */int) var_5)))))), (((/* implicit */int) (unsigned char)152))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) : (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13369))) % (2200771808572324464ULL)))))));
    var_26 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_9)) ? (var_6) : (var_14))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_2))))))));
    var_27 = ((/* implicit */int) (_Bool)0);
}
