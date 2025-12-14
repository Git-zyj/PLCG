/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132525
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) (!(var_8)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) min((arr_0 [i_1 + 3]), ((signed char)-70)))) : (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)204)))))) <= (((/* implicit */int) (signed char)50))));
                arr_7 [i_1] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [2ULL])) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned char)5])) : (18241154526609028547ULL))))))), ((+(-1081768854744464035LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((205589547100523069ULL) - (205589547100523048ULL)))));
    var_19 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) 160876182U))))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31801)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned short)42730))))))));
}
