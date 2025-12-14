/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128170
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
    var_12 = (_Bool)1;
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned short)4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (671856688U)));
        var_13 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_0 [i_0] [(unsigned short)6])) == (((/* implicit */int) (_Bool)1))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2066427870U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = max(((((_Bool)1) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (_Bool)1)))), (552913404));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (((unsigned long long int) var_9))));
        arr_6 [2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 301552195)) / (-7045384715959635918LL)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [(short)12])) == (((((/* implicit */int) arr_4 [i_2])) + (((/* implicit */int) arr_4 [i_3]))))));
            arr_13 [i_3] = ((/* implicit */_Bool) arr_8 [i_2]);
            var_16 = ((/* implicit */int) ((unsigned short) arr_10 [i_3 - 1] [i_3]));
            arr_14 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_3 [i_3]))) ^ (arr_8 [i_3 - 1])));
        }
        for (long long int i_4 = 3; i_4 < 16; i_4 += 4) /* same iter space */
        {
            arr_18 [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -552913386)) ? (((/* implicit */int) (unsigned short)54672)) : (((/* implicit */int) var_0))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_4 - 3] [i_4 + 1])) : (((/* implicit */int) arr_0 [i_4 - 3] [i_4 + 1])))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) -552913405)))))));
        }
        for (long long int i_5 = 3; i_5 < 16; i_5 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5 - 2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_5])) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_5] [(_Bool)1])))))));
            var_20 = ((/* implicit */unsigned long long int) var_5);
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (signed char)72))));
        }
        arr_21 [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_17 [i_2]))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) var_2);
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_6) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)51694)) / (((/* implicit */int) (signed char)72)))))))) / (((((/* implicit */_Bool) (unsigned short)38312)) ? (10425532316320469692ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_6] [i_6])))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_25 [i_6] [i_6]))));
    }
}
