/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165059
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_18)) < (18191497484730037492ULL)));
    var_21 &= ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_8 [17LL] = ((/* implicit */unsigned char) ((unsigned short) var_14));
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (max((((/* implicit */unsigned int) var_0)), (2993135265U)))))) / (7027178908525909688LL)));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(unsigned short)22] [i_1] [i_2] [i_0] [i_4] [i_1 + 2]))))) < (((/* implicit */int) min((arr_3 [(unsigned short)3]), (((/* implicit */unsigned short) ((var_17) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_15))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) 7027178908525909684LL))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)8191)), (arr_14 [i_0] [i_0] [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
}
