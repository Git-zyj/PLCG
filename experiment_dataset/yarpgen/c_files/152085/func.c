/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152085
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
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] &= ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) 1828180993869872142LL)))));
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned short)24117)))) : (((/* implicit */int) (unsigned char)255)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1 - 2]))));
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [2]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_19 [i_5] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)16));
            arr_20 [i_0] [i_0 + 4] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0 + 4]);
            arr_21 [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41418))) > (((unsigned long long int) (_Bool)1))));
            var_16 = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)41420)))));
            arr_22 [2U] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((2480263956U) <= (((/* implicit */unsigned int) 216301958))));
        }
        for (int i_6 = 2; i_6 < 22; i_6 += 4) 
        {
            var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1814703329U))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((arr_9 [i_0 + 4]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                arr_27 [i_6] [i_6 - 2] [22ULL] [(signed char)17] = ((/* implicit */short) arr_13 [i_7] [i_7] [(signed char)6] [i_0] [(signed char)6] [i_0 + 1]);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)24117))));
                            arr_32 [24LL] [i_6] [i_7] [i_6] [i_9] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_6 + 2] [i_0]))));
                            var_20 = ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_6 + 3] [i_6 + 1])) ? (((/* implicit */int) arr_5 [i_0 + 4] [i_6] [i_6 - 2])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_6] [i_6 + 1])));
                        }
                    } 
                } 
                var_21 |= ((/* implicit */unsigned short) (signed char)-69);
                var_22 -= ((/* implicit */long long int) ((((int) 1814703329U)) - ((+(((/* implicit */int) (unsigned short)24139))))));
            }
            arr_33 [i_0] [i_0] [i_0] = var_0;
        }
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24117))) : (var_9)));
            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-114))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    {
                        arr_41 [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(arr_4 [17U] [17U])))) / ((~(15311111718151976847ULL)))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) -1275705734))));
                    }
                } 
            } 
            arr_42 [i_10] [i_0] |= ((/* implicit */long long int) ((1814703340U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_0] [i_0] [i_10] [i_10]) != (((/* implicit */int) arr_5 [i_0] [i_10] [i_10]))))))));
        }
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_0 + 3] [i_0] [i_0 - 2] [i_0])) ? (arr_29 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 2]) : (arr_29 [i_0 - 2] [i_0] [i_0 + 2] [i_0])));
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((arr_4 [i_0 + 1] [i_0 + 3]) - (((/* implicit */int) (unsigned short)0)))))));
        arr_43 [17LL] [i_0] = ((/* implicit */unsigned char) ((arr_13 [i_0 + 3] [i_0] [i_0 + 4] [i_0] [i_0 + 1] [i_0]) % (((/* implicit */unsigned int) arr_17 [i_0 - 1]))));
    }
    var_28 = ((/* implicit */unsigned short) var_12);
}
