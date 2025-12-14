/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16412
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) arr_0 [(unsigned char)1] [13LL]))))));
        var_16 = ((/* implicit */unsigned short) ((signed char) arr_1 [(_Bool)1] [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14030473717408780245ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (14030473717408780245ULL)))) && (((/* implicit */_Bool) ((short) arr_5 [i_1] [i_1])))))) / (((/* implicit */int) min(((((_Bool)1) && ((_Bool)1))), (((_Bool) arr_4 [(short)21])))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)28)) && ((!((!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))))));
        var_19 = ((/* implicit */_Bool) var_5);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 4; i_3 < 10; i_3 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_3 [20ULL]) & (arr_3 [(short)0]))) : ((-(arr_3 [2ULL])))));
            var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2088644833)) ? (((/* implicit */int) (unsigned short)59062)) : (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */int) (signed char)90)) - (79)))));
        }
        /* vectorizable */
        for (short i_4 = 4; i_4 < 10; i_4 += 3) /* same iter space */
        {
            arr_18 [i_4] = ((/* implicit */short) (_Bool)1);
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])) >= (((/* implicit */int) arr_11 [(signed char)11] [i_4 - 4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1848447523U)))))));
        }
        arr_19 [i_2] [i_2] = ((/* implicit */_Bool) 4416270356300771371ULL);
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_14) : (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) var_1)) : (var_4)))))) > (((18446744073709551614ULL) >> (((4416270356300771387ULL) - (4416270356300771331ULL)))))));
}
