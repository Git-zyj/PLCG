/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159694
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */int) ((max((10U), (2227578041U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) <= (((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) arr_0 [i_1 - 3] [i_0])) ? (arr_0 [i_0] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_1)))) != (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_3 [2])))))))));
                arr_6 [i_1] [(unsigned char)9] = ((/* implicit */int) arr_4 [i_0] [i_0]);
                var_11 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_3))))) & (13851705641783319952ULL))), (((/* implicit */unsigned long long int) min(((+(arr_0 [(unsigned short)10] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [i_0 + 2] [i_1]) : (arr_0 [i_0 - 2] [i_1 + 1]))))))));
                var_12 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 2])) >= (((/* implicit */int) arr_2 [i_0 - 2]))))), (((((arr_4 [i_0] [i_1 - 1]) / (((/* implicit */long long int) arr_0 [i_0] [i_0])))) % (((/* implicit */long long int) ((/* implicit */int) min((var_2), (arr_1 [i_0] [i_0 + 2])))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))) : ((~(9392653743572164341ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_14 ^= ((/* implicit */unsigned int) min((((/* implicit */int) var_4)), ((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_4))))) - (var_0))) + (var_0)));
}
