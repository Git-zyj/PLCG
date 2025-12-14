/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15609
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
    var_13 |= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) (unsigned short)25908)) ? (10524630727115017693ULL) : (15832714260039475818ULL)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) var_10);
        var_15 += ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((15832714260039475818ULL) > (2614029813670075790ULL))))) == ((+(15832714260039475818ULL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((15832714260039475818ULL), (2614029813670075795ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2614029813670075798ULL))))));
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -8856642873825957036LL)), (13344019764669057933ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-40)) == (arr_1 [i_0] [i_0])))) : (arr_1 [i_0 + 1] [i_0])))), (((min((2614029813670075797ULL), (((/* implicit */unsigned long long int) 2387673965U)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)119)))))))));
    }
    var_17 = ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) : (((((/* implicit */_Bool) 1143914305352105984ULL)) ? (15832714260039475814ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)65535)), (-1LL)))))));
}
