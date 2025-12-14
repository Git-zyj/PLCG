/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123208
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max(((short)-32753), (arr_1 [i_0])));
                arr_5 [(short)22] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned char)255)) & (8191))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-32730)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */unsigned short) (short)10940)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    var_19 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 2])) || (((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) arr_0 [i_2]))))))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), (-1)))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_2 [i_0]))))));
                    arr_9 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-31513))));
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_11);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            {
                arr_19 [i_3] = ((/* implicit */unsigned short) max((max((var_8), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) max((arr_4 [i_3]), (((/* implicit */unsigned short) var_4)))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9510)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (signed char)9))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 18; i_5 += 4) 
                {
                    for (int i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_27 [i_3] [16ULL] [i_5] [i_5 - 3] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1322977148U))))), (((((/* implicit */unsigned long long int) var_7)) - (arr_24 [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 2])))));
                            arr_28 [i_3] [i_4] [i_4] [i_5 - 2] [i_5] [(unsigned short)9] = ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-10941))))))));
                            arr_29 [i_3] [i_4] [i_4] [i_5 - 3] [i_3] = ((/* implicit */long long int) var_17);
                            arr_30 [i_3] [i_4] = (((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_7)) : (var_15)))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_3 [i_4] [i_4]))))) + (max((arr_16 [i_3] [i_4] [i_5]), ((-(-3671169701566913719LL))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned short)65535)))), ((+(((/* implicit */int) (_Bool)0)))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_3 [i_4] [i_4]) >= (((/* implicit */long long int) var_9))))), (arr_14 [i_3])))) ? (((long long int) var_16)) : ((+(arr_3 [i_4] [i_4])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_16);
}
