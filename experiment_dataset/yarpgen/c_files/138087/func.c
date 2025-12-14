/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138087
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned long long int) max((18446744073709551599ULL), (((/* implicit */unsigned long long int) max((57768923), (((/* implicit */int) arr_5 [i_1])))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= (((+((~(2ULL))))) < (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_0] [i_0]) - ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))));
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) -2160582902233377893LL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_3])))) : (((/* implicit */int) arr_5 [i_3]))))))))));
                            var_15 *= ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) arr_9 [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) var_7)))))))));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned short) ((long long int) ((short) -1325589555)));
}
