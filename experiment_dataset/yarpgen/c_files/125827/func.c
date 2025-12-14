/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125827
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
    var_13 = ((/* implicit */short) ((var_5) ? (((((9149544648986738663ULL) != (((/* implicit */unsigned long long int) var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0))) : (((/* implicit */long long int) var_2))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_0) : (var_0)));
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (var_6)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((var_6) != (var_4))))))) % (var_1)));
    var_16 = ((/* implicit */unsigned int) (unsigned char)214);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((4583032452304686467LL) + (-5234418115644670888LL))) : (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_5))))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) + ((-(var_11)))))))))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)5535);
                    arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_5 [i_1 - 2] [i_1])) | (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1])) ? (arr_4 [i_0 + 2]) : (arr_6 [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
