/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147877
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 27736533U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)32)))))))) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned short)26107))))))));
        var_15 -= (_Bool)1;
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_16 = (+((+((+(-259277668))))));
        var_17 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), ((-(27736533U)))))));
    }
    for (int i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            var_18 = var_8;
            var_19 = ((/* implicit */signed char) arr_7 [14ULL]);
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_19 [i_2] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_3]))))), (((((/* implicit */_Bool) 27736530U)) ? (max((((/* implicit */unsigned int) (unsigned short)45307)), (2690305642U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)32580)))))))));
                            var_20 += ((/* implicit */unsigned long long int) (signed char)-127);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) (+((((+(var_8))) >> (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (signed char)126)))))))));
        }
        var_22 = ((/* implicit */unsigned char) (signed char)-36);
    }
    var_23 = (+(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) (signed char)77)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)100)) >= (((/* implicit */int) (signed char)125))))))));
}
