/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116926
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) ^ (var_4)))))))) == (min((((arr_5 [1U] [1U] [i_2]) % (((/* implicit */long long int) 3308908530U)))), (((/* implicit */long long int) (+(2605049158U))))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (3670793687U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0])))) : (5817852038770137323LL))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((unsigned long long int) -2498003905641433297LL)) <= (((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38747))))))));
    var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_16)) : ((+(2177840753U)))))) == (((((/* implicit */_Bool) 10466213013597706938ULL)) ? (((/* implicit */unsigned long long int) -2052911240398049078LL)) : (10466213013597706938ULL)))));
    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((3550932413768414066LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40140))))))))));
}
