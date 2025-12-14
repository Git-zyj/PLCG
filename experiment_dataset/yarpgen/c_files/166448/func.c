/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166448
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
    var_12 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)32236)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((short)25962), (((/* implicit */short) (signed char)-7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (unsigned char)2))));
        var_14 = (signed char)-28;
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_15 = ((((/* implicit */_Bool) ((long long int) var_6))) ? (arr_2 [i_1] [i_1] [i_0]) : (((((/* implicit */_Bool) var_3)) ? (10452631615320071263ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_0])))));
            var_16 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 619478432U)))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_1] [i_0]))) : (((/* implicit */int) arr_1 [i_1]))));
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_11))));
            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_2 = 1; i_2 < 12; i_2 += 4) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned long long int) 3459628252U);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3675488855U)) > (arr_5 [i_0] [i_0])));
            var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 3]))) : (arr_5 [i_2 + 4] [i_2 - 1])));
            arr_7 [i_0] [i_0] [i_2] = 354966236;
        }
        for (signed char i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) 6995201891962409799LL);
            var_23 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        }
        arr_10 [i_0] = -830429303;
    }
    var_24 = ((/* implicit */int) 2138560836396205175LL);
    var_25 = ((/* implicit */short) ((((long long int) ((var_2) ? (var_5) : (((/* implicit */unsigned int) var_1))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
}
