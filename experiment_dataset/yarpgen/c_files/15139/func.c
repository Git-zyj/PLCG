/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15139
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) 2566680541U)) ? (((((/* implicit */_Bool) -1009310104)) ? (2566680541U) : (2566680541U))) : (((2566680541U) + (((/* implicit */unsigned int) 1009310103)))))), (((((/* implicit */_Bool) max((arr_3 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_1 [i_0] [(_Bool)1]))))) ? (((arr_0 [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */unsigned int) ((arr_2 [i_1]) | (((/* implicit */int) arr_4 [(_Bool)1])))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_3 [i_1] [i_1] [i_1]))) | (((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (arr_0 [i_0])))))) ? (((((/* implicit */_Bool) ((-1009310104) | (arr_2 [i_1])))) ? (max((18446744073709551588ULL), (((/* implicit */unsigned long long int) (signed char)76)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2795074567U)) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (arr_3 [i_1] [i_1] [(signed char)10])))))) : (((/* implicit */unsigned long long int) ((1009310103) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)-32)) == (((/* implicit */int) arr_1 [(_Bool)1] [(unsigned short)12]))))))))));
                arr_6 [i_1] = ((/* implicit */signed char) ((18446744073709551607ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1728286754U)) ? (((/* implicit */int) ((signed char) arr_3 [i_1] [i_0] [i_0]))) : (((/* implicit */int) min(((signed char)-77), ((signed char)-99)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2566680535U)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) & (2566680541U))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))))) : ((((~(var_18))) % (((/* implicit */int) ((_Bool) var_13)))))));
}
