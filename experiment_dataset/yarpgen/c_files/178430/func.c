/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178430
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(16744448)))) ? (min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-5696532963904395777LL))))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
        var_14 = ((/* implicit */signed char) 226316315897730798LL);
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((-(((/* implicit */int) (unsigned short)13326)))), (((/* implicit */int) min((var_2), (var_2))))))), (((-1LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-24)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) -226316315897730798LL);
        arr_6 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)77)) && (((/* implicit */_Bool) 399950210)))))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (long long int i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            {
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-18))))) ^ (min((var_4), (var_4)))))) ? ((((~(((/* implicit */int) var_2)))) ^ (-1272219007))) : (((/* implicit */int) (signed char)-109))));
                var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)53)))) ? ((+((+(4059420024U))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)13326)) ? (((/* implicit */int) var_12)) : (399950208))), (((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_4);
}
