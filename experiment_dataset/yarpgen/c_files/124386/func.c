/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124386
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 362997525435930751ULL)) || (((/* implicit */_Bool) 2058385423823594360LL)))) ? (((/* implicit */int) (((+(arr_0 [(short)19]))) < (((((/* implicit */_Bool) arr_3 [7U] [i_0] [i_0])) ? (arr_4 [i_0]) : (arr_0 [i_1])))))) : (((/* implicit */int) var_8))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65530)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))) ? (((/* implicit */long long int) 4247833395U)) : (var_13))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62503)) ? (((((/* implicit */_Bool) arr_1 [(unsigned char)3] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)194)) != (((/* implicit */int) (unsigned short)65529))))))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (-1796400388) : (((/* implicit */int) (_Bool)0))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_22 |= ((/* implicit */unsigned char) max((((max((arr_0 [i_0]), (arr_6 [i_3] [i_3] [i_2] [4LL] [16LL] [i_0]))) << (((((/* implicit */int) (unsigned char)252)) - (252))))), (((/* implicit */int) ((unsigned char) min((((/* implicit */int) (signed char)(-127 - 1))), (2143421743)))))));
                        arr_8 [i_0] [i_0] [i_2] [(unsigned short)7] = ((/* implicit */unsigned long long int) var_2);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_12);
}
