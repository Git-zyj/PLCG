/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126478
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((unsigned short) ((short) (signed char)-1)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)35715)) : (((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    arr_8 [(unsigned short)10] [(short)16] [2U] |= ((((/* implicit */_Bool) (-(-2074940432)))) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned short)45163))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_1]))) != (arr_3 [0U] [i_1]))))) : (((((/* implicit */_Bool) var_4)) ? (-4312940593362275696LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8191)) || (((/* implicit */_Bool) max((var_13), (6145173884064403750LL)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_2] [i_0] [i_2] [i_0] [i_0] [18U] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((long long int) 6145173884064403750LL))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)15126)) != (((/* implicit */int) (unsigned short)65504))))) : (((/* implicit */int) (unsigned short)31)))));
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_0])))), ((~(((/* implicit */int) var_9))))))) ? ((+(((((/* implicit */_Bool) (signed char)-100)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_3] [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4])))));
                                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_12))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (-6780875377070613232LL) : (5877592888728969539LL))))))) : (max(((~(((/* implicit */int) (signed char)-6)))), ((~(((/* implicit */int) (signed char)89))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)166)) == (((/* implicit */int) var_5)))) ? (((/* implicit */int) (unsigned short)33066)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_5 - 2]))))) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_5 + 1] [i_0] [i_5 + 2])) ? (((((/* implicit */_Bool) -2147483637)) ? (5138671283882130384LL) : (5138671283882130382LL))) : ((~(arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7844))) : (7678406148221922056LL)))) ? ((-(arr_3 [i_0] [i_1]))) : (max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0])), (-4916255086867811414LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (-(arr_3 [i_1] [i_1]))))));
                                var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_7 - 1] [i_5 + 1] [i_6 + 2] [1LL] [i_7] [i_5]))))) ? ((~(0LL))) : (((long long int) arr_17 [i_7 + 1] [i_7 - 1] [(signed char)6] [i_7 - 1]))));
                                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_24 [i_1] [i_5 - 2] [i_6] [i_6 - 1] [i_7 + 1])) == (((/* implicit */int) arr_5 [i_1] [i_5 + 1] [i_5] [i_6 + 1])))))));
                                var_25 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_15 [i_0] [i_1] [(unsigned short)20] [i_6]))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_7] [15LL] [i_1] [i_0])), (arr_10 [12U] [i_7])))))))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_7 - 1])) ? (((/* implicit */int) arr_6 [i_5 + 1] [i_5 - 2] [i_5 + 2])) : (((/* implicit */int) (unsigned char)17))))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5 - 1] [i_5 + 1] [i_5 + 2]))) : (arr_10 [i_0] [i_7 + 1]))) : (arr_10 [i_0] [i_7 + 1])));
                            }
                        } 
                    } 
                }
                arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -4312940593362275691LL)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -7678406148221922056LL)) ? (var_7) : (2440018351U))))) : (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [16U] [i_0] [i_1]))) == (7678406148221922048LL))) || (((/* implicit */_Bool) max((arr_14 [i_0] [(unsigned short)1]), (4373240005654022313LL)))))))));
                var_27 += ((/* implicit */long long int) (~((-((-(((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
}
