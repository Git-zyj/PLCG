/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109502
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20274)) != (((/* implicit */int) (unsigned short)45260))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_10 [i_0 - 1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0 + 2])), (arr_0 [i_0 + 2])))) ? (max((((((/* implicit */int) var_12)) % (((/* implicit */int) var_12)))), (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_1)) : (var_10)))))))));
                    var_18 = ((/* implicit */_Bool) var_9);
                }
                arr_11 [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_16)) <= (max((var_13), (((/* implicit */unsigned long long int) var_14))))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)45262)) == (((/* implicit */int) (unsigned short)38512))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_6 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1])))))));
                arr_12 [(unsigned char)10] [5LL] [i_0 - 1] = ((/* implicit */unsigned char) max((((1206542925) - (((/* implicit */int) (unsigned short)29034)))), (((/* implicit */int) ((((/* implicit */int) ((arr_0 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_9)))))) < (((/* implicit */int) max(((signed char)41), (((/* implicit */signed char) (_Bool)1))))))))));
                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [i_1] [i_0 - 3]) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_1)))))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_12)), (arr_8 [i_1] [i_1] [4ULL])))) : (((((var_12) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (unsigned short)38782)))) % (((/* implicit */int) ((_Bool) (unsigned short)20274)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_1);
    var_21 = ((/* implicit */signed char) var_11);
}
