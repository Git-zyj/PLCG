/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16764
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */int) max(((-(var_7))), (((/* implicit */long long int) (-(arr_1 [i_0]))))));
                            var_11 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1490724493262301777ULL))));
                            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 + 1] [i_2 - 1] [i_1 - 1] [i_0] [i_3 - 2])) & (((/* implicit */int) arr_9 [i_0 + 3] [i_2 + 1] [i_1 + 3] [i_2 + 1] [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) (-(1635911222213726787LL)))) : (14352550240214511074ULL)));
                            var_13 = ((/* implicit */unsigned short) max((var_13), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)54660)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (signed char)-91)))))));
                            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) (+(var_8)))) ? (min((((/* implicit */long long int) 12)), (8575601213164781948LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17651))))), (((/* implicit */long long int) (unsigned short)10875))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    var_14 = arr_12 [i_0 - 1] [i_1 + 1] [i_1] [i_4];
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_1])), (((((/* implicit */_Bool) 1032910104)) ? (((/* implicit */int) (unsigned short)10875)) : (((/* implicit */int) (unsigned char)6))))))) ? (((((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0] [i_0] [i_0])) ? (9223372036854775807LL) : (arr_11 [i_0] [i_1 + 1] [i_1 + 1]))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0]))))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -1781784718)) : (4154157478044715319LL))))))))));
                    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_11 [i_1 + 2] [i_1] [i_4 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))))) & (((long long int) var_7))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_5)))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_8 [i_1] [i_4] [i_4] [i_4] [i_1]) : (arr_8 [i_4] [i_4 + 1] [i_4] [2ULL] [2ULL]))))))));
                }
                for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    arr_17 [i_5] [i_5] = min(((~((~(arr_0 [i_1]))))), (((/* implicit */long long int) ((short) ((unsigned long long int) (unsigned short)7)))));
                    arr_18 [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)2807)) : (((/* implicit */int) arr_15 [i_5] [i_0 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_6)))) ? (arr_1 [i_0 + 2]) : (arr_1 [i_5])))) : (arr_8 [i_0] [i_1] [i_5] [i_1] [i_5])));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_5]), (((((/* implicit */_Bool) (signed char)100)) ? (-9211673604459975687LL) : (((/* implicit */long long int) 1476941941))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_1 + 2] [8U] [i_5])) ? (arr_6 [i_0] [5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))))) - (min((((/* implicit */long long int) (unsigned short)10874)), (var_7)))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)137)), (3901977507U)))), ((-(16883356393511129033ULL)))))));
                }
                arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) 6559219622491070857LL);
                var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-2048)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_1])) - (56)))));
                arr_20 [i_0] [i_0 + 1] = ((/* implicit */short) min((min((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_0))), (var_0))), (((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1 - 3] [i_1]))))) / (((-5699033288127382651LL) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            {
                arr_26 [i_6] [i_7] [i_7] = ((/* implicit */short) max((((/* implicit */long long int) (unsigned char)118)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6]))) > (var_1))) ? (((long long int) var_2)) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)10441)), (4294967295U))))))));
                arr_27 [i_6] [i_7] = ((/* implicit */unsigned char) (~((~(var_1)))));
            }
        } 
    } 
}
