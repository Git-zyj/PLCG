/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134116
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
    var_16 |= ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)3)), (var_11))))))) / (((/* implicit */int) var_10))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) -417241884)), (arr_2 [i_0]))) + (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_7)))))))));
                                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) | ((-(min((arr_0 [i_0]), (((/* implicit */unsigned int) var_6))))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)28)) / (((((/* implicit */int) max(((unsigned char)253), ((unsigned char)3)))) ^ (((/* implicit */int) (unsigned short)38606)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)142)) ? (5730024451540744350LL) : (446939235904499644LL)));
                            /* LoopSeq 1 */
                            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                arr_26 [i_0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) arr_8 [i_0] [i_5 - 1] [i_6]);
                                var_20 = ((/* implicit */long long int) arr_6 [i_0] [i_6] [i_5 - 1] [i_0]);
                                arr_27 [i_0] [i_0] [i_0] [i_5] [i_6] [i_6] = ((/* implicit */long long int) var_0);
                            }
                            arr_28 [(short)4] [i_1 + 2] [(short)4] [i_0] = max((((/* implicit */long long int) (_Bool)0)), (8761733283840LL));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))) > (((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) arr_19 [i_1])) - (18505)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((unsigned long long int) max((((/* implicit */long long int) (short)23752)), (-7332632066996976512LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned char)181), ((unsigned char)226)))))))));
}
