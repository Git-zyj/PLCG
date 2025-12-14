/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144275
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
    var_13 = ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_12)), (var_2))), (((/* implicit */long long int) var_7))))) ? (((((min((var_1), (var_3))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) (unsigned short)2198)) ? (-7361914604330958249LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54918))))) + (7361914604330958265LL))) - (16LL))))) : (((((/* implicit */_Bool) max((var_2), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (var_0))));
    var_14 += var_11;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) -8698076207505352545LL)) ? (29LL) : (-7546383230710067017LL)))));
                        var_16 = max((((/* implicit */long long int) (unsigned short)21)), (-586068740839662426LL));
                        var_17 = ((/* implicit */long long int) ((unsigned short) var_3));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((arr_6 [i_0] [i_1] [i_2] [i_0]), (max((arr_6 [i_3] [(unsigned short)3] [i_1] [i_0]), (var_9))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_9 [(unsigned short)8] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)11047)) ? (8102791162849629543LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
    {
        var_19 += ((unsigned short) ((((/* implicit */_Bool) arr_9 [2LL] [i_4] [i_4] [2LL])) ? (((/* implicit */int) arr_9 [0LL] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_9 [8LL] [i_4] [i_4] [i_4]))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)28001)) == (((/* implicit */int) (unsigned short)31744))));
    }
}
