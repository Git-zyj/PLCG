/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185559
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
    var_18 = ((/* implicit */int) min((var_18), (min((170874936), (((/* implicit */int) (unsigned char)237))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_14)) | (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) : ((-(max((4294967295U), (((/* implicit */unsigned int) (signed char)114))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)67))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (short)-18948)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */int) var_7)) << (((arr_1 [i_0]) - (18000013528578011345ULL))))))), ((+((+(((/* implicit */int) var_10))))))));
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_22 = ((/* implicit */int) ((min((((/* implicit */int) (signed char)-96)), (-1))) >= ((+(((/* implicit */int) var_17))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) min((min((var_6), (((/* implicit */unsigned long long int) (unsigned short)14)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_12 [i_2] = ((/* implicit */signed char) min((arr_9 [i_2]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((1809820392), (((/* implicit */int) var_17))))) >= (((((/* implicit */unsigned long long int) 1015891027U)) ^ (arr_10 [i_3]))))))));
            var_24 &= ((/* implicit */unsigned short) arr_7 [(signed char)7]);
            arr_13 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((arr_11 [i_3]) ? (min((((/* implicit */unsigned long long int) ((var_16) + (arr_8 [i_2])))), (((arr_10 [i_2]) + (6582071443227855521ULL))))) : (((/* implicit */unsigned long long int) (+(arr_9 [i_2]))))));
        }
        arr_14 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), ((signed char)125))))) : (arr_10 [i_2])))));
    }
}
