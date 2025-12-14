/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130216
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [7] [7] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [(_Bool)1] [i_2] [i_2]))));
                            var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) != (((/* implicit */int) (unsigned char)1))))))) : (((((/* implicit */_Bool) arr_10 [8] [i_3] [8] [(unsigned short)10] [i_0] [i_1 - 1])) ? ((~(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) arr_9 [i_1 - 1]))))));
                            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) arr_0 [i_1] [(unsigned short)18]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (signed char i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        {
                            arr_16 [i_0] [(short)17] [i_0] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) -320415001)) && (((/* implicit */_Bool) arr_2 [i_1 + 1] [(short)2] [i_1 + 1]))))))) | ((~(((/* implicit */int) (_Bool)1))))));
                            var_12 = ((/* implicit */unsigned long long int) ((signed char) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_5 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        for (unsigned char i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1920))) : (var_5))) : (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))))) % (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2))))))));
                    var_14 = ((/* implicit */unsigned char) arr_12 [i_6] [i_6] [i_8]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((min((((/* implicit */long long int) arr_26 [i_9])), (arr_25 [i_9] [i_9]))) > (((((/* implicit */_Bool) arr_29 [i_10] [i_9])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_10]))))))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_13 [i_9] [i_9] [i_10])))) | (((((/* implicit */_Bool) arr_2 [i_10] [i_10] [i_9])) ? (arr_2 [(short)20] [i_9] [i_10]) : (arr_2 [i_9] [i_10] [i_10])))));
                /* LoopNest 3 */
                for (unsigned int i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                arr_40 [i_9] [i_11] [i_10] [i_11 + 1] [i_12] [i_9] [i_13] = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)0)))) / (((/* implicit */int) ((short) (unsigned char)254)))));
                                arr_41 [i_12] [i_13] |= ((/* implicit */int) ((((((/* implicit */int) min((((/* implicit */short) (signed char)127)), (arr_21 [i_9] [i_10] [i_10])))) <= (var_7))) ? (min((((/* implicit */long long int) var_9)), (arr_8 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                                arr_42 [i_11] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_11] [i_11]))))) && (((/* implicit */_Bool) arr_8 [i_9] [i_11 - 1] [13U] [13U] [i_12] [i_12]))))), (min((((((/* implicit */int) var_9)) + (((/* implicit */int) var_4)))), (((/* implicit */int) ((-1674266532) == (((/* implicit */int) (short)24469)))))))));
                                arr_43 [i_9] [i_10] [i_10] [i_12] [i_11] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)84)) << (((((/* implicit */int) arr_4 [(unsigned short)4] [i_10] [(unsigned short)4])) + (10074))))) | (((/* implicit */int) ((arr_19 [i_10] [i_12]) >= (((/* implicit */int) (unsigned short)62128))))))) & (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20741))) >= (1375184224164166307ULL)))) << ((((~(((/* implicit */int) arr_26 [i_10])))) + (61)))))));
                                var_17 = ((/* implicit */long long int) arr_6 [i_9]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 1; i_14 < 8; i_14 += 1) 
                {
                    for (int i_15 = 1; i_15 < 7; i_15 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 21))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (unsigned short)3408))));
                            var_20 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_15 [i_9] [i_10] [i_15] [i_10] [(signed char)0] [i_15])), (arr_34 [i_9] [i_10])))))));
                            arr_49 [i_15] [i_15] [i_14] [i_15] = ((/* implicit */unsigned char) (!(((4294967295U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_9] [i_15])) ? (((/* implicit */int) arr_22 [i_9] [i_9])) : (((/* implicit */int) (short)-1)))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | ((~(((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((var_6) ? (((/* implicit */int) var_9)) : (max((1022), (((/* implicit */int) (unsigned char)8)))))) > ((~(((((/* implicit */int) var_6)) % (-1674266532)))))));
}
