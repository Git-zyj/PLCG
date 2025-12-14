/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186179
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) min((-7275978717638063120LL), (((/* implicit */long long int) -602468520))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) -7275978717638063128LL)) ? ((~(((/* implicit */int) min((var_2), (var_2)))))) : (((/* implicit */int) arr_1 [i_0])));
                                var_18 ^= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) 6795972115189558983LL)), (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])), (0ULL))))) >= (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_0])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28672)))))))));
                                var_19 = ((((((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31218))))) * (((/* implicit */unsigned long long int) ((int) 602468516))))) << (((var_3) + (3414933798274043932LL))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((_Bool) 8ULL));
                    var_21 = ((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) <= (((/* implicit */int) ((signed char) 18446744073709551607ULL))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            for (signed char i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                {
                    var_22 += 8ULL;
                    var_23 = ((/* implicit */unsigned short) -7275978717638063131LL);
                }
            } 
        } 
        var_24 ^= ((/* implicit */_Bool) ((signed char) (~(7477753662691090498ULL))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (((((~(var_1))) + (9223372036854775807LL))) << (((((unsigned long long int) (unsigned short)31144)) - (31144ULL))))))));
        var_26 = ((/* implicit */signed char) (~(8ULL)));
        var_27 ^= ((/* implicit */signed char) arr_18 [i_8]);
        var_28 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)8064)) ? (arr_0 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
    }
}
