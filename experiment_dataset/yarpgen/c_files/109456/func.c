/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109456
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((min((var_4), (((/* implicit */unsigned long long int) var_14)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_0])))))))), (min((((/* implicit */unsigned short) var_1)), (max((((/* implicit */unsigned short) var_16)), ((unsigned short)4064)))))));
            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(signed char)14]))));
        }
        var_20 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < (1784873557806550000ULL)))));
    }
    for (signed char i_2 = 4; i_2 < 10; i_2 += 2) 
    {
        arr_7 [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_6 [i_2])), (var_14)))), ((-(var_15)))))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_0))))))) : (max((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)103))), (((((/* implicit */_Bool) (unsigned short)0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 4])))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_0 [(unsigned short)3])) : (((/* implicit */int) (unsigned short)5698))))))) & ((~(max((((/* implicit */unsigned long long int) var_10)), (var_15)))))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
        var_22 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((var_15) > (var_4)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)5698)) : (((/* implicit */int) var_13))))))), (((var_3) ? (max((var_4), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) max((65024U), (((/* implicit */unsigned int) var_16)))))))));
    var_24 = ((/* implicit */unsigned int) var_10);
    var_25 &= ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min(((unsigned short)4064), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4096)))))))));
    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) << (((min((((unsigned long long int) (unsigned short)5181)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)65535)))))) - (73ULL)))));
}
