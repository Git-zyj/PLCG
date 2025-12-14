/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16722
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [(short)10] [(short)4] [(short)10] = var_8;
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0] [(signed char)2] [i_1]))) ^ ((-(var_0))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), ((-(((/* implicit */int) (unsigned short)1790))))))))))));
                var_19 += ((/* implicit */unsigned short) min(((unsigned char)248), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1543807534)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-24558)) : (((/* implicit */int) (short)-1))))))))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned long long int) ((short) var_10));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max(((short)32767), ((short)32755)));
                            arr_18 [i_2] [(short)2] [7] [(short)2] [(short)2] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)32757))));
                            var_22 = ((/* implicit */int) ((_Bool) ((unsigned long long int) (short)32767)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_7)), (var_11)))))) ? ((-(max((((/* implicit */unsigned int) (signed char)111)), (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 0U)) ? (1U) : (((/* implicit */unsigned int) 2147483647))))))))))));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_13)))))));
                    var_25 = ((/* implicit */long long int) var_6);
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 2; i_7 < 13; i_7 += 1) 
                    {
                        arr_25 [i_2] [(unsigned char)1] [(unsigned char)8] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)992))) >= (min((var_1), (((/* implicit */long long int) (unsigned char)0)))))))) | (max((((/* implicit */long long int) var_12)), (var_1)))));
                        arr_26 [i_2] [(_Bool)1] [i_6] [i_7] = ((/* implicit */_Bool) (~(((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))));
                        var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) < (arr_17 [(_Bool)1] [i_7 - 2] [(_Bool)1] [i_7 - 1] [i_7 + 1] [i_7 - 1]))))));
                        arr_27 [(short)3] [i_6] [i_3] [4ULL] = ((/* implicit */long long int) arr_22 [i_2] [i_2]);
                    }
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_30 [i_2] [i_3] [(signed char)12] [i_2] [7] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_23 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]) || (arr_23 [i_2] [i_2] [i_3] [(signed char)12] [i_2] [i_8])))), (((arr_23 [i_2] [i_2] [(unsigned char)13] [i_6] [i_6] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))) : (6864528060388384970LL)))));
                        arr_31 [(_Bool)1] [i_8] [(unsigned char)5] [(_Bool)1] = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), (6864528060388384970LL)));
                    }
                    arr_32 [i_2] [i_2] [0LL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))) <= (arr_9 [i_2] [i_2])))) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((-6864528060388384970LL) + (6864528060388384994LL))) - (24LL)))))))))) : (((((/* implicit */_Bool) arr_16 [5] [i_3] [i_3] [i_3])) ? (arr_16 [(short)11] [(short)11] [i_6] [(short)11]) : (arr_16 [i_2] [i_6] [12U] [i_3])))));
                }
            }
        } 
    } 
}
