/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100523
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)28025)), (4629856242650662733LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_1] [i_2 + 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) : (arr_6 [i_0] [i_1] [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
                                var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17693160974399293658ULL)) ? (((/* implicit */long long int) -1918022179)) : ((-9223372036854775807LL - 1LL)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */long long int) var_16);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 4; i_5 < 23; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */int) min((((/* implicit */long long int) (((-(((/* implicit */int) (signed char)121)))) + (arr_21 [i_8] [i_7 - 1] [i_5 + 1])))), (((long long int) arr_22 [i_6] [i_7 + 1] [i_5 + 1] [i_6]))));
                        arr_25 [i_7] [i_7] [i_5] [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) arr_18 [i_7 - 1] [i_5]);
                        var_22 |= ((/* implicit */signed char) var_2);
                        var_23 -= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)48))));
                    }
                    arr_26 [i_5 - 3] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 2147483648U))))))));
                    var_24 = ((/* implicit */signed char) (+(-6876769960767170709LL)));
                }
                arr_27 [i_5] [i_5] = ((/* implicit */long long int) var_1);
                arr_28 [i_6] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_23 [(short)14] [i_6] [i_6]))), (max((((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_24 [i_5] [i_5 - 4] [i_5 - 4] [i_5] [i_5 - 4]))))), ((~(((/* implicit */int) var_16))))))));
                var_25 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) (short)-11575);
                            arr_33 [(unsigned short)19] [(unsigned short)19] [(unsigned char)9] [i_10] [i_10 - 1] = ((/* implicit */unsigned char) ((((((long long int) arr_22 [(short)16] [i_10 - 1] [i_10] [i_6])) + (9223372036854775807LL))) << ((((((-(((/* implicit */int) (short)24737)))) + (24747))) - (10)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 15; i_11 += 4) 
    {
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 15; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        {
                            arr_45 [i_14] [14ULL] [14ULL] [i_11] [i_11] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [i_12] [i_12] [i_12] [i_12])) != ((-(arr_29 [i_12] [i_12] [i_13 + 1] [i_13 + 1]))))))));
                            arr_46 [i_11] [i_12] [i_13] [0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_34 [i_11 - 3])))))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */long long int) (signed char)-49);
                var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_12] [i_11 + 1] [i_11 + 1])) > (((/* implicit */int) var_16)))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_11] [i_11 + 1] [i_11 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)1] [i_11 + 1] [(signed char)8])))))));
            }
        } 
    } 
}
