/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132897
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
    var_20 += ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) min(((unsigned short)13534), ((unsigned short)52002)))), (0U)))), ((~(9223372036854775807LL)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (short)32767);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_4 [7U] [i_1] [(signed char)2]);
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_0 [i_0]) & (((/* implicit */unsigned long long int) 445226480))));
        }
        arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) < (((((/* implicit */_Bool) (unsigned short)13540)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_0 [i_0])))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)124);
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28953))) - (2086601618U))), (((/* implicit */unsigned int) arr_12 [i_2]))))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */short) (unsigned short)52479);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_11 [(_Bool)1])))) || (((/* implicit */_Bool) ((unsigned short) (unsigned short)56936)))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max((var_12), (((/* implicit */int) min((min((((/* implicit */unsigned short) var_5)), ((unsigned short)52015))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)52496)))))))))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_3]), (((/* implicit */int) (unsigned short)13508))))) ? ((-(((/* implicit */int) arr_5 [i_3] [i_3])))) : (((/* implicit */int) arr_3 [i_3]))))) ? (((arr_5 [i_3] [i_3]) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_3] [21U])))) : (((int) (unsigned char)129)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_25 = ((/* implicit */short) arr_2 [i_4]);
                    var_26 = var_14;
                }
            } 
        } 
        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4])))))) ^ (min((arr_11 [i_4]), (((/* implicit */unsigned long long int) arr_13 [i_4]))))));
    }
}
