/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121090
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
    var_18 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) arr_4 [(_Bool)1]);
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-199))))), (((((/* implicit */_Bool) (unsigned short)65497)) ? (((/* implicit */unsigned int) var_7)) : (arr_4 [i_0])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((unsigned char) arr_10 [i_4 - 1] [i_4 + 1]));
                                var_21 = ((/* implicit */short) ((arr_9 [i_0] [i_1] [7] [7] [i_4 - 2]) > (((/* implicit */int) (unsigned short)5459))));
                            }
                        } 
                    } 
                    var_22 = ((unsigned int) (unsigned short)65486);
                    arr_13 [i_0] = ((/* implicit */short) ((unsigned int) arr_12 [i_0]));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) ((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65501)))));
                        var_24 = ((((/* implicit */_Bool) (+(1848121080U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [8ULL] [i_5 - 1]))) : (var_5));
                    }
                    for (unsigned short i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] = ((/* implicit */short) (~((~(12960057879805582080ULL)))));
                        arr_20 [i_0] [9ULL] [i_0] [3U] = ((/* implicit */int) (unsigned char)124);
                    }
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) var_7);
                    var_26 = ((/* implicit */unsigned short) (-(arr_0 [i_0] [i_0])));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1903745383)) ? (547322364) : (((/* implicit */int) (unsigned char)248))));
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)50))));
                    var_28 ^= ((/* implicit */short) ((((/* implicit */int) arr_17 [i_1 - 1] [i_1 + 1] [10] [i_7 + 1] [i_7 - 1])) * (-547322381)));
                }
                for (int i_8 = 3; i_8 < 8; i_8 += 2) 
                {
                    var_29 += ((/* implicit */long long int) var_11);
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_1))));
                    arr_28 [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)65486))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_35 [i_0] [5U] [i_8] [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                                var_31 ^= ((/* implicit */short) min(((unsigned short)65497), (((/* implicit */unsigned short) (short)-26799))));
                                var_32 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) 547322364)) ? (((/* implicit */int) arr_30 [i_0])) : (((/* implicit */int) var_0))))) ^ (((((/* implicit */long long int) -1553904011)) ^ (-8661159175888570104LL))))), (((/* implicit */long long int) arr_34 [(short)1] [i_9] [(short)1] [(short)1] [i_0]))));
                                arr_36 [i_0] [i_9] [(short)3] [i_1 - 1] [(short)3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) -2000234988)) * ((-(var_6))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_11 = 3; i_11 < 8; i_11 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) var_17);
                    var_34 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-7295)), ((unsigned short)50)))) * ((-(((/* implicit */int) (unsigned short)65494)))))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
}
