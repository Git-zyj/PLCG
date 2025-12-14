/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167897
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) ((_Bool) (unsigned char)35)))), (var_7)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) (+(arr_2 [i_0 - 1])));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_9);
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (+(arr_2 [2ULL]))))) >> (((arr_2 [i_0]) - (1210208671))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) (-(arr_4 [i_0 - 1] [i_0 - 1])));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_9 [(unsigned char)16]))));
                }
                /* vectorizable */
                for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_17 = arr_8 [i_0];
                }
                var_18 &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_12 [3] [i_1 + 1] [i_0])) != (((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_0 + 1])))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))))) << (((var_9) - (2175933008U)))))) > ((+((+(6868659139552464052LL)))))));
}
