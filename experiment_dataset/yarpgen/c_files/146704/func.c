/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146704
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
    var_14 += ((/* implicit */long long int) min((max((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_12)))))), (((853030216) << (((((/* implicit */int) (unsigned short)47273)) - (47272)))))));
    var_15 = ((/* implicit */short) var_4);
    var_16 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_5)))), (18446744073709551602ULL)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (min((((/* implicit */long long int) max((max((arr_1 [9]), (((/* implicit */unsigned int) arr_4 [(short)3])))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)6029)) - (((/* implicit */int) (short)24266)))))))), ((-(min((((/* implicit */long long int) (unsigned short)1)), (9223372036854775805LL)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [(_Bool)1])) - (((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (unsigned short)39046)))))));
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) ((unsigned short) (unsigned short)35053)))))) % (((((/* implicit */_Bool) (unsigned short)10)) ? (17633211731862068977ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) min((13), (((/* implicit */int) (unsigned short)59484))));
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) max((var_7), (((/* implicit */int) (unsigned char)169))));
}
