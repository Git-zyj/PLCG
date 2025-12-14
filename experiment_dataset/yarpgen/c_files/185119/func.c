/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185119
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
    var_18 -= ((/* implicit */unsigned char) var_13);
    var_19 &= ((/* implicit */unsigned int) ((((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) var_2)))))) != (min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) var_13)))))))));
    var_20 = ((/* implicit */unsigned long long int) ((0U) % (945351654U)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_1] [i_4] [i_3] [i_2] [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((max((var_14), ((-2147483647 - 1)))), (((((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0])) >> (((7086980862441466051ULL) - (7086980862441466040ULL)))))))), (((((/* implicit */_Bool) 861337470)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2]))) % (arr_6 [i_1] [11U] [i_4]))) : (((/* implicit */unsigned int) ((arr_12 [i_0] [i_0 - 2] [i_0] [i_0 + 3] [i_0] [i_0 - 1]) ? (((/* implicit */int) arr_11 [i_0] [i_4] [i_3] [i_2 + 2] [i_1] [i_0])) : (-426550751))))))));
                                var_21 &= ((/* implicit */int) ((((arr_7 [(short)10] [i_2 - 2] [(short)10]) < (((/* implicit */int) (unsigned char)0)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((long long int) -4441718474164561607LL))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)47241), (((/* implicit */unsigned short) arr_1 [i_0 + 2] [i_0])))))))) % (((/* implicit */long long int) var_15))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_22 [i_6] [i_0] [i_0] [8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)26))));
                            var_22 = ((/* implicit */_Bool) min((var_22), ((((-(((int) var_3)))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_0])) ? (var_10) : (((/* implicit */long long int) var_15))))) ? (((/* implicit */int) min((arr_20 [i_6]), (((/* implicit */unsigned short) var_3))))) : (max((((/* implicit */int) var_5)), (824362418)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18288)) ? (((/* implicit */int) (unsigned short)21240)) : (((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_9] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_24 [i_0] [i_0 - 2] [i_0 - 2] [0LL]), (arr_24 [i_0 + 2] [i_0 - 2] [i_1] [i_9]))))) : (((unsigned int) arr_24 [i_0 - 3] [i_0 - 2] [i_9] [i_9]))));
                                var_23 = ((/* implicit */int) ((unsigned long long int) (unsigned char)246));
                                arr_31 [i_0] = ((/* implicit */long long int) (+(((int) ((3751633845U) - (((/* implicit */unsigned int) arr_29 [i_0 - 2] [i_1] [i_8] [i_9])))))));
                            }
                        } 
                    } 
                } 
                arr_32 [i_0] [i_1] = ((/* implicit */short) (+(9223372036854775807LL)));
            }
        } 
    } 
}
