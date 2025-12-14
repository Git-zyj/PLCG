/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124514
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0])))));
        var_11 ^= ((/* implicit */_Bool) ((unsigned short) (signed char)-74));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1 + 3])) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1 + 2] [i_1 + 3]))))));
        arr_8 [i_1] |= ((/* implicit */_Bool) arr_5 [i_1]);
        var_12 = ((/* implicit */int) ((long long int) arr_5 [i_1]));
        arr_9 [i_1 + 2] |= (unsigned short)30217;
        var_13 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */int) (short)-1))))))));
    }
    var_14 |= ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 20; i_3 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((unsigned long long int) min(((short)-11030), ((short)-1))));
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (arr_18 [i_2] [i_2] [i_2])));
                            var_18 = ((/* implicit */_Bool) ((int) arr_15 [i_2] [i_3]));
                        }
                        for (signed char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_26 [i_2] [i_2] [(unsigned short)12] [i_2] [i_2] [i_2] [i_2]))));
                            var_20 = ((/* implicit */unsigned char) arr_15 [i_3 + 2] [i_3]);
                            var_21 |= (~(((/* implicit */int) (short)10)));
                            var_22 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) min((1487668093U), (((/* implicit */unsigned int) (short)-9)))))))));
                        }
                        arr_30 [12LL] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_13 [i_2])) ? (12078659563730054949ULL) : (((unsigned long long int) arr_17 [i_2] [i_3]))))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2])))) ? (arr_13 [i_4 + 1]) : (min((arr_13 [i_4 + 1]), (((/* implicit */unsigned int) (_Bool)1))))));
                        arr_31 [i_2] [i_3] [i_4] [4U] = ((/* implicit */unsigned long long int) arr_26 [i_5] [i_4 + 2] [i_4] [i_3] [i_3 + 1] [i_3 + 1] [(signed char)3]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_2] [i_3] = ((/* implicit */unsigned int) arr_6 [i_8] [i_4]);
                        arr_35 [i_3] = ((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3] [i_3]);
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */signed char) arr_27 [i_2] [21])), (((signed char) min((arr_16 [i_8] [i_2] [i_8]), (((/* implicit */long long int) arr_21 [i_8]))))))))));
                    }
                    arr_36 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) arr_20 [i_4] [i_3] [i_2]);
                    var_25 = ((/* implicit */unsigned int) arr_25 [i_4 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1]);
                }
                var_26 += ((_Bool) (-(((/* implicit */int) arr_11 [i_2]))));
                arr_37 [i_3] = arr_16 [(unsigned char)21] [i_3] [i_3 - 1];
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((unsigned char) var_5)))));
}
