/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116022
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
    var_12 = 706050981;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) var_3)))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 706050981)) || (((/* implicit */_Bool) (signed char)-97))))) <= (706050981)));
                            var_14 = ((/* implicit */unsigned char) 706050974);
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-706050977) >= (arr_4 [i_0] [i_1] [i_2]))))) ^ (((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [15ULL] [i_4] [i_4] [i_4])) ? (var_10) : (var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0])))))))));
                            arr_16 [i_2] [i_2] [i_2] [i_3] [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((int) arr_7 [i_0] [0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 3])) ? (((/* implicit */int) var_7)) : (706050983))) : (((int) min((arr_0 [i_2]), (((/* implicit */unsigned int) 706050951)))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) : (((var_0) + (((/* implicit */unsigned long long int) 1048576)))))) : (max((((/* implicit */unsigned long long int) ((unsigned char) -706050953))), (((((/* implicit */unsigned long long int) 2027694073)) * (16ULL))))))))));
        }
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_2)) % (706050972)))))) ? (((/* implicit */int) ((short) var_0))) : (var_3)));
    var_19 = ((/* implicit */unsigned char) var_4);
}
