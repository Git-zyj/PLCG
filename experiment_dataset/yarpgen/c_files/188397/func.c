/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188397
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        arr_8 [(unsigned char)14] [i_1] [(signed char)6] &= ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)26367)), (-1700848027)))))));
                        arr_9 [i_0] [(_Bool)1] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)21857))))) && ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (arr_7 [(signed char)18] [i_1] [i_1] [i_3]))))))));
                        arr_10 [i_3] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */signed char) min((min((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0)))), (2110723036)));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43668))))) ? (((/* implicit */int) (unsigned short)21867)) : ((-(((/* implicit */int) ((signed char) 4294967295U)))))));
                        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_2 + 3]))))), (max((arr_7 [(unsigned short)7] [i_0] [i_2 + 3] [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_2 + 3]))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_13 [(unsigned char)13] [(unsigned char)13] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (signed char)22)), ((unsigned short)43668))), (min(((unsigned short)21867), (((/* implicit */unsigned short) arr_2 [i_0] [(signed char)1] [i_1]))))))) ? (max((((/* implicit */unsigned long long int) var_17)), (max((((/* implicit */unsigned long long int) (signed char)-62)), (var_5))))) : (max(((~(var_6))), (((/* implicit */unsigned long long int) ((int) var_1)))))));
                        arr_14 [12ULL] &= ((/* implicit */_Bool) max((((arr_1 [i_0] [i_1 - 1]) ? (min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_6 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_4]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_14))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1] [i_0] [i_5] [i_5] |= ((/* implicit */signed char) (_Bool)1);
                        var_20 -= ((/* implicit */unsigned char) max((((unsigned long long int) arr_4 [i_0] [i_1] [i_2] [i_5])), (((/* implicit */unsigned long long int) ((((min((((/* implicit */int) (unsigned short)43676)), (-568502046))) + (2147483647))) >> (((((/* implicit */int) var_9)) - (31160))))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (unsigned short)43669);
    var_22 = ((/* implicit */signed char) var_11);
    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) 1526095104))));
    var_24 = ((/* implicit */int) ((unsigned char) var_9));
}
