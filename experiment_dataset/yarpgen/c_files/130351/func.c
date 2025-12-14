/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130351
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            arr_6 [(unsigned short)11] [i_1 + 2] = ((/* implicit */_Bool) (signed char)-20);
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(min((var_15), (((/* implicit */int) (unsigned char)181))))))) - ((-(((-1229063301479058862LL) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0]);
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) 3657856095U)), ((-9223372036854775807LL - 1LL)))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_1 - 1]))))))))));
        }
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned char)15)), (var_9))) < (((/* implicit */unsigned long long int) (-(var_2))))))))))));
            var_20 = ((/* implicit */unsigned int) var_2);
            var_21 += ((/* implicit */int) ((((/* implicit */long long int) max(((+(((/* implicit */int) (unsigned char)25)))), (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */int) (short)11571))))))) / (var_4)));
        }
        arr_11 [i_0] = (unsigned char)181;
        var_22 ^= arr_10 [i_0];
        var_23 += ((/* implicit */int) min((((/* implicit */unsigned int) (+(arr_0 [i_0])))), (((unsigned int) arr_8 [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_3]))));
        arr_14 [i_3] = min((((/* implicit */long long int) (!((_Bool)1)))), (var_10));
        arr_15 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (short)-11559)) : (((/* implicit */int) (unsigned short)48499))))) ? (var_8) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */int) (signed char)4)))))))));
    }
    var_25 = ((/* implicit */long long int) var_6);
}
