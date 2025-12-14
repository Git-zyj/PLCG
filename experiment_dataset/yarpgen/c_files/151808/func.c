/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151808
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
    var_16 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned int) var_13);
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-32)), (-1873040741))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        var_19 += ((/* implicit */unsigned long long int) var_5);
                        var_20 |= ((/* implicit */unsigned short) ((min(((+(((/* implicit */int) (unsigned short)24803)))), ((+(((/* implicit */int) (signed char)108)))))) ^ (((/* implicit */int) (signed char)108))));
                        arr_13 [i_3] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) (unsigned short)40759);
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)24781)))) + (((((/* implicit */_Bool) 3017189579U)) ? (((/* implicit */int) (_Bool)1)) : (1515659855)))))) : (arr_1 [i_1])));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_14 [i_4] [i_2] [i_1] [i_0]))) << (((max((var_6), (((/* implicit */unsigned int) var_5)))) - (2255448124U)))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (+(3591055018119833170LL))))) ? ((+(((/* implicit */int) (unsigned short)40775)))) : ((-(((/* implicit */int) (signed char)-50))))));
                        var_22 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), ((unsigned short)65510)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_4] [i_2] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24788))))))) : (2818616193444294015LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned long long int) arr_4 [i_2]))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1] [i_2] [5]))))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) + ((-(arr_9 [i_0] [i_2])))));
                        arr_22 [i_0] [i_5] [i_2] [13ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_0] [i_1] [i_2] [(_Bool)1] [i_5] [8U]), (((/* implicit */unsigned short) (signed char)17)))))) % (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [(signed char)11])))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_0] [(unsigned short)1] [(unsigned short)1] [i_5]), (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) 3552293580U)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ^ (max((((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned long long int) -3591055018119833161LL)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_5] [i_2] [i_2])))))))));
                    }
                    var_26 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3855124794U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)28))))) ? ((+(((/* implicit */int) ((signed char) var_14))))) : (((/* implicit */int) min(((signed char)9), (((/* implicit */signed char) (_Bool)1))))));
                }
            } 
        } 
    } 
}
