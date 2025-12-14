/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112892
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [i_2] [i_1] [i_0]) : (((/* implicit */int) var_13)))) + ((-(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) > (arr_4 [i_2]))))))));
                    var_20 = (((-(((((/* implicit */_Bool) var_16)) ? (arr_4 [i_1]) : (arr_4 [i_0]))))) / (((/* implicit */long long int) min((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))), ((-(var_5)))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) (unsigned short)10711);
                        var_22 = ((/* implicit */unsigned char) (-(arr_5 [i_0] [i_1] [i_1] [i_3])));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_4] [i_3] [i_3] [11U] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((int) var_3)) : (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_2] [i_3])) > (var_7))))))) ? (((/* implicit */unsigned int) (-(-828663011)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)158)), ((unsigned short)16382)))) ? (max((var_1), (arr_1 [i_0] [i_2]))) : (((((/* implicit */_Bool) 558725492U)) ? (3633533861U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (-(arr_7 [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) min((arr_10 [i_3] [i_1] [i_3]), (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 808904561)) ? (((/* implicit */unsigned long long int) 1229294517)) : (12ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_2 [i_2] [i_4])) : (var_18))) <= (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3] [i_4])) ? (((/* implicit */int) arr_2 [i_4] [i_4])) : (((/* implicit */int) var_13))))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((arr_16 [i_3] [i_3] [i_3] [i_2] [i_0] [i_1] [i_3]) ? (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_9 [i_3]))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_3] [i_1] [i_2] [i_1] [10ULL] [i_0]))))) : (max((((/* implicit */unsigned int) ((arr_14 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] [i_1]) + (arr_10 [i_1] [i_1] [i_3])))), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_14)) : (arr_9 [i_3])))))));
                            var_24 = ((((/* implicit */_Bool) 93660124)) ? (((/* implicit */int) (unsigned short)345)) : (((/* implicit */int) (_Bool)1)));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) (unsigned char)21)));
                            var_26 += ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (+(var_18)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (unsigned char)58)) ? (var_17) : (((/* implicit */long long int) var_15)))))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1])) ? (var_14) : (((/* implicit */int) var_10)))))))));
                        var_28 = ((/* implicit */short) arr_7 [i_0] [i_1]);
                    }
                    var_29 = ((/* implicit */int) min((var_29), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((-1433613129) / (((/* implicit */int) var_13))))))))));
                }
                var_30 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (var_5) : (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_0]))))));
            }
        } 
    } 
    var_31 = ((((/* implicit */_Bool) 1680120222)) ? (-2132399387) : (((/* implicit */int) (_Bool)0)));
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((((/* implicit */int) var_12)), (var_5))))));
}
