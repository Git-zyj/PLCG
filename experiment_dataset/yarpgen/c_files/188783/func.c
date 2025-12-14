/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188783
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
    var_11 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3126602064U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_12 += ((/* implicit */int) max((((/* implicit */long long int) ((max((var_10), (((/* implicit */int) (signed char)-66)))) / (((/* implicit */int) (signed char)-76))))), (((((/* implicit */_Bool) 2673343238U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (((long long int) (_Bool)1))))));
            arr_7 [i_1] = ((/* implicit */short) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)55788)))))))));
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_1);
            var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (1990889859)));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1078389714)) && ((_Bool)1)));
        var_14 = ((/* implicit */int) (_Bool)1);
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_16 [i_2] [i_3] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_2])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9748)))))) ? (min((((/* implicit */int) var_5)), (var_4))) : (((/* implicit */int) arr_6 [i_3] [i_2])))));
            arr_17 [(_Bool)1] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)5145)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
        }
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)93))) : (503037653563816023LL))) : (((/* implicit */long long int) 3126602064U))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_8), (arr_13 [i_2] [i_2] [i_2]))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_2 [i_2]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))));
        var_17 += ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1070222113U), (var_1)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)860)))))))), ((~(((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (400263863U) : (400263862U)))))));
    }
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1070222112U)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (signed char)117))))), (var_2)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), ((~(var_9))))) : (((/* implicit */unsigned int) 383321247))));
}
