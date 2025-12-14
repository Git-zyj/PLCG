/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137838
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((((((/* implicit */_Bool) (unsigned char)82)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) 2147483647)) ? (27387111) : (27387111))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))))));
    var_20 |= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 473502617)), (var_2)))) : (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned long long int) 1494995808)))))));
    var_21 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((2929149044928231741LL) & (((/* implicit */long long int) 4294967295U))))), (((unsigned long long int) -2929149044928231742LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) -27387112))))) == (((((/* implicit */unsigned long long int) var_11)) & (var_13))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned char) arr_4 [i_1])), (var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) (unsigned char)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_0 [i_0])))))))) : (((((/* implicit */unsigned long long int) -27387112)) - (8300362466772629485ULL)))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (max(((unsigned char)242), (((/* implicit */unsigned char) (_Bool)0))))));
        }
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) -2929149044928231742LL))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) 347655888))))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 ^= ((/* implicit */int) var_10);
            var_26 -= ((/* implicit */unsigned int) ((unsigned char) -2005832454));
            var_27 += ((((/* implicit */_Bool) (unsigned short)25899)) ? (9350527505227094134ULL) : (17803979226811814948ULL));
            var_28 = (((~(((/* implicit */int) var_14)))) % (((/* implicit */int) (!(var_3)))));
        }
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_4))));
    }
}
