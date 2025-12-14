/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140015
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
    var_14 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) | (7822232260444829398LL));
    var_15 = min((((unsigned char) 2030158116U)), ((unsigned char)190));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (unsigned char)190);
        arr_2 [i_0] [i_0] = (-(((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1]))))) ? (min((arr_4 [i_1]), (((/* implicit */unsigned int) arr_6 [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)190), (((/* implicit */unsigned char) arr_5 [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) var_12);
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) arr_6 [i_2])) : (min((((/* implicit */long long int) arr_3 [i_2])), ((-(arr_9 [i_2])))))));
        var_17 = min((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3474569069U)))), (((var_7) ? (var_9) : (((/* implicit */long long int) 3474569045U)))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (arr_6 [i_2]) : (((/* implicit */int) (unsigned char)66))))))));
        var_18 = ((/* implicit */int) ((((/* implicit */long long int) (-(((unsigned int) (unsigned char)81))))) % (((((/* implicit */long long int) ((unsigned int) var_5))) | (((var_9) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82)))))))));
        arr_12 [i_2] = ((/* implicit */int) arr_3 [i_2]);
    }
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) (-(min((((/* implicit */unsigned int) var_3)), (4122960013U)))))) == (((long long int) min((2025210148U), (2025210148U))))));
}
