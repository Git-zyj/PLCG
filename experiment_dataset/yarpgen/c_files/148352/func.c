/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148352
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_3))) ? (min((((/* implicit */unsigned int) var_18)), (arr_4 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
            arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_1] [i_0]);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) arr_2 [i_0]);
            arr_11 [i_2] = ((((long long int) 2773386559U)) >= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))));
            var_21 = ((/* implicit */_Bool) (-(((long long int) (_Bool)1))));
        }
        arr_12 [i_0] = ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [(unsigned short)10] [14ULL]))))) < (var_9))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) arr_10 [i_0])), (var_15)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [16ULL])) ^ (var_3)))) ? (((/* implicit */unsigned long long int) max((2773386542U), (((/* implicit */unsigned int) var_8))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_10))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_6))))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [8LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [4] [4]))) : (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (3460808741629790097LL) : (((/* implicit */long long int) arr_4 [(unsigned char)2])))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_23 = ((/* implicit */short) (unsigned char)133);
            var_24 += ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)59)))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [(short)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5558))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3] [i_0])))))));
        }
    }
    var_26 = ((/* implicit */unsigned short) var_11);
    var_27 = ((/* implicit */unsigned int) var_1);
}
