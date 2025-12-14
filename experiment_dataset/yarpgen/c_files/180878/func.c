/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180878
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
    var_19 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2028118854))));
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((signed char) (-(-2028118855)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_3);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (signed char)18))));
        var_22 = ((/* implicit */unsigned char) var_1);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_14 [i_1] [i_2] [i_3] = ((/* implicit */long long int) arr_8 [(short)5] [i_2] [i_2]);
                        var_23 |= ((/* implicit */unsigned long long int) var_10);
                        var_24 = ((/* implicit */unsigned long long int) (signed char)-16);
                        var_25 = ((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_3] [i_2]);
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_17 [i_1] [i_3] [i_1] [i_1] |= ((/* implicit */unsigned char) ((max((((/* implicit */int) (!(((/* implicit */_Bool) 17503949054477962698ULL))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (signed char)-1)))))) - (-2028118843)));
                        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) var_3))), ((+(arr_3 [i_1] [i_2])))));
                        var_27 = ((/* implicit */unsigned long long int) (signed char)-13);
                    }
                    var_28 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */long long int) -2028118851)) : (-4839569344750002591LL)))) ? (((18446744073705357312ULL) * (var_12))) : (((/* implicit */unsigned long long int) (-(arr_4 [i_2] [i_2])))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) arr_15 [i_1] [i_1] [i_1] [i_1]);
        arr_18 [(unsigned short)0] |= ((/* implicit */_Bool) (unsigned short)48464);
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((var_0) == (((/* implicit */unsigned long long int) (~(var_16)))))))));
    }
    var_31 = ((/* implicit */unsigned long long int) (((+(9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    var_32 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1))));
}
