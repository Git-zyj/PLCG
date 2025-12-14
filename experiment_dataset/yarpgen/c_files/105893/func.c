/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105893
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
    var_18 = max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned char)3)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 15196952965492687963ULL)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37393))) | (3266741203916023564ULL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_2 [i_0]))))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) ((_Bool) (unsigned char)195))) << (((((/* implicit */int) ((unsigned char) var_8))) - (146)))))))));
                var_21 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (max((((((/* implicit */_Bool) arr_0 [7ULL])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27880)) ? (((/* implicit */int) arr_1 [(short)4])) : (((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
            }
        } 
    } 
    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_15)) ^ (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-27881))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (signed char)95)))))) * (var_3))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)81))))) ? (((unsigned long long int) (short)(-32767 - 1))) : (min((((/* implicit */unsigned long long int) var_11)), (var_0)))))));
    var_23 &= ((/* implicit */unsigned long long int) var_14);
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))) ? (var_8) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-27889))))))), (((((/* implicit */_Bool) ((short) var_15))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_11))))))))))));
}
