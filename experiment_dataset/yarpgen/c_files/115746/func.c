/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115746
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((min((max((((/* implicit */int) var_16)), (var_0))), (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (_Bool)0))))))), (max((min((((/* implicit */int) var_16)), (var_10))), (var_3))))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((min((min((8125927222367269793LL), (((/* implicit */long long int) (unsigned char)124)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)21)) >> (((4018341830U) - (4018341828U)))))))), (((/* implicit */long long int) var_10)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_1))) <= (min((((/* implicit */int) (short)-4514)), (-1953781015)))))), (((((/* implicit */int) var_2)) >> (((min((((/* implicit */int) var_15)), (var_3))) + (1606123525)))))));
    var_20 ^= ((((/* implicit */int) ((((/* implicit */int) min((var_16), (var_2)))) >= (((((/* implicit */int) (unsigned short)65529)) | (((/* implicit */int) var_12))))))) == (max((max((((/* implicit */int) var_7)), (var_0))), (((/* implicit */int) var_7)))));
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) == (((/* implicit */int) ((0) != (((/* implicit */int) var_4)))))))), (min((((/* implicit */unsigned int) (unsigned short)65535)), (276625466U)))));
}
