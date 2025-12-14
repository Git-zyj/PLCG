/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10001
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
    var_20 = ((/* implicit */signed char) var_14);
    var_21 = ((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14334659003306236003ULL)) ? (((/* implicit */unsigned int) 1537747869)) : (var_17)))), (min((4112085070403315613ULL), (((/* implicit */unsigned long long int) (signed char)-67)))))));
    var_22 += ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) (short)-9222)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46914))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-78)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) var_16)))))))))));
    var_23 = ((/* implicit */unsigned short) ((((min((((/* implicit */int) (unsigned char)91)), (((((/* implicit */int) (short)-26045)) | (((/* implicit */int) var_7)))))) + (2147483647))) >> (((var_15) + (1636762204)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_24 = ((/* implicit */signed char) arr_2 [(signed char)1] [i_1]);
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) / (((4112085070403315613ULL) * (arr_1 [i_0])))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0]))))))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_2))));
            }
        } 
    } 
}
