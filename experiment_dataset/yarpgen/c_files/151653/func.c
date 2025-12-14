/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151653
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (-(2047668112)));
                    var_21 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((-2047668112), (((/* implicit */int) (_Bool)1))))), (min((11818085611434726206ULL), (((/* implicit */unsigned long long int) (short)25788))))));
                    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -1594887335)), (6628658462274825410ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_23 = ((unsigned int) 2047668111);
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_1] [i_4] &= ((/* implicit */unsigned long long int) max((arr_11 [10ULL] [i_1] [10ULL] [10ULL] [i_1]), (((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2427960272682468099LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) 2047668112))));
        var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(unsigned short)12]))))) ? ((+(max((((/* implicit */long long int) 1594887319)), (5360505548072038382LL))))) : (((/* implicit */long long int) 2211970943U)));
    }
    var_26 = ((/* implicit */_Bool) var_5);
}
