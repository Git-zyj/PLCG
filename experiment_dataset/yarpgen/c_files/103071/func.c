/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103071
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)108))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)145)), (var_10)))) : (((/* implicit */int) max(((unsigned short)6727), (((/* implicit */unsigned short) (unsigned char)110))))))) > (((/* implicit */int) (unsigned char)110))));
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3))))) ? ((+(18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (_Bool)0)))))))) ? (((var_4) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)141)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) max((((((/* implicit */_Bool) 2957811839U)) || (((/* implicit */_Bool) (unsigned char)138)))), (((((/* implicit */int) (unsigned char)129)) > (((/* implicit */int) var_10)))))))));
                arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-111))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) min(((_Bool)1), (var_4)))) : ((+(((/* implicit */int) var_1))))))) : (((long long int) var_1))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)38268))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) : (var_7)))));
}
