/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178700
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
    var_20 &= var_8;
    var_21 = ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((var_11) + (2147483647))) >> (((-1382210760206404279LL) + (1382210760206404281LL)))))) : (min((((/* implicit */unsigned long long int) var_15)), (20ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) -2147483645);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1430732618619589696ULL)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(-2147483645))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -9223372036854775797LL)), (270215977642229760ULL)))) ? (((/* implicit */unsigned long long int) -9223372036854775769LL)) : (arr_4 [i_0] [i_1]))))));
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((long long int) 144115188075854848ULL))) ? (((/* implicit */unsigned long long int) 7249550180971740162LL)) : (min((var_9), (((/* implicit */unsigned long long int) -9223372036854775807LL))))))));
                var_24 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9205357638345293824ULL)))) ? (min((var_4), (arr_2 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1] [i_0]) < (arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((long long int) ((65408ULL) / (((/* implicit */unsigned long long int) 2473330986176114792LL)))));
}
