/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14024
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
    var_16 = ((/* implicit */int) max((min((((/* implicit */unsigned int) min((var_14), ((unsigned char)0)))), (min((var_10), (var_11))))), (min((min((((/* implicit */unsigned int) var_7)), (var_11))), (((/* implicit */unsigned int) max((var_2), (var_8))))))));
    var_17 = min((min((((/* implicit */unsigned int) max((1084185731), (-1833998452)))), (max((((/* implicit */unsigned int) var_8)), (var_10))))), (((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_9)))), (min((((/* implicit */int) var_1)), (-1833998466)))))));
    var_18 = min((max((min((((/* implicit */long long int) (_Bool)1)), (5436434809204026374LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)30177)), (var_10)))))), (((/* implicit */long long int) max((min((var_1), (((/* implicit */short) (unsigned char)128)))), (((/* implicit */short) min((((/* implicit */unsigned char) var_7)), (var_15))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [9U] = ((/* implicit */unsigned char) max((min((min((3109931684129712200LL), (((/* implicit */long long int) (unsigned char)213)))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)48585)), (1833998451)))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned char)48)), (arr_1 [i_2] [(_Bool)0]))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)191)), (var_1)))))))));
                    arr_10 [i_2] [i_1] [4] [i_0] = ((/* implicit */signed char) min((min((min((((/* implicit */long long int) var_14)), (arr_7 [i_1] [13ULL]))), (((/* implicit */long long int) max((4U), (((/* implicit */unsigned int) (short)-25681))))))), (min((max((arr_7 [i_2] [i_0]), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_0])))), (((/* implicit */long long int) max((((/* implicit */unsigned int) 1243734603)), (var_12))))))));
                    var_19 *= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) min((-1710902740), (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2]))))), (min((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])), (var_11))))), (((/* implicit */unsigned int) min((min((1833998477), (-1833998438))), (max((-1833998434), (((/* implicit */int) (unsigned char)236)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((max((((/* implicit */unsigned int) min((((/* implicit */signed char) var_4)), ((signed char)93)))), (min((var_10), (var_5))))), (((/* implicit */unsigned int) min((max((-1833998431), (-1833998438))), (((/* implicit */int) min((((/* implicit */short) var_0)), (var_6)))))))));
}
