/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168890
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
    var_12 += ((/* implicit */signed char) (+(((((/* implicit */int) var_9)) | (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_2 [(unsigned short)11] [i_1] [i_1])))) && (((/* implicit */_Bool) var_11))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [16] [i_3 - 1] [i_0]), (arr_9 [i_3 - 1] [i_3 - 1] [i_4] [i_4] [i_4] [i_4]))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)254))))))))) % (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (15083621032502610340ULL)))));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_1] = ((((/* implicit */_Bool) -675012153)) || (((/* implicit */_Bool) (unsigned char)243)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_8 [i_2] [(_Bool)1] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(9769283800044071967ULL)))))) : (((((/* implicit */_Bool) (~(var_6)))) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))));
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1])), (((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >> ((((~(((/* implicit */int) (unsigned char)2)))) + (23)))))));
                }
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11))), (((/* implicit */unsigned long long int) arr_4 [i_1])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            {
                arr_20 [i_6] = ((/* implicit */unsigned short) (-(max((max((((/* implicit */unsigned long long int) arr_16 [i_6])), (arr_17 [i_6]))), (((var_5) ? (arr_17 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))))));
                arr_21 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) & ((~(((/* implicit */int) var_10))))))) ? ((~(((/* implicit */int) arr_19 [i_5] [i_6])))) : (((/* implicit */int) arr_16 [i_5])));
                var_19 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                var_20 = ((/* implicit */long long int) var_8);
                var_21 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_0)))) == (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
