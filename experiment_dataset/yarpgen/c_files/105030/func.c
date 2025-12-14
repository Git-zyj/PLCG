/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105030
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
    var_15 = ((/* implicit */int) max((((/* implicit */short) var_14)), (((short) min((3058145583U), (((/* implicit */unsigned int) (signed char)62)))))));
    var_16 = max((((/* implicit */int) var_9)), (min((var_11), (2107140298))));
    var_17 = ((/* implicit */short) ((unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_10)) : (var_3))) == (((/* implicit */long long int) ((/* implicit */int) (short)-8642))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1]))), (max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))));
                arr_5 [0] [i_1] &= ((/* implicit */short) 28);
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55240)) | (((/* implicit */int) (short)32755))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : (((arr_13 [i_0] [(short)5] [i_0] [i_0]) & (((/* implicit */long long int) -2107140288)))))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_20 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)29181)) : (var_11)))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((1073741696), (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))) + (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)32758), ((short)-29190)))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32759)) && (((/* implicit */_Bool) (short)-32760))));
                                arr_15 [i_0] = ((/* implicit */short) min((min((var_1), (arr_2 [i_0 + 1] [i_1] [i_0 - 2]))), (((/* implicit */int) (short)-1))));
                            }
                        } 
                    } 
                    arr_16 [i_2 + 1] [i_0] [i_0] [i_2 + 1] = ((((((/* implicit */_Bool) 16725410645006600589ULL)) ? (((/* implicit */int) (signed char)14)) : (793599164))) / (((((/* implicit */_Bool) (short)-19515)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (_Bool)0)))));
                    var_23 = ((/* implicit */short) ((int) -2147483639));
                }
                for (signed char i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_18 [i_1]))) + (((/* implicit */int) ((short) arr_19 [i_0] [(signed char)6] [i_0 + 1])))));
                    arr_20 [(short)12] &= ((/* implicit */signed char) min((((/* implicit */int) ((763754096) == (((/* implicit */int) arr_12 [(unsigned short)2]))))), (max((((/* implicit */int) (short)-27)), (var_8)))));
                    var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (100663296) : (var_5))) - (max((2044), (((/* implicit */int) (signed char)-16)))))))));
                    var_26 = ((/* implicit */int) 8188620262369851069ULL);
                }
                var_27 = ((/* implicit */signed char) ((((/* implicit */long long int) ((2147483647) | (-1628616134)))) * (arr_11 [i_0] [i_0] [i_0] [i_0 - 2])));
            }
        } 
    } 
}
