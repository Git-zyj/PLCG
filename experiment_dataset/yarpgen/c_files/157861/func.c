/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157861
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
    var_10 = ((/* implicit */short) (signed char)127);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) var_4);
                                var_11 = ((/* implicit */int) max((var_11), (((((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)8191)))) | (((/* implicit */int) arr_8 [i_3] [i_3]))))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)194)), ((unsigned short)57336))))));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 1875509216U)), (13835058055282163712ULL))))));
                                var_14 = var_1;
                            }
                        } 
                    } 
                    arr_16 [(short)5] [i_1] [(short)5] [23LL] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 - 1])))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_1]))) - (arr_9 [i_1])))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_0 [i_1]))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) == (arr_7 [(short)14]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [(unsigned short)16] [i_1] [(unsigned short)16])))) : (max((((/* implicit */long long int) arr_11 [i_0] [(short)14])), ((+(arr_7 [8ULL]))))))))));
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) ((1573752510) < (-214925120)))), (214925120)));
                }
            } 
        } 
        var_18 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) arr_11 [(short)22] [(short)22])) : (((/* implicit */int) (unsigned short)8199))))) / (arr_9 [(signed char)10]))) * (((/* implicit */unsigned int) ((int) min(((short)-1), (((/* implicit */short) arr_4 [i_0] [(short)22] [i_0 - 1]))))))));
    }
}
