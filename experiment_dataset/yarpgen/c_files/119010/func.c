/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119010
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
    var_20 = ((/* implicit */_Bool) -6306266528501810078LL);
    var_21 = ((/* implicit */unsigned char) (unsigned short)14916);
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_2]))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_3 [i_0]))) + (((/* implicit */long long int) ((arr_0 [i_2] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */unsigned long long int) 2677191926U))))) ? (((/* implicit */int) (unsigned short)60398)) : (((/* implicit */int) arr_6 [i_2] [i_1])))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((arr_7 [i_0] [i_1] [i_0]), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1617775370U))))), (((long long int) var_3))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (var_6) : (((/* implicit */long long int) var_1)))), (((long long int) (unsigned short)5139)))), (((/* implicit */long long int) (+(2677191925U)))))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_10 [i_0]), (arr_10 [i_0]))))));
                }
                for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                {
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) arr_0 [i_0] [i_0 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-5595)) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 2] [i_0] [i_5])) : (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0 + 2] [i_4] [i_0]))) == (2677191925U)))))))));
                        arr_21 [i_0] [i_0] [i_4 + 3] [i_5 - 2] [i_4 + 3] [i_4 + 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_5 + 3] [i_1] [i_4 - 3])) || (((/* implicit */_Bool) (signed char)-41)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60398))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5 - 2] [i_1] [i_4 + 3])))))));
                    }
                }
                arr_22 [i_0 + 2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)93))) + (max((var_11), (((/* implicit */long long int) arr_2 [i_0 + 1]))))));
            }
        } 
    } 
}
