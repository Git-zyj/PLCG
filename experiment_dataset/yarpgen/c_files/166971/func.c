/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166971
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
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) 16587834014348700404ULL)) || (((/* implicit */_Bool) 16587834014348700417ULL)))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (16587834014348700417ULL))) : (16587834014348700410ULL)))) ? (min((min((((/* implicit */unsigned long long int) (signed char)-80)), (2915375923779723045ULL))), (((((/* implicit */_Bool) arr_0 [4] [i_1])) ? (4520495093309421826ULL) : (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72)))))));
                var_12 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))))), (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (var_2))));
                var_13 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_0] [(short)5]) : (arr_2 [i_0] [i_1])))) * (max((((((/* implicit */unsigned long long int) var_0)) / (var_1))), (((((/* implicit */unsigned long long int) 268419072)) / (arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1051190415U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))) : (min((((/* implicit */unsigned int) (unsigned char)128)), (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)228)) != (((/* implicit */int) (short)3744)))))) : (((((/* implicit */_Bool) 1858910059360851209ULL)) ? (16587834014348700395ULL) : (15531368149929828570ULL)))));
        arr_9 [7U] [i_2] &= ((/* implicit */long long int) arr_0 [i_2] [i_2]);
    }
    var_15 += max((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_4))))), (min((((((/* implicit */_Bool) var_0)) ? (1858910059360851225ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))))));
    var_16 = ((/* implicit */unsigned short) min((-1LL), (((/* implicit */long long int) (signed char)-120))));
}
