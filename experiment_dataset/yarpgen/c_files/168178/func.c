/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168178
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
    var_20 = ((/* implicit */unsigned char) max((((long long int) ((signed char) var_0))), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
    var_21 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4189482490U)) ? (((((/* implicit */int) (short)26214)) % (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_1 [i_0]))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_1])) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (signed char)47))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_2 [i_0]))))) == (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_19)))));
            var_25 = ((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0]));
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_26 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2]))));
            var_27 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_5 [i_0] [i_0])) & (((/* implicit */int) arr_6 [i_2] [i_2] [i_0]))))));
            arr_8 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
            var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) var_2))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            var_29 = ((/* implicit */long long int) arr_5 [i_0] [i_3]);
            var_30 = ((/* implicit */signed char) arr_4 [i_3] [i_3] [i_3]);
            var_31 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_1)))));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)52476))));
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0]))) : (13082039544483101586ULL)))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_2 [i_0]))))));
    }
}
