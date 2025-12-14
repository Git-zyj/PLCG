/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109081
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)186)) / (((/* implicit */int) ((_Bool) (signed char)-57)))));
                    arr_9 [i_0] [i_0] [6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((14400177777662768511ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) || (((/* implicit */_Bool) ((unsigned char) max((var_10), (((/* implicit */unsigned short) (_Bool)1))))))));
                    arr_10 [i_0] [i_1] [i_0] = max((-1), (((/* implicit */int) (unsigned char)70)));
                    arr_11 [i_0] = ((/* implicit */unsigned char) min((min(((unsigned short)14246), (var_9))), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (405757460U))) >= (min((((/* implicit */unsigned int) 3)), (3889209839U))))))));
                    var_14 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */int) (short)-6205)), ((-2147483647 - 1)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) (unsigned char)15)), (1028716480U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (unsigned short)9772))))))) | (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_16 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32749))) / (-3512234576874778422LL))));
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) var_12);
    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */long long int) (-(2147483641)))), ((-(8191LL))))));
    var_19 = ((((/* implicit */_Bool) (unsigned short)49318)) ? (9223372036854775807LL) : (4619177994716088514LL));
}
