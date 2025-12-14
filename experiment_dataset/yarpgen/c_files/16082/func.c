/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16082
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
    var_19 -= ((/* implicit */short) (~(((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) ((short) ((_Bool) var_18)));
        var_21 *= (+(arr_2 [i_0]));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_7 [(signed char)4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)11))))))), (max((((/* implicit */unsigned long long int) var_3)), (arr_2 [i_1])))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */signed char) ((int) max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18019979905368673138ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))));
                            var_23 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (short)30133)))));
                            arr_18 [i_1] [i_1] [i_1] [i_2] [i_4] [i_1] [i_1] = ((((/* implicit */_Bool) ((int) arr_4 [i_4 - 1]))) ? (((/* implicit */int) (short)-20987)) : (((((arr_16 [(short)12] [i_2] [(signed char)5] [i_4 - 1] [(_Bool)1]) && (((/* implicit */_Bool) var_8)))) ? (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((/* implicit */int) (signed char)19)))) : ((~(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), ((~((+(((/* implicit */int) (unsigned short)57344))))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                arr_21 [12ULL] [i_2] [i_2] [i_6] = ((/* implicit */_Bool) max((((arr_8 [i_1] [(signed char)14] [i_6]) ? (((/* implicit */int) (unsigned short)53153)) : (((/* implicit */int) (short)13441)))), ((-(((/* implicit */int) arr_8 [i_1] [i_2] [i_6]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned short i_8 = 4; i_8 < 14; i_8 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_2] [(unsigned short)11] [i_7] [i_2] [i_8] = ((/* implicit */unsigned int) (-((-(var_5)))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((((/* implicit */int) var_14)) <= (((((/* implicit */_Bool) ((unsigned int) (short)26856))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-9604)), ((unsigned short)28588)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))))))));
                            arr_30 [i_1] [i_2] [14U] [i_7] [i_8 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)-71)))) / (((/* implicit */int) arr_22 [i_1] [12] [i_1] [i_8 - 4] [i_8 - 4] [i_7]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(short)10] [i_2] [(signed char)10] [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)17))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (signed char)-125)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_6])), ((unsigned short)1926))))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */signed char) (((~(((/* implicit */int) (short)-31792)))) & (((((/* implicit */_Bool) arr_6 [(signed char)2] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)1022))))));
            arr_31 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27316))))) < (9200458530500440344ULL)));
        }
    }
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) ((short) (unsigned short)41684)))))))));
}
