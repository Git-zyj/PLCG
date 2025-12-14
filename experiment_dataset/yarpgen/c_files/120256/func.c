/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120256
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((arr_4 [5] [(_Bool)1] [i_2 - 1] [i_2 + 3]) >= (min((((/* implicit */unsigned long long int) (~(arr_5 [i_2] [9ULL] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_3 [10] [i_2 - 2])) ? (arr_4 [i_0] [i_1] [i_2 - 1] [(unsigned short)11]) : (((/* implicit */unsigned long long int) 2147483637))))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [5ULL]))) : (((((/* implicit */unsigned long long int) arr_0 [(unsigned short)11] [i_1])) | (max((arr_4 [i_0] [(_Bool)1] [9] [(unsigned short)0]), (((/* implicit */unsigned long long int) var_1)))))))))));
                    var_18 = ((/* implicit */unsigned short) min(((-2147483647 - 1)), (((/* implicit */int) ((arr_1 [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [1] [(_Bool)1])), ((unsigned short)65535))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) (unsigned char)223);
    var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
    var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) var_5)) <= ((-(var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (var_12)));
}
