/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126042
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
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_4))))), ((~(((/* implicit */int) var_3)))))))));
    var_17 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)1822))))), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) <= (var_1))))));
    var_18 = ((/* implicit */unsigned char) (short)-29503);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)6] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 3])))))));
        arr_2 [i_0] = ((/* implicit */signed char) (~(var_11)));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) min((5530717526897291307ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : (((long long int) (_Bool)1))))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((arr_0 [i_2]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_8))))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) 0ULL)))))) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_1]))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) var_4);
                    var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((var_1) - (995264858U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)36079), (arr_7 [(short)12] [i_1] [(short)12]))))) : (max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_5 [i_0] [i_0] [i_1] [8LL])))))) < (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_5 [(signed char)14] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60107))) : (var_14))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */short) min((((/* implicit */long long int) max((arr_12 [i_3]), (((/* implicit */short) arr_1 [i_3] [i_3]))))), (((((/* implicit */long long int) max((arr_5 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) arr_7 [(unsigned short)0] [(unsigned short)21] [i_3]))))) | (((var_9) >> (((4294967276U) - (4294967244U)))))))));
        var_23 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_3]))));
        var_24 ^= ((/* implicit */unsigned char) arr_0 [i_3]);
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
            {
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) ((unsigned short) arr_15 [15U] [i_3]));
                        var_25 = ((/* implicit */short) ((6395524146597382745ULL) >> (((/* implicit */int) (_Bool)1))));
                        arr_25 [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) + (arr_21 [i_3] [i_4] [i_5 + 1])));
                        var_26 = ((((/* implicit */_Bool) ((unsigned int) ((int) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((arr_22 [i_6] [(_Bool)1] [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_5 + 3]))))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_3]))))))));
                    }
                } 
            } 
        } 
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) var_0);
    }
}
