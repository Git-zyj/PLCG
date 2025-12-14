/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100155
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96)))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_13)) ? (3036654379U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7171)))))))) : (var_10)));
        var_18 = (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_0 [i_0])), (var_1))), (((/* implicit */unsigned short) (_Bool)0))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_6))));
                        var_20 += ((/* implicit */unsigned char) ((unsigned long long int) ((((var_10) / (((/* implicit */long long int) arr_1 [i_3] [(_Bool)1])))) >= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))))));
                    }
                } 
            } 
        } 
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((long long int) (unsigned short)12372)))) ? (max((7839639095269452525LL), (((/* implicit */long long int) arr_2 [i_0 - 1])))) : (((/* implicit */long long int) 3139314837U))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_13 [i_4] [(unsigned short)6] = ((/* implicit */unsigned int) min((max(((-(((/* implicit */int) (unsigned char)241)))), (-264550890))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)88)))))))));
        var_22 = ((/* implicit */long long int) (unsigned char)225);
        arr_14 [i_4 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)6), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-9007199254740992LL)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 1412775051709008332ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */long long int) (unsigned char)240)), ((+(1233548422773140181LL)))))));
    }
    /* LoopSeq 1 */
    for (signed char i_5 = 4; i_5 < 13; i_5 += 1) 
    {
        var_23 += ((((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) 0U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16668))))))) <= (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_5] [i_5 - 2] [i_5 - 3] [i_5])) : (((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))))) & (2092182742825886675LL))));
        arr_19 [i_5] = ((/* implicit */long long int) (_Bool)1);
    }
}
