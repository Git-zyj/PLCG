/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148225
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_13 |= ((/* implicit */short) arr_2 [(short)12]);
        var_14 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) var_10))))));
        var_15 = ((/* implicit */unsigned char) var_11);
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) ((short) (unsigned char)194))) : ((~(((/* implicit */int) (short)32760)))))) >> (((min((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_6)) - (188))))), ((-(((/* implicit */int) (_Bool)1)))))) + (6)))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(max((821250471), (((/* implicit */int) (_Bool)1))))))) == (((((/* implicit */_Bool) var_9)) ? ((-(arr_2 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_3 [i_1]))))))));
        var_18 = ((/* implicit */short) ((821250474) == (((/* implicit */int) (unsigned char)95))));
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-8732228932450125162LL)));
        /* LoopSeq 2 */
        for (int i_2 = 4; i_2 < 9; i_2 += 2) 
        {
            arr_8 [(unsigned char)7] = ((/* implicit */unsigned char) ((arr_4 [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_2 - 2]))));
            arr_9 [9LL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_3 [i_2 - 1]))) >> (((((/* implicit */int) arr_3 [i_2 - 1])) - (96)))));
            var_19 += ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned short)60121)) : (((/* implicit */int) (unsigned short)40483)));
        }
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 821250481))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5415))) : (-8732228932450125164LL)));
            var_21 *= ((/* implicit */unsigned short) arr_7 [i_3 + 1] [i_3 - 2]);
        }
    }
    var_22 = ((/* implicit */unsigned char) (((~(((/* implicit */int) min((var_2), (var_0)))))) | (((/* implicit */int) var_0))));
}
