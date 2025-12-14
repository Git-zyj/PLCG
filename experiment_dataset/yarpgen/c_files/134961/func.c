/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134961
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) % (((((/* implicit */_Bool) (~(var_4)))) ? ((-(((/* implicit */int) (unsigned char)244)))) : (var_4)))));
    var_16 ^= ((/* implicit */signed char) ((int) 25));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) >> (((((/* implicit */int) (unsigned char)164)) - (145)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)4095)) * ((-((-(((/* implicit */int) arr_5 [0] [3LL] [0LL] [i_3]))))))));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17179869183LL)) ? (((/* implicit */int) (unsigned short)32462)) : (656380383)));
                    }
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) 17179869178LL)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-121)) && (((/* implicit */_Bool) arr_3 [(unsigned short)5] [2LL]))))))))));
                    arr_9 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-123))));
                }
                for (unsigned short i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)43)))), (((/* implicit */int) (signed char)108))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) -1632042786)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-116)))) - (((((/* implicit */_Bool) ((var_4) / (var_10)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)3683)))))))))));
                    var_23 = max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (max((var_2), (((/* implicit */long long int) (signed char)-28))))))), ((signed char)67));
                    var_24 ^= (signed char)-65;
                }
                var_25 += ((/* implicit */signed char) ((int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)254)) >= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_12))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_15 [i_5] = ((/* implicit */long long int) (-(min((((/* implicit */int) var_13)), (max((994798849), (((/* implicit */int) var_11))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    arr_21 [i_5] [i_6] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50812))) == (arr_19 [i_5]))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -433213428094474528LL)) ? (arr_18 [i_5] [i_6] [i_6] [i_7]) : (((/* implicit */long long int) 441868511)))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), (arr_14 [i_5])))), (min((((/* implicit */long long int) var_0)), (arr_17 [(unsigned char)8]))))) : (2105857199069690350LL)));
                    arr_22 [i_5] = ((/* implicit */signed char) ((-7129542401059859684LL) == ((-(arr_18 [(signed char)6] [(signed char)6] [i_6] [5])))));
                    var_27 = ((/* implicit */unsigned char) var_9);
                    arr_23 [i_5] [i_5] [i_7] = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    }
    var_28 += (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-34)) || (((/* implicit */_Bool) (signed char)-49)))) && ((!(((/* implicit */_Bool) var_7))))))));
}
