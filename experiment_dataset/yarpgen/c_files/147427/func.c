/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147427
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
    var_19 = ((/* implicit */unsigned short) min((var_6), (var_2)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (((~(var_15))) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_2 [i_0] [i_1]) < (-4737044066867414256LL)))), (((unsigned int) var_14)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (unsigned char)0);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) max((var_12), (((/* implicit */unsigned long long int) 4737044066867414256LL)))))) == (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)255))))))))));
                                var_23 *= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >= (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1] [i_2] [7ULL] [i_4] [7ULL])))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (min((((/* implicit */long long int) var_4)), (4737044066867414255LL))) : (((/* implicit */long long int) (~(4263447075U))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1]))))) + (((int) arr_6 [i_0] [i_0])));
                arr_11 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)10)) ? (-4737044066867414245LL) : (-4737044066867414259LL))), (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)13)) >> (((-4737044066867414256LL) + (4737044066867414260LL))))))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) arr_14 [i_0] [i_1] [(short)8] [i_7])), (-1LL)))))), ((+(arr_7 [i_7] [i_5] [(_Bool)1] [i_0])))));
                                var_26 = ((/* implicit */_Bool) max((min((((int) (unsigned char)167)), (((((/* implicit */int) (unsigned short)4032)) >> (((((/* implicit */int) arr_8 [i_0] [i_6])) - (15590))))))), (((((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) arr_0 [i_0] [i_1]))))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (190)))))));
                                arr_19 [i_5] [i_6] [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_4))) == (4340966372583495516LL)))))), ((-(var_3)))));
                                var_27 &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [0LL] [i_5]))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_10 [i_0] [(unsigned char)3] [i_0] [i_6] [i_7])))) : (((/* implicit */int) ((signed char) var_11)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
