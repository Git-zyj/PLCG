/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125935
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
    var_15 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) (-(((/* implicit */int) var_3))))));
    var_16 = ((/* implicit */int) min((var_10), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 3])))))));
        var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)8)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24704)))))));
        var_18 |= ((/* implicit */unsigned int) arr_2 [i_1]);
        var_19 = ((/* implicit */signed char) arr_6 [i_1]);
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((6970698368047318583LL) < (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) arr_8 [i_2]);
        var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)20)) ^ (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-27)), ((unsigned char)202))))))), (var_8)));
        var_22 -= ((/* implicit */_Bool) -1054157970);
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (17146314752ULL)));
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)6540)) == (((/* implicit */int) (_Bool)1))));
        arr_17 [0U] [(_Bool)1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_9))))))));
    }
}
