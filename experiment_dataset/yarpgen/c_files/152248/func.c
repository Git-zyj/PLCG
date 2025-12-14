/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152248
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
    var_10 -= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_3))))), (min((((/* implicit */unsigned long long int) 1021828463U)), (var_9))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) >= ((+(var_6)))))))));
    var_11 = ((/* implicit */int) var_5);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (max((1021828463U), (1021828463U)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((1021828463U) ^ (((/* implicit */unsigned int) (~(-256827753)))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
        var_13 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((~(1021828452U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((unsigned long long int) max(((unsigned short)26355), (var_0))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_14 += ((/* implicit */short) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) ((((/* implicit */_Bool) 3273138832U)) && (((/* implicit */_Bool) (unsigned short)8832)))))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (arr_0 [i_0])));
        }
    }
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(3273138851U))), (((1021828435U) ^ (1021828435U)))))) || (((/* implicit */_Bool) ((int) min((var_4), (1021828450U))))))))));
}
