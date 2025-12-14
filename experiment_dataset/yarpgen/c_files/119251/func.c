/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119251
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
    var_14 = ((/* implicit */unsigned int) -5749058907136612259LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = var_2;
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_2])))), ((!(((/* implicit */_Bool) (signed char)-118))))));
                    var_16 = ((/* implicit */short) ((min((var_11), (max((arr_6 [i_2] [i_0]), (((/* implicit */unsigned int) 1814170391)))))) < (((/* implicit */unsigned int) min((arr_4 [i_1] [i_1 + 1]), (arr_4 [4U] [i_1 - 1]))))));
                    var_17 = ((/* implicit */int) (short)32767);
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)35020)) : (((/* implicit */int) (short)32750))));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_3] [i_3] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((-1814170392) ^ (((/* implicit */int) (unsigned short)35020))))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) (short)-8308)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32767)))))))) - (max((((((/* implicit */long long int) arr_6 [i_0] [i_0])) % (9223372036854775802LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)-32767)) == (((/* implicit */int) (short)-32767))))))));
                    var_18 = ((/* implicit */long long int) 984342207U);
                    arr_14 [i_3] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_0 [i_3]) : (((/* implicit */long long int) var_12))))));
                }
                arr_15 [i_0] [(short)12] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_1 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((long long int) var_11)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)30402)) == (((/* implicit */int) (short)11974)))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) -1814170387)), (arr_5 [i_0] [i_1] [i_1])))) ? (((arr_5 [i_0] [i_0] [i_0]) << (((((((/* implicit */int) var_7)) + (63))) - (8))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1 + 1])) - (arr_6 [i_0] [i_0]))))))));
            }
        } 
    } 
}
