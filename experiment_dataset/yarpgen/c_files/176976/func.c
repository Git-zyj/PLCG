/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176976
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
    var_16 *= ((/* implicit */long long int) ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)9))))) < (var_5))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((arr_1 [i_0 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (unsigned char)133)))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned short) ((long long int) 3815888142U))))));
    }
    var_18 = ((/* implicit */short) (signed char)-59);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 20; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (signed char)-69))) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_12)) / (-3561410421618575216LL)))))))));
                        arr_14 [i_1] [i_1] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_1] [i_3 - 2] [(_Bool)1] [(unsigned char)12] [i_2]))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) min((var_21), (var_12)));
        }
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1888365097)))) ? (var_9) : (((/* implicit */long long int) arr_12 [i_1] [i_1]))));
    }
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_23 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((min((((/* implicit */long long int) var_6)), (var_9))) < (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) : (var_11)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-95)) || (((/* implicit */_Bool) arr_16 [i_5]))))) > (((/* implicit */int) var_10))))));
        arr_18 [i_5] = (!(((/* implicit */_Bool) arr_9 [(signed char)14] [i_5] [i_5] [i_5])));
        arr_19 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_10 [i_5] [i_5] [i_5])), (((int) (-9223372036854775807LL - 1LL)))));
    }
    for (int i_6 = 4; i_6 < 8; i_6 += 2) 
    {
        var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-55)) ? (arr_16 [i_6]) : (((/* implicit */int) (unsigned char)139))))) ? (-1888365097) : (arr_4 [i_6 - 2]))));
        var_25 = ((/* implicit */_Bool) min(((~(9223372036854775792LL))), (((/* implicit */long long int) ((((((/* implicit */int) arr_20 [i_6] [i_6 - 1])) + (2147483647))) >> (((((int) arr_12 [i_6] [i_6])) + (1802214779))))))));
        arr_22 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (2147483647)));
    }
}
