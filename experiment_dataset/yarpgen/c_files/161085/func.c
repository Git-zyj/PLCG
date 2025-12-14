/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161085
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) min(((short)5439), (((/* implicit */short) (_Bool)1)))))))))))));
    var_15 = ((/* implicit */_Bool) min(((-((~(1023LL))))), (((/* implicit */long long int) (-(((/* implicit */int) max((var_11), (((/* implicit */short) (_Bool)0))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((signed char) arr_1 [i_0]))))), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967288U))))), (max((var_3), (((/* implicit */signed char) arr_0 [(signed char)12] [i_0])))))))));
        var_17 &= ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (2776220836174691165ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (-((+(arr_1 [i_0]))))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_6)), (var_11))))))), ((+(((/* implicit */int) (!(var_7)))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_7)))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_10)))));
        arr_7 [i_1] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) var_7)))));
        var_20 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (short)7)))));
    }
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min(((~(((/* implicit */int) ((signed char) var_1))))), (((/* implicit */int) ((short) (!(var_0))))))))));
}
