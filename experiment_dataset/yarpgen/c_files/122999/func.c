/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122999
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
    var_17 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (3977202721U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_0)));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -357406543))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) min((8191), (1564282360))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 317764572U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)33))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) arr_1 [i_0] [i_0])))))))) : (arr_0 [i_0] [(unsigned char)0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(arr_0 [1U] [i_1]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((((3780481175176749632ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))) ^ (((/* implicit */unsigned long long int) 3363601356103402332LL)))) : (((arr_5 [i_1]) ? (((((/* implicit */_Bool) 2305843009213693951ULL)) ? (15994864130679848453ULL) : (137438953408ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_6 [i_1] [4U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) + (min((((/* implicit */unsigned int) -2147483637)), (arr_6 [i_1] [i_1]))))) : (3423344552U))))));
            var_20 += var_14;
        }
    }
}
