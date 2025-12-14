/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156564
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
    var_16 = ((/* implicit */long long int) max((max((min((var_9), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_4), (((/* implicit */signed char) (_Bool)1))))))), (((/* implicit */int) max((max((var_14), (((/* implicit */short) var_5)))), (((/* implicit */short) max((var_7), (((/* implicit */signed char) (_Bool)1))))))))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((min((var_6), (((/* implicit */long long int) (short)17102)))), (min((((/* implicit */long long int) (_Bool)1)), (var_12)))))), (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (2508898021382267187ULL))), (max((var_10), (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (2241477080U)));
            var_19 -= ((/* implicit */long long int) (_Bool)1);
        }
        for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
        {
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 22U);
            arr_8 [i_2] [i_0] = ((/* implicit */long long int) -1);
            arr_9 [i_0 - 2] = ((/* implicit */unsigned int) (_Bool)1);
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 8659393591346916402LL))));
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_21 += ((/* implicit */_Bool) (signed char)-104);
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (_Bool)0))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) -931464695))));
                    arr_15 [i_3] [i_3] [i_3] = ((/* implicit */short) -1);
                }
            } 
        } 
    }
}
