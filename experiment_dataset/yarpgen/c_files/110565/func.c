/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110565
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (((+(9223372036854775804LL))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)32754))))), (arr_0 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1 + 1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) || (var_12))))) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (max((((/* implicit */unsigned int) min(((short)28781), (((/* implicit */short) arr_5 [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_7 [i_2] [i_1] [i_0 - 1]) : (var_0)))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) * (max((27LL), (((/* implicit */long long int) arr_6 [i_2] [i_2] [i_2] [i_2]))))))) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [(signed char)0]))));
                }
            } 
        } 
        arr_10 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_2 [6LL])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (max((((/* implicit */unsigned int) max((arr_4 [2LL] [i_0] [i_0 - 1]), (((/* implicit */int) (signed char)42))))), (((14U) / (12U))))) : ((-(((((/* implicit */_Bool) 6ULL)) ? (3890015074U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))))))));
        var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (((max((var_8), (-5964284548261275892LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 |= ((/* implicit */int) var_1);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((((/* implicit */_Bool) 2399707305U)) || (((/* implicit */_Bool) arr_4 [4U] [i_3] [4U])))) || (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [14LL])) <= (((/* implicit */int) arr_5 [i_3] [(_Bool)0])))))) : (min((1749349411U), (((/* implicit */unsigned int) arr_2 [14LL]))))))))))));
    }
    var_19 = max((((/* implicit */unsigned int) var_10)), (2399707305U));
}
