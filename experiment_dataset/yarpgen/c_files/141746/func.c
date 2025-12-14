/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141746
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (var_2)))) != (((((/* implicit */int) var_1)) | (var_0))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_2) - (1857323113))))))));
        var_16 = ((/* implicit */short) var_7);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_12) + (2147483647))) >> (((((/* implicit */int) (unsigned char)190)) - (165)))))) ? (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521)))));
        var_18 = ((/* implicit */unsigned short) ((((((-1) + (2147483647))) >> (((((/* implicit */int) var_13)) - (153))))) <= (((/* implicit */int) ((arr_2 [i_0] [19LL]) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_2 [i_0] [i_0]))))));
    }
    for (short i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) var_6))), (((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)65500)) : (((/* implicit */int) arr_1 [i_1 - 3] [19ULL]))))));
        var_20 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-2147483647 - 1))), (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)87))))) ^ (1576588568U)))));
        var_21 = ((/* implicit */unsigned int) max(((+(((140737421246464ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) arr_0 [15ULL]))));
        var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) ((((unsigned long long int) var_0)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) != (((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) var_9)));
    }
    for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 2) 
    {
        arr_9 [i_2] [12] = max(((-((-(arr_7 [i_2]))))), (((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (unsigned char)255)))))));
        arr_10 [17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) arr_8 [i_2 - 2])) : (((/* implicit */int) (_Bool)1)))), (-1738788532)))) ? (((/* implicit */int) arr_8 [i_2])) : (((int) (~(((/* implicit */int) var_3)))))));
    }
}
