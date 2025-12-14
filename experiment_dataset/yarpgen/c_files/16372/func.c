/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16372
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
    var_10 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_2)), (var_4)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 |= ((/* implicit */unsigned char) max((((arr_2 [i_0]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255)))) : ((-(((/* implicit */int) (unsigned char)255)))))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-46)), (arr_3 [i_0]))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */int) (_Bool)0);
            var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) != ((+(((/* implicit */int) arr_4 [i_1 + 1] [i_0]))))))));
        }
        var_13 = ((/* implicit */unsigned int) (signed char)-15);
        var_14 = ((/* implicit */unsigned long long int) arr_7 [i_0]);
    }
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)-15)))))), (((((/* implicit */int) min((var_3), (((/* implicit */short) var_8))))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) + (1994)))))));
    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_5)));
}
