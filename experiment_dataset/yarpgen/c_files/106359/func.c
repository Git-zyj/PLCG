/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106359
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
    var_12 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */int) ((((/* implicit */unsigned int) arr_4 [i_2] [i_2])) >= (arr_2 [i_2] [i_1] [i_0])))) != (((((/* implicit */_Bool) arr_1 [4])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) ((((/* implicit */_Bool) 6996144224725587968LL)) || (((/* implicit */_Bool) (signed char)62)))))))))));
                    var_14 = ((/* implicit */unsigned char) var_10);
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (3719915745211845930LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
                    var_16 = ((/* implicit */short) arr_4 [(unsigned short)2] [i_1]);
                    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3767)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)40))) : (-3719915745211845907LL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((signed char) (~(arr_9 [i_4] [i_3])))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_8 [i_3]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3719915745211845906LL)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (unsigned char)104)))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)22982))))), (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [12ULL])) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) 873143862U))))))) ? (((arr_17 [i_3] [i_3] [i_3] [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-27))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4] [i_4])) != (((/* implicit */int) arr_10 [i_3] [(_Bool)1])))))));
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_15 [i_5]) : (arr_17 [i_8] [i_6] [i_4] [i_3])));
                                var_26 = ((/* implicit */unsigned char) ((unsigned short) arr_19 [i_5] [8ULL] [i_5] [i_4] [i_5]));
                            }
                            /* vectorizable */
                            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
                            {
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_3] [i_3] [i_4] [i_5] [i_6] [i_9] [i_9])) > (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
                                var_28 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)22982));
                                var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1397110859U))))) << (((2329805613U) - (2329805610U)))));
                            }
                            var_30 = ((/* implicit */_Bool) var_0);
                            var_31 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [7] [i_3] [7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3]))) : (arr_8 [i_5]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_5] [i_5] [i_4] [i_4] [i_3]))) + (arr_8 [i_3]))) : (((/* implicit */unsigned long long int) ((unsigned int) -3719915745211845930LL)))));
                            var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_6] [i_5] [i_4] [i_4] [i_3]))))) >= (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_5] [i_6] [(short)0])) ? (arr_18 [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_18 [i_6] [i_5] [i_5] [i_4] [i_3])))));
                            var_33 ^= ((/* implicit */_Bool) arr_24 [i_6] [i_5] [i_5] [i_5] [(unsigned short)12] [i_4] [i_3]);
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) max((var_34), ((!(((/* implicit */_Bool) ((short) (unsigned short)57471)))))));
            }
        } 
    } 
}
