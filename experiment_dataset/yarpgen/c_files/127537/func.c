/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127537
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (var_10)))) ? (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_8))))) : (max((((/* implicit */unsigned long long int) var_8)), (var_15))))) < (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_8 [i_1] [i_0] = ((/* implicit */short) var_10);
                var_18 += ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)127)), (4294967295U)));
                arr_9 [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_6 [i_1] [i_0]))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) && (((/* implicit */_Bool) var_8)))))))), (((min((((/* implicit */unsigned long long int) var_5)), (var_15))) * (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) arr_5 [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (~(var_3)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) ? (var_12) : ((+(var_12)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(min((((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_12 [i_2] [i_3]))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_5))))))))))));
                arr_16 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_12 [i_3 - 2] [i_2]) : (arr_12 [i_3 - 2] [i_3])))) ? (((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_14))))));
                var_22 -= ((/* implicit */unsigned short) ((unsigned char) var_3));
            }
        } 
    } 
}
