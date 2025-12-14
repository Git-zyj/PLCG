/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139894
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_0))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_1))) : (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 12984052592340810735ULL))));
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0] [i_1] [i_2]) < (((/* implicit */unsigned long long int) var_10))))) | (((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))))), (((((/* implicit */_Bool) max((5462691481368740881ULL), (((/* implicit */unsigned long long int) (unsigned short)45015))))) ? (((/* implicit */long long int) 2009298699)) : (-1686952003675174096LL)))));
                    var_15 &= ((/* implicit */unsigned short) ((unsigned int) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))) : (12984052592340810721ULL))), (((/* implicit */unsigned long long int) var_5)))));
                    arr_7 [i_1] [(short)8] [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))));
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    var_16 -= ((/* implicit */unsigned short) arr_1 [1]);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 16082441714439336642ULL)) ? (8701467089570044628LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)27))))), (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))))));
                    arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (-(min((arr_10 [i_1] [i_1] [i_3]), (((/* implicit */int) arr_4 [i_0] [0U] [i_3] [i_1]))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    arr_15 [i_0] [i_1] [i_1] [(short)4] = ((arr_3 [i_0] [i_4]) ? (arr_9 [i_0] [i_1] [i_0] [i_4]) : (((/* implicit */unsigned long long int) arr_10 [i_1] [i_4] [8ULL])));
                    var_18 = ((/* implicit */int) min((var_18), ((+(arr_10 [i_0] [i_1] [i_0])))));
                    arr_16 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12984052592340810726ULL)) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1])) : (var_9)))) ? (((/* implicit */int) ((12984052592340810754ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2490)) || (((/* implicit */_Bool) 402095361))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_20 = ((/* implicit */unsigned short) 2009298692);
                            var_21 = ((/* implicit */long long int) ((short) var_3));
                        }
                    } 
                } 
                arr_21 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */int) min((arr_8 [i_0] [i_1] [i_0] [i_1]), (arr_8 [8LL] [i_1] [i_1] [i_1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)13)), (arr_8 [i_0] [i_0] [i_0] [i_1]))))));
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)2490)) ? (arr_14 [i_0] [i_0] [i_1] [i_1]) : (((/* implicit */int) var_4)))) / ((~(arr_14 [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_9);
    var_24 = ((/* implicit */int) var_4);
}
