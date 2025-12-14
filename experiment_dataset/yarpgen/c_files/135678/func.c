/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135678
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_0 [(unsigned short)8] [i_0])), (((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384)))))));
        var_12 += ((/* implicit */long long int) max((((/* implicit */int) ((signed char) max((((/* implicit */long long int) -1788163932)), (arr_0 [4U] [i_0]))))), (((int) ((((/* implicit */long long int) ((/* implicit */int) (short)15))) | (-8841158288524504482LL))))));
        var_13 += ((/* implicit */unsigned int) ((int) ((long long int) (short)-31148)));
        var_14 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1788163932)))) + (((((/* implicit */_Bool) ((long long int) arr_2 [i_1] [i_1]))) ? (min((var_9), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))))));
        var_16 = min((((((/* implicit */unsigned long long int) -1788163932)) % (max((2850544592269046074ULL), (((/* implicit */unsigned long long int) 8841158288524504492LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 67108800U))))));
        var_17 = ((/* implicit */long long int) ((unsigned long long int) -8841158288524504503LL));
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1788163933)) ? (arr_0 [i_1] [i_1]) : (((((/* implicit */_Bool) -8841158288524504503LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64532))) : (-8841158288524504493LL)))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((max((8841158288524504482LL), (((/* implicit */long long int) -1788163932)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2])))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            var_20 = ((/* implicit */short) var_4);
            var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)13))))) && (((/* implicit */_Bool) arr_6 [i_3 - 1])))), ((_Bool)0)));
        }
        arr_10 [i_2] = ((/* implicit */int) max(((+(arr_7 [i_2]))), (((/* implicit */long long int) arr_2 [i_2] [i_2]))));
    }
    var_22 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (unsigned short)63830)) : (-1610358182))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1873255889))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22030))) : (max((17127428739181318668ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))))))));
    var_23 = ((/* implicit */unsigned long long int) ((var_1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (-8841158288524504493LL) : (-8841158288524504493LL))))));
}
