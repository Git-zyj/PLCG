/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165849
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) min((max((max((var_2), (var_3))), (((/* implicit */unsigned long long int) max((var_1), (0)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min((((/* implicit */short) var_5)), (var_7)))), (max((var_4), (((/* implicit */unsigned short) var_5))))))))))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) 0)), (var_2))), (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) var_5))))))), (max((min((((/* implicit */unsigned long long int) 1511562581)), (var_3))), (((/* implicit */unsigned long long int) max(((short)29926), ((short)-29942)))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) max((min((min((var_2), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */short) var_8))))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */int) (signed char)111)), (8))), (min((13), (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)2)), ((short)19773)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 += ((/* implicit */_Bool) min((max((7), (-986160870))), (min((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_4 [i_1])))), (min((arr_5 [i_1]), (((/* implicit */int) var_8))))))));
        var_14 = ((/* implicit */signed char) max((max((((/* implicit */long long int) max((((/* implicit */int) var_8)), (-9)))), (max((((/* implicit */long long int) 4182889801U)), (32985348833280LL))))), (min((max((-32985348833280LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((6), (((/* implicit */int) (signed char)111)))))))));
        var_15 -= ((/* implicit */unsigned short) max((min((max((((/* implicit */int) (short)-24581)), (var_1))), (((/* implicit */int) min((var_7), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */int) max((max((((/* implicit */unsigned short) var_8)), ((unsigned short)46839))), (max((((/* implicit */unsigned short) var_5)), (arr_4 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) min((min((max((((/* implicit */int) arr_4 [i_1])), (var_1))), (min((-1), (((/* implicit */int) var_9)))))), (max((min((((/* implicit */int) (unsigned char)98)), (986160892))), (-986160893)))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) min((min((max((((/* implicit */long long int) (signed char)76)), (18LL))), (((/* implicit */long long int) min((7), (((/* implicit */int) arr_0 [i_2]))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((8), (986160892)))), (max((arr_7 [i_2]), (((/* implicit */unsigned int) (unsigned short)1662)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (short)1954))));
            var_17 = ((/* implicit */signed char) 0);
        }
        var_18 = ((/* implicit */long long int) max((max((max((((/* implicit */unsigned long long int) (signed char)-124)), (var_2))), (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (6694603720911409704ULL))))), (max((max((var_2), (((/* implicit */unsigned long long int) arr_4 [i_2])))), (((/* implicit */unsigned long long int) min((arr_4 [i_2]), (((/* implicit */unsigned short) (_Bool)0)))))))));
    }
}
