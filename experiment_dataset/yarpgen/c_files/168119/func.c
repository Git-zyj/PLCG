/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168119
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) ((((max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0] [i_0]))) >> ((((+(((/* implicit */int) var_6)))) - (59))))) << (((/* implicit */int) ((_Bool) var_4)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 22; i_4 += 4) 
                        {
                            var_11 ^= (+(((((/* implicit */int) (unsigned char)30)) << (((var_5) - (9833776629381496095ULL))))));
                            var_12 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) arr_0 [19LL])) ? (var_3) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))));
                        }
                        var_13 += ((/* implicit */unsigned int) 2147483647);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) var_1)) : (var_7)))) ? (((int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1588474500)))))));
                            var_15 = ((/* implicit */unsigned char) (~(min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_15 [i_0] [(_Bool)1] [i_0] [18ULL] [i_5] [i_2] [i_5])))))))));
                            var_16 += ((/* implicit */long long int) (!((((-(var_9))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 = arr_11 [i_0] [i_1] [i_2] [i_3] [i_6] [i_1] [i_6];
                            var_18 = ((/* implicit */_Bool) var_8);
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_8 [18ULL] [i_2] [i_2 + 1]))))));
                            var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((arr_10 [i_7 + 1] [i_0] [i_2] [i_1] [i_0]) / (((/* implicit */long long int) arr_3 [i_1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))))))));
                        }
                        arr_24 [i_0] [6U] [i_3] [i_3] [i_0] = max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((+(((/* implicit */int) var_8)))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */_Bool) -1588474501);
}
