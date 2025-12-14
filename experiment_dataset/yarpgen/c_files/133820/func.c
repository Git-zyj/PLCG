/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133820
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)202));
                                var_15 += ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                                var_16 = arr_10 [(unsigned char)10] [i_1] [(unsigned char)4] [i_3] [(unsigned char)10];
                                arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)91))) < (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [(unsigned short)12])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)192))))));
                                var_17 ^= ((/* implicit */long long int) (unsigned char)54);
                            }
                            /* LoopSeq 2 */
                            for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                            {
                                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_2 [(unsigned short)11])))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) arr_11 [i_2] [i_2] [i_5 - 2] [i_5] [i_5] [i_5] [i_5]))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18))))) ? (((/* implicit */int) (unsigned char)32)) : (((((/* implicit */_Bool) ((unsigned char) (unsigned char)175))) ? (((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_3] [i_0])), (var_10)))))))))));
                            }
                            for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
                            {
                                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_4))));
                                var_20 |= ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_6 [i_0] [i_6 - 2] [i_2] [i_3] [i_6])))), ((+(((/* implicit */int) arr_6 [i_0] [i_6 - 2] [i_2] [i_2] [i_6]))))));
                                var_21 ^= ((unsigned char) (unsigned short)1207);
                                var_22 = ((/* implicit */unsigned char) (-(((unsigned long long int) var_0))));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [(unsigned short)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (1899009025413913701ULL))), (var_7)))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [10LL] [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) (~(arr_7 [i_0] [i_0] [i_0] [i_1] [i_1]))))) : (((/* implicit */int) ((unsigned char) (unsigned char)23))))))));
            }
        } 
    } 
    var_25 ^= var_1;
}
