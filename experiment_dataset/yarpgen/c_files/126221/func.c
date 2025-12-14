/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126221
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_0]) : (8664894676989660827ULL)))))) : (arr_2 [i_0])));
                arr_5 [2LL] = ((/* implicit */unsigned char) (+(9781849396719890799ULL)));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) max((var_7), (var_13)))) ? (((((/* implicit */_Bool) 9781849396719890772ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (18343032231576221103ULL))) : ((+(arr_4 [2]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_2] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                        var_20 &= ((((/* implicit */_Bool) max((min((9781849396719890806ULL), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_3] [i_3])))), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? ((-(var_17))) : (((((var_17) + (2147483647))) >> (((((/* implicit */int) (short)21830)) - (21820))))));
                        arr_12 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_17)) * (max((arr_4 [i_3]), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_1]))))));
                    }
                    arr_13 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((signed char) (unsigned short)0))), (min((((/* implicit */short) (signed char)-63)), ((short)-21811)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)10])) != (((/* implicit */int) var_13)))))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) var_3)) : (127))))));
                    }
                    arr_17 [i_0] [i_0] [i_2] [(signed char)2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_16 [i_0] [i_1])))))));
                }
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_20 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0] [i_1] [i_5] [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned char)0] [i_5]))) : ((+(((((/* implicit */_Bool) var_14)) ? (18343032231576221075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))))))));
                    var_23 = ((/* implicit */long long int) 7934223205217509639ULL);
                    var_24 += ((/* implicit */short) var_5);
                }
            }
        } 
    } 
    var_25 += ((/* implicit */unsigned int) var_10);
    var_26 = ((/* implicit */unsigned long long int) var_11);
}
