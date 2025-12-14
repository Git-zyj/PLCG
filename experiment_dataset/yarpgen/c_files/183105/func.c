/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183105
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((var_2), (((/* implicit */long long int) var_12)))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (-1423128483)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_18 -= ((/* implicit */int) (((-(((unsigned long long int) var_4)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (7461964149840517637ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((var_15), ((signed char)-12)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_4 [(_Bool)1] [i_0 + 1] = ((/* implicit */short) ((unsigned long long int) max(((_Bool)0), (arr_1 [i_0 + 1]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-8);
    }
    for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((((/* implicit */int) var_8)) <= (min((((((/* implicit */int) (signed char)38)) / (1423128472))), (min((var_12), (((/* implicit */int) (_Bool)0)))))));
        arr_9 [i_1 + 1] [i_1 - 1] = ((/* implicit */signed char) arr_6 [i_1]);
    }
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) max((var_1), (((/* implicit */signed char) (_Bool)0))))) & (((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 2])))) << (((((/* implicit */_Bool) ((-1423128455) / (((/* implicit */int) var_8))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_6)))))))));
        arr_12 [i_2 + 1] [(unsigned short)3] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) min((arr_2 [i_2]), (((/* implicit */long long int) arr_11 [i_2]))))) & (((unsigned long long int) -279071933)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_2] [(unsigned char)1]), (((/* implicit */signed char) arr_10 [i_2 - 1]))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (arr_0 [(_Bool)0] [10])));
    }
    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 3) 
    {
        arr_16 [i_3] = arr_3 [i_3 - 3] [i_3];
        arr_17 [i_3] = ((/* implicit */short) max(((+(((/* implicit */int) arr_3 [i_3] [i_3 - 2])))), (((/* implicit */int) (unsigned char)33))));
    }
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_11))))));
}
