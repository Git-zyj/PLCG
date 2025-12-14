/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125780
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((18014398509481983LL) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65535)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_18 &= ((/* implicit */unsigned char) (-(-18014398509481978LL)));
                            var_19 = (~(arr_1 [i_0]));
                        }
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (unsigned char)71))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3])) >> (((((/* implicit */int) arr_12 [i_3] [i_1] [i_2] [i_1] [i_1])) + (224))))))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((-18014398509481984LL) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3]))))))));
                            var_23 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_9)) - (9151))))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 144115188075855871ULL)) ? (((/* implicit */int) (!(var_10)))) : (arr_3 [i_2])));
                        var_25 = ((/* implicit */unsigned char) arr_19 [i_2]);
                        var_26 &= ((/* implicit */signed char) 18014398509481993LL);
                        arr_20 [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) (((+(-7826648814461523126LL))) + (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [4LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-18014398509481999LL)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_24 [i_2] [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_12))))));
                        arr_25 [i_7] [i_7] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */int) (short)28694);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_3))));
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)111))));
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [(unsigned char)9] [i_2] [(unsigned char)18])) < (((/* implicit */int) arr_26 [i_2]))));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((short) arr_1 [i_0])))));
                        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_2] [i_2] [i_1] [i_0] [i_0] [i_2])) ^ (var_11))))));
                    }
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -894080329899207026LL)) ? (arr_14 [i_2] [i_2] [i_2] [i_2] [i_1] [i_2] [i_1]) : (arr_14 [i_0] [i_2] [(_Bool)1] [i_0] [i_1] [i_1] [i_0])));
                    arr_30 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
        arr_31 [i_0] [i_0] = ((/* implicit */short) ((int) ((signed char) (short)11811)));
    }
    var_33 = ((/* implicit */short) var_4);
}
