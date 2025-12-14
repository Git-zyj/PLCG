/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181652
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
    var_15 = ((/* implicit */long long int) (unsigned short)8006);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2] [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (var_2))))) : (4524008867126237761LL)))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0]))) : (((/* implicit */int) var_10))));
                            var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7168)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */int) var_6)) + (2147483647))) << (((var_5) - (24000718))))))) == (((/* implicit */int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)7168)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)206)) || (((/* implicit */_Bool) (unsigned short)32126))))))))));
                            arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(-71909230)));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) -8467731650455265823LL)) ? (536870911ULL) : (((/* implicit */unsigned long long int) -9223372036854775796LL)))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_0))));
                        }
                        var_19 = ((/* implicit */signed char) ((unsigned int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)33411)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251)))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 8467731650455265823LL)) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-12))))), (min((22U), (((/* implicit */unsigned int) -1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), ((unsigned short)22525))))) < (((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))))));
                    }
                    var_21 = ((/* implicit */long long int) ((((unsigned long long int) arr_6 [i_0] [i_0] [i_0])) * (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6)))) / (var_5))))));
                    var_22 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-2099931086)));
                    arr_14 [i_0] [i_1] = ((/* implicit */short) min((((unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_11 [i_0] [(unsigned short)1] [i_0] [i_0] [(unsigned short)1] [i_0])))) ? (arr_9 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)33423)) < (((/* implicit */int) arr_4 [i_0])))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_4);
    var_24 = ((/* implicit */unsigned int) var_4);
    var_25 = ((/* implicit */unsigned char) var_0);
}
