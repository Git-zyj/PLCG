/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172734
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)24461))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) 15143822903504547394ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)236))))) + (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (var_4)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned short) var_9);
                                arr_13 [i_4] [i_4] [i_3] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_7 [i_0] [(_Bool)1] [i_2])))) & (((long long int) arr_9 [i_0] [i_0] [i_0]))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_7)) ? (1073205130U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-24461))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                                arr_15 [i_4] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) 1608721073U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_2))));
                                arr_16 [i_4] [i_4] [i_2] [5U] [(signed char)7] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 2] [i_2 - 1])) ? (((/* implicit */unsigned int) -889369625)) : (var_2)));
                            }
                            arr_17 [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_0))) ? (((/* implicit */int) ((short) arr_11 [2] [(unsigned char)5] [i_1] [i_1] [2LL] [i_2] [i_1]))) : (((/* implicit */int) arr_8 [7U]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 1]))) : (-6024357306655267554LL)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [(unsigned char)1] [7ULL] [i_7] [i_7] = ((/* implicit */signed char) (((~(((/* implicit */int) var_6)))) % (((/* implicit */int) ((_Bool) arr_0 [i_1 - 1])))));
                                var_15 = ((((/* implicit */int) arr_2 [i_5])) > (((((/* implicit */_Bool) (-(816958864)))) ? (((/* implicit */int) ((signed char) 18446744073709551611ULL))) : ((~(((/* implicit */int) (unsigned char)249)))))));
                                var_16 = (-(((((/* implicit */_Bool) (unsigned short)24958)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) 17670913983173627552ULL)))));
                                arr_28 [i_0] [i_7] [11LL] [i_6] [i_7] = ((/* implicit */unsigned char) (-(((unsigned long long int) var_1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
