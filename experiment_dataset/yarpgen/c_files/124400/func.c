/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124400
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [(short)9] = ((/* implicit */short) arr_0 [i_0]);
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((arr_0 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        var_17 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-47))))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32256))) : (17546997678658631889ULL)))));
        var_18 = ((/* implicit */short) 17546997678658631913ULL);
        var_19 = ((/* implicit */unsigned char) (signed char)-23);
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (int i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) 17546997678658631913ULL)))));
                                arr_16 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_5] [i_1 - 2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)7168)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7169))) : (10793108000242723332ULL))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_3] [i_2 - 1] [i_4] [i_4] [i_3] [i_5])))))));
                                var_21 = ((/* implicit */unsigned short) max((524280ULL), (((/* implicit */unsigned long long int) (short)14646))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (+(((arr_4 [i_1 - 1] [i_2 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 4; i_6 < 11; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_23 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_14 [i_7] [i_6 - 3] [i_1 - 1] [i_7] [i_1 + 1] [(short)8])) >> (((var_3) + (1391011501)))))));
                    var_24 = ((/* implicit */signed char) (((-(1788055441U))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-46)))))));
                    arr_24 [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) var_10)), (arr_10 [i_1 - 1]))), (arr_10 [i_1 + 1])));
                }
            } 
        } 
        arr_25 [i_1 - 1] = arr_23 [i_1] [i_1 - 1];
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_8))))) ? ((~(((((/* implicit */int) (short)7168)) | (((/* implicit */int) (signed char)6)))))) : (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (unsigned short i_8 = 2; i_8 < 18; i_8 += 3) 
    {
        for (short i_9 = 3; i_9 < 21; i_9 += 2) 
        {
            for (signed char i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 899746395050919702ULL)))));
                    var_27 = ((/* implicit */signed char) max((-6999519469124834368LL), (-6999519469124834368LL)));
                    var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned short) (signed char)-16))))) & (min((((/* implicit */unsigned int) (unsigned char)19)), (0U)))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 20; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 3) 
                        {
                            {
                                arr_36 [i_9 + 1] [i_9 + 1] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-75))));
                                var_29 ^= ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_34 [(signed char)2] [i_11 - 2] [i_10] [i_9 - 1] [i_8])))), (((((/* implicit */int) arr_34 [i_10] [i_10] [i_10 - 1] [i_11 - 2] [i_11 - 1])) & (((/* implicit */int) arr_34 [i_8] [i_9 - 2] [i_10] [i_11 - 2] [i_12]))))));
                                var_30 *= ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)0)), ((short)-7169)));
                                var_31 = ((/* implicit */signed char) (~(max((-5310466005514445548LL), (((/* implicit */long long int) (unsigned char)48))))));
                                var_32 *= ((/* implicit */unsigned short) min((max((((/* implicit */int) var_13)), ((~(((/* implicit */int) arr_35 [i_8] [i_8] [i_8 + 4] [i_8 + 4] [i_8 + 2] [i_8])))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-1646340542))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) var_15)), (var_9))))));
}
