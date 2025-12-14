/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180918
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_4))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (var_13)))) ? (var_11) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (var_7)))))))))));
    var_15 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) 3612939917959167503LL);
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15203)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8375111042797832021ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2])))))));
                    }
                } 
            } 
        } 
        var_18 *= ((/* implicit */short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned char)22))))), (((arr_9 [i_0] [i_0]) - (((/* implicit */unsigned int) 2147483647)))))) + (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_5 [i_0])))))))));
        var_19 = ((/* implicit */long long int) min((2147483647), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28538)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551611ULL))))) : (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 1; i_4 < 15; i_4 += 1) 
    {
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
        var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
