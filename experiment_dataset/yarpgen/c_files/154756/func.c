/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154756
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_16 = 536805376ULL;
                            arr_13 [(unsigned char)3] = ((/* implicit */_Bool) (-(18446744073172746221ULL)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1 + 1] [7LL])))) ? (14812767198430833570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_1 + 1]))))))));
                var_18 = ((/* implicit */signed char) 18446744073172746199ULL);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_19 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_7] [i_6] [(signed char)15] [(signed char)15])) != (((((/* implicit */int) var_8)) << (((17179869168LL) - (17179869147LL)))))))) << (((((min((8162318994399849469ULL), (arr_16 [i_4] [i_5 - 2] [i_6]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) - (18439671611255927ULL)))));
                        arr_23 [i_7] = ((((((/* implicit */_Bool) arr_16 [i_6 - 2] [i_5] [i_5 + 1])) ? (arr_19 [i_6 - 3] [i_6 - 3]) : (arr_16 [i_6 + 1] [i_5] [i_5 - 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_22 [i_5 - 2] [0LL] [i_6 - 2] [0LL]), (arr_22 [i_5 + 1] [i_5 + 1] [i_6 - 2] [i_6]))))));
                    }
                } 
            } 
        } 
        arr_24 [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
}
