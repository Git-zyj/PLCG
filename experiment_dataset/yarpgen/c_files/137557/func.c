/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137557
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) max((var_7), (((/* implicit */long long int) var_6))));
        var_16 = (~(((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */unsigned int) -155871757)) : (var_6)))) : (min((((/* implicit */unsigned long long int) var_9)), (14627126338948899992ULL))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((615349334480731898ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (arr_1 [(_Bool)1] [(_Bool)1]))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (~(4294967278U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) : (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
            var_19 = ((/* implicit */signed char) var_5);
        }
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_3 [(unsigned char)12] [(unsigned char)12])))) ? (((/* implicit */unsigned long long int) ((var_5) ? (arr_2 [i_1] [1U]) : (((/* implicit */unsigned int) var_0))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 4294967260U)) : (var_13)))))) ? (var_6) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_0)))) ? (max((4294967283U), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) 1905361795))))));
        var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 254624854)) : (arr_4 [(_Bool)1])))) - (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) | (9223372036854775807LL)))))))) : (min((arr_4 [i_1]), (arr_4 [i_1])))));
        arr_6 [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)3880))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_14 [i_4] [i_4] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_12)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)0] [(_Bool)1] [i_5] [(_Bool)1]))))));
                    var_22 = var_0;
                }
            } 
        } 
    } 
}
