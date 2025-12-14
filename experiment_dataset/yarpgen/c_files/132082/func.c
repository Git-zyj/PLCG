/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132082
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((unsigned char) ((_Bool) arr_10 [18] [i_1] [i_2] [(_Bool)1] [i_4] [i_2])));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min(((unsigned char)136), ((unsigned char)198))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_3] [i_4])) && (((/* implicit */_Bool) (unsigned char)198)))))))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)18)))) : (((/* implicit */int) (unsigned char)219))));
                                var_21 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]))))));
                                var_22 = (((+((~(arr_5 [i_1] [i_1] [i_1] [(short)10]))))) <= (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_4]), (arr_8 [i_0]))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-35)) != (((/* implicit */int) var_16)))))) ^ (min((((/* implicit */long long int) arr_8 [i_2])), (arr_3 [i_0]))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_0] [5] [i_2] [i_1] [i_1] [(signed char)8])) : (((/* implicit */int) (unsigned char)219))))), (((((/* implicit */_Bool) arr_9 [(unsigned char)10] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))) : (var_5)))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) arr_2 [i_0] [i_0]))));
                    var_26 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(short)9] [i_1]))))) ? (arr_9 [i_2] [i_1] [i_1] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [(_Bool)1] [i_2])) ? (var_13) : (((/* implicit */long long int) var_12)))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((arr_3 [i_0]), ((-(min((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_0] [7LL] [i_0])), (var_3))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 ^= ((/* implicit */signed char) var_4);
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (var_7) : (((/* implicit */int) arr_1 [i_5] [(_Bool)1]))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */_Bool) -7390611478050413383LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))));
                        var_30 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_5]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_31 = var_3;
                        var_32 -= ((/* implicit */unsigned long long int) ((((unsigned int) (_Bool)0)) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)77)))))));
                    }
                    var_33 = ((/* implicit */_Bool) arr_5 [i_6] [i_6] [i_5] [i_5]);
                }
                var_34 = ((/* implicit */long long int) min((((((/* implicit */int) arr_21 [12ULL] [i_6] [(_Bool)1] [i_6] [i_6] [i_6])) | (((/* implicit */int) arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))), (((/* implicit */int) ((_Bool) arr_14 [i_5] [i_5])))));
            }
        } 
    } 
}
