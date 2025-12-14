/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1634
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_9)) == (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_8))))) ? (var_3) : (((((/* implicit */_Bool) (unsigned char)14)) ? (var_13) : (((/* implicit */unsigned long long int) var_9))))))));
    var_16 |= ((/* implicit */signed char) ((var_4) & (((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)0)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1]))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_7)), (arr_3 [i_0 + 1]))) == ((-(586814628U)))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) (-(((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-107)))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (var_13)))));
        arr_8 [i_1] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) 1178729750U)))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) var_1);
        arr_10 [i_1] = ((/* implicit */long long int) (unsigned short)5);
    }
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_2] [i_2]))));
        arr_15 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((+(16135650471598049295ULL)))))));
        arr_16 [i_2] = ((/* implicit */unsigned char) ((arr_11 [i_2] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_19 = ((/* implicit */long long int) (-(((arr_3 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2))))))));
    }
}
