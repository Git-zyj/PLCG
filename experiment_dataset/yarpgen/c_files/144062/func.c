/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144062
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((2147483647ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) ? ((~(((/* implicit */int) (unsigned char)27)))) : (((/* implicit */int) ((_Bool) ((unsigned char) (unsigned char)111))))));
                var_12 ^= ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (min((min((((/* implicit */long long int) arr_4 [i_1])), (arr_2 [i_0] [i_0]))), (((/* implicit */long long int) ((arr_3 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1])))))))));
                var_13 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */signed char) var_10)), ((signed char)-83)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)229)), (arr_2 [3U] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)82)))))))) : (arr_2 [i_0 - 1] [i_0 + 1])));
                arr_7 [i_0] [12LL] [12LL] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0 + 2])))) ? (((/* implicit */int) ((_Bool) 420129318437910754LL))) : (((/* implicit */int) var_4))));
                arr_8 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-3988416051127127811LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (_Bool)1))))))))), (min((((/* implicit */unsigned long long int) 3988416051127127811LL)), (17803793259504836608ULL)))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */unsigned long long int) var_5);
}
