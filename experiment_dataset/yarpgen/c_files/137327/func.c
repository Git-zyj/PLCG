/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137327
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
    var_14 = ((/* implicit */signed char) var_6);
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_3))))))) ? (var_13) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3492983731464557632ULL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)-32))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 14769523174039917066ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (max((min((71987225293750272LL), (((/* implicit */long long int) (signed char)39)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (signed char)-120))))))))))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */int) arr_6 [(unsigned char)10])), (var_4)))), (var_5)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46269)) && (((/* implicit */_Bool) 1420098946U))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) (unsigned char)96)) ? (arr_5 [i_1]) : (((/* implicit */long long int) 2874868345U)))) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (arr_5 [i_1]) : (((/* implicit */long long int) 325618275))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_5 [i_1 + 2])))));
        arr_9 [i_1] = ((((/* implicit */_Bool) max((max((14953760342244993984ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_6 [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)28702))))) ? (((arr_5 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1])))) >= (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_6 [i_1])))))))));
    }
}
