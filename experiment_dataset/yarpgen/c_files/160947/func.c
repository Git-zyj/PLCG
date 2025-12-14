/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160947
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
    var_11 = ((/* implicit */unsigned long long int) ((min((var_8), (((/* implicit */unsigned long long int) var_9)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */signed char) ((((/* implicit */long long int) var_5)) >= (var_9))))))))));
    var_12 = ((/* implicit */_Bool) var_7);
    var_13 = ((/* implicit */unsigned int) (_Bool)1);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) var_1)), (var_6))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-4417))))), (((unsigned long long int) var_0)))))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) var_10);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max((7040113782332473721ULL), (0ULL)));
        var_16 = min((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)43874))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) ((unsigned short) (short)-4434)))))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) max(((unsigned char)231), (((/* implicit */unsigned char) (_Bool)1))))), (1392439283)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) == (((/* implicit */int) arr_0 [i_1])))))));
        var_17 = ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (6522737544647291098LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (arr_2 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [(signed char)10]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */short) (unsigned short)37769);
        var_19 = ((/* implicit */signed char) var_1);
        arr_12 [i_2] = ((/* implicit */unsigned long long int) var_4);
        arr_13 [i_2] = ((/* implicit */_Bool) var_10);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_10)))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_3])), ((unsigned short)51107)))))) % (((/* implicit */int) arr_16 [i_3]))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3])) ? ((~(((/* implicit */int) arr_10 [i_3])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_16 [i_3])))))))));
        arr_18 [i_3] = ((/* implicit */unsigned int) (_Bool)1);
        arr_19 [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_3]))));
    }
}
