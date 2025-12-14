/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174684
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_1] [i_1] [i_2] [i_3 - 3] [i_4] = ((/* implicit */unsigned short) ((((((982637091U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((long long int) arr_2 [i_0])) & (arr_10 [i_4 - 1] [i_0 - 1] [i_4 - 1])))));
                                arr_13 [i_4] [i_1] [i_0] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_2] [i_3] [17U] [i_3 - 3])) ? (arr_8 [22ULL] [i_3] [i_3] [i_3 - 3]) : (arr_8 [i_0] [i_0] [i_3] [i_3 - 3]))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56951)) * (((/* implicit */int) (_Bool)0)))))));
                                var_12 = ((/* implicit */unsigned int) arr_11 [i_4] [i_1] [i_0] [i_0] [i_4]);
                                var_13 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_2 [(signed char)15]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)28345)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) ((short) arr_11 [i_2] [i_1] [(_Bool)1] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_17 [i_1] [i_1] [i_1] [i_1] [21ULL]) ? (var_2) : (((/* implicit */unsigned long long int) arr_2 [i_5])))) > (((/* implicit */unsigned long long int) arr_10 [i_6] [i_2] [i_1])))))) ^ (arr_8 [(_Bool)1] [i_1] [i_5] [14ULL])));
                                var_14 = ((/* implicit */unsigned long long int) arr_15 [(short)4]);
                                var_15 &= arr_1 [18LL];
                                arr_21 [i_0] [i_1] [i_6] [i_0] [i_5] = ((/* implicit */signed char) ((max((((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_2])) + (var_7))), (min((var_7), (((/* implicit */long long int) var_8)))))) + (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)21)) + (((/* implicit */int) var_5))))), (arr_8 [22ULL] [i_1] [i_5] [i_6]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((arr_11 [i_2] [(unsigned short)16] [i_2] [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) && (((/* implicit */_Bool) arr_8 [i_0] [i_7] [i_7] [(_Bool)1]))));
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_0 - 1] [12ULL] [i_8] [(signed char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59614))) : (arr_18 [i_0] [i_0 - 1] [i_8] [i_7] [i_8]))))));
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */int) (unsigned char)9)), (arr_2 [i_1]))) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_6)))))))), ((~(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) -122910393))))))));
                            }
                        } 
                    } 
                    arr_27 [i_2] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (min((arr_9 [i_1]), (((/* implicit */long long int) var_1))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_8);
}
