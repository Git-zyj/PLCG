/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114247
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
    var_19 = ((/* implicit */short) var_4);
    var_20 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27572))) : (13U)))) ? (min((2376304619U), (((/* implicit */unsigned int) (short)27566)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_1))));
    var_21 = ((/* implicit */short) ((unsigned int) max((min((var_4), (((/* implicit */unsigned int) (short)27562)))), (((/* implicit */unsigned int) max((((/* implicit */short) var_9)), ((short)27576)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_22 |= ((/* implicit */unsigned long long int) ((var_12) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15267)) ? (((2376304619U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-27598))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (2101931427386268850ULL))));
                    var_23 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned char)239), ((unsigned char)115))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27556)))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)30)), ((unsigned short)31750))))))) ? (((((/* implicit */_Bool) (unsigned short)58972)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27567))) : (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27566)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6564))))))));
                }
            } 
        } 
    } 
}
