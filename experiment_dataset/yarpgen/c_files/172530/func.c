/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172530
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
    var_16 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)7951), (((/* implicit */unsigned short) (_Bool)1)))))) * ((+(var_0))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 + 2] [i_0]) : (arr_1 [i_0 - 1] [i_0]))) : (max((var_2), (arr_1 [i_0 + 2] [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [3LL] [i_2] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_1 + 1] [i_0 + 1] [i_0 + 1])))) != (((unsigned long long int) var_0))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) 17134291759875563246ULL);
                    var_18 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)1920)), (12009446684514495545ULL)))) ? (((/* implicit */int) ((var_0) != (arr_0 [(_Bool)0])))) : (((/* implicit */int) var_11))))));
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (6437297389195056071ULL)));
                }
            } 
        } 
    }
    var_20 = (((!(((((/* implicit */_Bool) (signed char)-37)) || (((/* implicit */_Bool) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_15)))) ? (var_0) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)7951)) : (((/* implicit */int) var_6))))))));
}
