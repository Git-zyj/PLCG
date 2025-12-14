/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108824
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
    var_10 = ((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) var_1))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)25641)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)8230), (((/* implicit */short) (_Bool)1))))))))) ? (((/* implicit */int) (unsigned short)1)) : (((((/* implicit */int) (_Bool)1)) * ((+(((/* implicit */int) (short)-27108))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [i_2] = (short)8230;
                    arr_8 [i_2] [i_1] [i_2] |= (~(((/* implicit */int) var_9)));
                }
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) - (var_0)))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1 + 1])) : (((/* implicit */int) min(((unsigned short)39895), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)39895)) : (2074482630))))) : (max((((/* implicit */int) (signed char)-4)), (-1581453050))));
                    arr_12 [(unsigned short)0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)127))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_1)) ? (2784378083U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))))))), ((~(min((((/* implicit */unsigned long long int) var_1)), (18428729675200069632ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6]))) * (3339454155U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52212)))))) ? (((/* implicit */unsigned long long int) max((2074482630), (((/* implicit */int) arr_14 [i_0] [i_1 - 1] [i_5] [i_5]))))) : (min((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) (short)562))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (arr_18 [i_5] [i_4] [i_4] [i_5] [i_5] [i_6] [10ULL])))))));
                                arr_20 [i_0] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */long long int) ((var_9) || (((/* implicit */_Bool) 8589934591ULL))));
                                arr_21 [i_0] [i_1 + 1] [i_4] [(signed char)10] [i_5] [i_6] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (short)541))))) ? (((/* implicit */int) (short)-29884)) : (((/* implicit */int) arr_16 [i_0] [i_5] [i_5] [i_5 - 1]))))) : (max((((10260350169895415641ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((887367363423310864ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                                arr_22 [i_0] [i_6] [(unsigned char)2] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_6 [i_5 + 1])))));
                            }
                        } 
                    } 
                    arr_23 [i_4] [i_0] [i_0] = min((((/* implicit */int) (unsigned short)39884)), (((((_Bool) (_Bool)1)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)13321)))));
                    arr_24 [i_0] = ((((_Bool) (short)24390)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_17 [i_1 - 1] [i_1 - 1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_1 + 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_14 = var_0;
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_2 [i_7] [i_1 + 1]))))));
                    }
                }
                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) -4109618440711274095LL)))))))));
                var_17 = ((/* implicit */unsigned long long int) var_2);
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
}
