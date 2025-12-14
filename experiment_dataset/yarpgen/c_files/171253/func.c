/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171253
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
    var_15 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) ((signed char) 139861880U))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_15 [i_2] [20U] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)30197)) % (((/* implicit */int) (signed char)-74))))) > (arr_8 [i_2] [i_1 - 1] [i_2])));
                        arr_16 [i_2] [i_1 + 1] = ((/* implicit */unsigned short) arr_12 [i_2] [i_1 - 2]);
                        arr_17 [17ULL] [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1 + 2] [i_3 - 1])) == (((/* implicit */int) (short)7))));
                    }
                    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        var_17 = arr_2 [i_0];
                        arr_20 [i_0] &= ((/* implicit */unsigned long long int) ((arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1]) > (arr_6 [i_1 + 3] [i_1 + 1] [i_1 - 1])));
                        var_18 = ((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2]);
                    }
                    var_19 -= (unsigned short)15273;
                    arr_21 [i_1 + 3] [i_2] = (signed char)-74;
                    var_20 &= ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))) >= (2390957284U)));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */long long int) ((1441582196U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10327)))));
                    var_22 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((4155105416U) != (arr_4 [i_1] [i_1]))))));
                    arr_24 [i_1] [i_5] = ((/* implicit */int) (_Bool)1);
                    var_23 &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)129))));
                }
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_8 [i_0] [i_6] [i_6]))))));
                    arr_27 [i_1 + 2] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) 3525753221U)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_25 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)195))));
                        var_26 -= ((/* implicit */int) arr_29 [i_0] [i_0] [i_6] [i_0]);
                        var_27 = ((/* implicit */unsigned long long int) (!(((arr_5 [i_0] [i_6] [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99)))))));
                    }
                    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_28 -= ((/* implicit */unsigned int) ((unsigned char) max((arr_3 [i_1 - 1]), (((/* implicit */long long int) arr_22 [i_8])))));
                        arr_33 [i_1] [i_8] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_8]);
                        var_29 = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0] [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_6] [i_8])))));
                        arr_34 [i_8] [i_1 - 1] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)39))))))) - (((((/* implicit */_Bool) arr_19 [i_6] [i_8] [(unsigned short)0] [i_1 - 1])) ? (((/* implicit */long long int) arr_14 [i_0] [i_1 + 2] [i_0] [i_1 - 1] [i_0])) : (arr_12 [i_8] [i_8])))));
                        arr_35 [i_8] [(unsigned char)4] [i_6] [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((((int) arr_31 [i_8] [i_8] [i_6] [i_1] [i_1] [(unsigned char)1])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 139861884U)) == (arr_13 [i_8] [i_1] [i_6])))))));
                    }
                }
                arr_36 [i_0] = ((/* implicit */unsigned int) (signed char)-24);
            }
        } 
    } 
}
