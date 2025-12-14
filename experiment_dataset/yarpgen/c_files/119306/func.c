/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119306
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
    var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_0)) ^ ((~(((/* implicit */int) (unsigned char)171)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (unsigned char)95)) ? (1001658964907394867ULL) : (var_8))), (((unsigned long long int) arr_0 [i_1] [i_1])))), ((-(17445085108802156763ULL))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((unsigned long long int) var_17)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4261373985621330247ULL)) && (((/* implicit */_Bool) var_11)))))))), (min(((~(4095ULL))), (((/* implicit */unsigned long long int) (unsigned char)171))))));
                arr_5 [i_0] [8ULL] = ((/* implicit */signed char) arr_3 [i_0]);
                var_22 += ((/* implicit */unsigned char) 5784313622865975727ULL);
                var_23 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) > ((~(((var_19) & (var_9)))))));
            }
        } 
    } 
}
