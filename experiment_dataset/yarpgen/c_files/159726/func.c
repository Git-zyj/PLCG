/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159726
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_11))))), (arr_2 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (short)12)) : (537664575)))) : ((-(17U)))));
                    var_14 += ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_4 [i_0 - 1]))))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_9 [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (537664579) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */_Bool) ((unsigned int) arr_2 [i_0 - 1]));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) * ((+(((/* implicit */int) (_Bool)0)))))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) /* same iter space */
    {
        arr_13 [i_3] = ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) <= (arr_2 [i_3 - 1]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_3])) > (min((4294967279U), (((/* implicit */unsigned int) (signed char)18))))))) : (((/* implicit */int) arr_11 [i_3] [i_3])));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(1020))))));
        arr_14 [i_3] = ((/* implicit */int) var_11);
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) 537664574);
        arr_18 [i_4] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (signed char)-46)), (((((/* implicit */_Bool) var_5)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) arr_1 [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) var_0)))))));
    }
    var_19 += ((/* implicit */unsigned short) (_Bool)1);
    var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
}
