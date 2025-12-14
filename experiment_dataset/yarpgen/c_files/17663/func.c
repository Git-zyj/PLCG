/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17663
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) (~(max((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_6 [i_2])))), (((/* implicit */unsigned long long int) min((arr_6 [i_2]), (((/* implicit */unsigned int) (signed char)-105)))))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1086389141689766643LL)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) -620137384)) ? (((/* implicit */unsigned int) var_3)) : (262143U)))))) : (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_11))))));
                        var_15 -= ((((_Bool) arr_1 [i_1 + 1])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30563))) | (13761857940016636602ULL)))));
                        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_2]))), (((arr_7 [i_2]) ? (var_10) : (((/* implicit */unsigned long long int) var_8))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_12 [(unsigned char)15] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2]))))));
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2])) ? (((/* implicit */int) arr_14 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_1)))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)2)) ? (7343493799777596007LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11718)))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) (unsigned short)58115);
                        var_21 = ((/* implicit */unsigned long long int) ((var_8) + (arr_12 [i_2] [i_2] [0] [i_0] [i_2])));
                    }
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */long long int) min(((~(-1412959425))), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 1882750664U))) && (((/* implicit */_Bool) arr_11 [i_0] [22LL] [22] [4] [i_6])))))));
                        var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)58)) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
                        var_24 |= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)102))))), (var_8))), ((~((~(arr_4 [i_0])))))));
                    }
                    for (signed char i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
                    {
                        arr_23 [i_2] [i_1] [5] [i_7] = ((/* implicit */short) ((((-131072) != (((/* implicit */int) (!((_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((-419344265) / (-1309741197)))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((var_2) - ((-9223372036854775807LL - 1LL))))))) ? ((~((+(arr_12 [(_Bool)1] [i_1 - 2] [(unsigned short)19] [i_1] [i_2]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5814)))))));
                        var_26 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_8 [i_1 - 2])))) / (min((((/* implicit */int) (unsigned short)10)), (-968194895)))));
                    }
                }
            } 
        } 
        arr_24 [i_0] [(unsigned char)3] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((int) var_2))))), (121236649U)));
        var_27 = ((/* implicit */signed char) -887789691);
        arr_25 [(unsigned char)16] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (_Bool)1))))) && ((((_Bool)0) && (((/* implicit */_Bool) 2610624707U)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0])))))))));
    }
    var_28 = ((/* implicit */unsigned short) (~(682663637)));
    var_29 = ((/* implicit */_Bool) (+(var_11)));
}
