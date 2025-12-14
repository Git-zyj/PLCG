/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162520
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
    var_12 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_7)), (((var_10) ? (var_6) : (((/* implicit */unsigned long long int) var_4)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [(short)23]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) (-(((long long int) ((((/* implicit */_Bool) (unsigned char)205)) ? (arr_7 [i_3] [i_2] [i_1] [(signed char)23]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                        var_15 = ((/* implicit */long long int) max((((min((((/* implicit */unsigned long long int) (unsigned short)4480)), (var_6))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)61055)) & (((/* implicit */int) (unsigned short)4480))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)4480)))))));
                        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((unsigned short)19345), ((unsigned short)61055)))), (((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) (+(min((arr_7 [i_2] [i_1 + 1] [i_1 + 1] [i_3]), (((/* implicit */long long int) arr_10 [i_3])))))))));
                        var_17 -= ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                        var_18 = ((/* implicit */unsigned short) (+((+((-(var_4)))))));
                    }
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_4))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)1767)) % (70142937)));
                    var_21 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
    } 
}
