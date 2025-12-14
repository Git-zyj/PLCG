/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144400
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
    var_10 ^= ((/* implicit */short) var_5);
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)47)) / (var_5))), ((+(((/* implicit */int) (unsigned char)6))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) -1683037597))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49598))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)118)) <= (((/* implicit */int) var_1))))))))));
    var_13 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)65520))))) - (((13ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)65520)) <= (((/* implicit */int) var_6)))) ? (var_4) : (max((var_7), (((/* implicit */long long int) var_2)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_1] [i_1] [i_0]))) >= (((/* implicit */unsigned long long int) (+(var_0)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))) > (arr_2 [i_1 + 2] [i_1 - 1] [i_1 + 1])))) : (max((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) var_1)))), (((((/* implicit */int) (unsigned short)50333)) & (((/* implicit */int) (signed char)67)))))))))));
                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)190)) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1]))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 + 1])), ((+(((/* implicit */int) var_1)))))))));
            }
        } 
    } 
}
