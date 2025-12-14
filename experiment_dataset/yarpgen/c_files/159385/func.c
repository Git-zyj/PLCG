/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159385
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1998829544U)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (_Bool)1))));
    var_11 = var_3;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 |= ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (4293536802U))), (((/* implicit */unsigned int) max((arr_0 [i_0]), (arr_0 [i_0])))))), (((/* implicit */unsigned int) (~(((arr_1 [i_0]) + (arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_8)), (9511001120588908122ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5))))) : (((var_8) ? (((/* implicit */unsigned int) 0)) : (63U)))))) : ((~(max((((/* implicit */long long int) (unsigned char)120)), (var_0)))))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((var_4), (((/* implicit */long long int) 3302969617U))))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((var_4) - (((/* implicit */long long int) 4293536802U)))) : (((/* implicit */long long int) min((((/* implicit */int) var_7)), (arr_1 [i_1]))))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
            {
                var_15 *= ((/* implicit */signed char) (+(var_4)));
                var_16 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) (~(874983122)))) + ((-(-8761679418808126492LL))))), (((/* implicit */long long int) 991997675U))));
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_5 [i_0] [i_2] [i_2 + 1])))) % ((~(((/* implicit */int) (_Bool)0))))));
                var_18 = ((/* implicit */int) (-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)14] [i_2 + 1]))) : (var_0)))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
            {
                arr_8 [i_3 + 1] [i_1] [i_0] = ((/* implicit */long long int) ((8935742953120643493ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                arr_9 [i_0] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_7 [i_0] [i_0] [i_3 + 1] [i_0])));
            }
        }
    }
}
