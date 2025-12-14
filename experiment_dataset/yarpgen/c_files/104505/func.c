/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104505
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [0ULL] [0ULL] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), ((~(((arr_1 [8U]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))) && (((/* implicit */_Bool) ((short) -6406387387408176791LL)))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */int) min((((((((/* implicit */_Bool) (unsigned char)12)) || (((/* implicit */_Bool) 5475390305035079362ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)12)), (var_6)))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)11))))) || (((/* implicit */_Bool) ((3407734235417295890LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
