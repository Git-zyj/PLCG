/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161551
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_20 = ((/* implicit */long long int) min(((((+(arr_5 [i_0]))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32752))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (763455941U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [(short)0])), (12542465407897323463ULL))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((int) ((unsigned short) arr_1 [i_1 + 3]))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_11))));
                }
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    arr_8 [i_3] [(unsigned short)13] [(_Bool)1] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_3 [i_1 + 3])))) << (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 2])) > (((/* implicit */int) arr_3 [i_1 + 3])))))));
                    var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(223142282050805918LL)))))) ? (min((((((/* implicit */_Bool) arr_7 [i_0])) ? (3513873487U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)9])) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_2 [i_3] [i_1 + 3] [i_0]) : (arr_2 [i_0] [i_0] [i_3]))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_1] [i_1 - 3]))) >> ((((-(((/* implicit */int) var_17)))) + (55611)))));
                }
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    arr_11 [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_18)))) < (((((/* implicit */_Bool) arr_9 [i_4] [i_1] [i_1 + 3] [i_4])) ? (((/* implicit */long long int) arr_2 [i_1 - 3] [i_0] [i_0])) : (-3236695191361406376LL)))));
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((((_Bool)1) || ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32784)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((min((arr_13 [i_1 + 1]), (arr_13 [i_1 + 1]))) * (arr_13 [i_1 - 3])));
                        var_28 = 125829120;
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) var_13);
                        arr_17 [i_4] [i_4] [(_Bool)1] [i_4] = ((((/* implicit */int) (signed char)-79)) > (((/* implicit */int) arr_14 [i_4] [(_Bool)1] [i_1] [i_6] [i_6] [i_6])));
                        arr_18 [i_4] [i_1] = ((unsigned int) var_11);
                        var_30 *= ((/* implicit */unsigned long long int) ((arr_16 [i_1 + 3] [i_0]) - (arr_16 [i_1 + 1] [i_0])));
                        arr_19 [i_4] [i_0] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)448))));
                    }
                }
                arr_20 [i_0] [(unsigned char)11] = ((/* implicit */signed char) (~(min((min((((/* implicit */unsigned long long int) var_2)), (5904278665812228167ULL))), (((/* implicit */unsigned long long int) var_1))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_29 [i_7] [i_7] = ((/* implicit */signed char) ((unsigned long long int) min(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (2923462801U)))))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (unsigned char)254))));
                }
            } 
        } 
    } 
    var_32 *= ((/* implicit */_Bool) var_0);
    var_33 = ((/* implicit */unsigned short) ((int) min((((unsigned long long int) 1317928901)), (((/* implicit */unsigned long long int) var_0)))));
}
