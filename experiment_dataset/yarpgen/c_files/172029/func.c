/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172029
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
    var_14 = ((/* implicit */_Bool) var_11);
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)39)) && (((/* implicit */_Bool) var_10)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)52)) >> (((((/* implicit */int) (unsigned char)189)) - (180)))))), (((unsigned int) 160105870U)))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) -1546839430))));
                var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))), (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (signed char)127))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)108)), ((unsigned char)84))))))))));
            }
            var_19 = ((((/* implicit */int) ((unsigned short) ((unsigned long long int) var_11)))) == (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])));
            var_20 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (((var_1) ? (((/* implicit */unsigned int) 2147483647)) : (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
        }
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_21 = ((/* implicit */signed char) arr_5 [i_0]);
            var_22 -= ((/* implicit */long long int) var_0);
        }
        arr_11 [i_0] &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) < (((((/* implicit */_Bool) ((short) 3274971964U))) ? (arr_7 [6U] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (-5604040461405998679LL)))))))));
    }
}
