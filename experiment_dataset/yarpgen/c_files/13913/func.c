/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13913
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
    var_10 = ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (604388296)))) ? ((-(var_4))) : (((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    var_11 = ((/* implicit */short) var_7);
    var_12 = min((((/* implicit */unsigned int) max((var_8), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))))), (min((((/* implicit */unsigned int) ((short) -604388299))), (((((/* implicit */_Bool) (unsigned short)56294)) ? (var_0) : (var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [(short)18] [i_0])) : (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) (unsigned short)34898))))))));
                                arr_12 [i_0] = min((((/* implicit */unsigned long long int) ((((unsigned int) 2393891243170685169ULL)) & (((unsigned int) (unsigned char)5))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_3)))))) & (arr_1 [i_1] [i_0]))));
                                var_14 += ((/* implicit */unsigned short) var_9);
                                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_9 [(signed char)9] [i_0] [i_1] [i_2] [6] [i_4])) : (((/* implicit */int) (unsigned char)5)))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0])))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_2 [i_0] [(unsigned char)16]))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)18347)) : (((/* implicit */int) arr_3 [8U]))))) ? (((/* implicit */int) (unsigned short)56295)) : (((/* implicit */int) (_Bool)1)))));
                    var_17 = ((/* implicit */unsigned char) ((unsigned int) var_6));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0 + 2] [(unsigned char)12]))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_0] [8])), (2393891243170685194ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [18U]))))))));
                                var_19 |= ((/* implicit */unsigned short) ((short) var_7));
                                arr_19 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((5326075697381233499LL), (((/* implicit */long long int) (unsigned char)148))))) & ((+(2393891243170685162ULL)))))) ? ((((~(var_5))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) (unsigned char)251))))))))));
                                var_20 = ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (short)-27548)))));
                }
            } 
        } 
    } 
}
