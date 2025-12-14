/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102890
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1417142045)) ? (1417142055) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)2047))))));
    }
    var_12 |= ((/* implicit */int) ((_Bool) 188521034830093016ULL));
    var_13 = ((/* implicit */unsigned short) max(((unsigned char)101), (((/* implicit */unsigned char) (signed char)-70))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_9))))), (var_0)))) ? (((((((/* implicit */_Bool) (signed char)-70)) ? (4089407478068736225ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31521)) && (((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_6), (var_5)))))))));
}
