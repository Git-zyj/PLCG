/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107627
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */_Bool) min((min((4126848485350215376LL), (((/* implicit */long long int) 1848008621)))), (((/* implicit */long long int) ((_Bool) ((arr_5 [i_1]) == (((/* implicit */int) var_0))))))));
                    arr_8 [(signed char)5] [(unsigned char)1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1848008621)) ? (((/* implicit */int) (unsigned short)10775)) : (((-1848008649) / (((/* implicit */int) (unsigned char)39))))))), (((((/* implicit */_Bool) (unsigned short)6752)) ? (max((((/* implicit */unsigned int) 1848008648)), (3769497463U))) : (((/* implicit */unsigned int) arr_5 [i_0]))))));
                    var_11 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */short) var_4);
    var_13 |= ((/* implicit */short) min((var_4), (((/* implicit */long long int) (-(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_3))))))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((min((18370275603048314573ULL), (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))), (((unsigned char) (_Bool)1)))))));
}
