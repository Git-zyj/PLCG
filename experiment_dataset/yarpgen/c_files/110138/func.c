/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110138
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (((unsigned int) (unsigned char)124))))) ? (((/* implicit */int) var_9)) : (342420053))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_9 [i_2] = ((/* implicit */short) arr_7 [i_0] [i_1] [i_2]);
                    arr_10 [(signed char)10] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) var_6);
                }
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    var_11 = ((/* implicit */unsigned short) ((short) (unsigned char)105));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) (-(0U)));
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_5] &= ((/* implicit */signed char) ((unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_3]))) / (var_5))))));
                            }
                        } 
                    } 
                }
                for (int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29751))) % (4272909219U)))) ? (((/* implicit */unsigned int) ((var_6) ^ (((/* implicit */int) arr_15 [(unsigned char)16] [(unsigned char)16] [i_6] [i_7] [i_1]))))) : (var_3)))) ? (((/* implicit */int) ((unsigned char) (short)-22825))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-55)), (arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1 + 2] [i_7] [i_7] [i_7]))) : (261120U)))))))));
                    }
                    for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_24 [i_0] [i_1 + 1] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_3);
                        var_15 = ((/* implicit */long long int) (unsigned short)8192);
                    }
                    var_16 = ((/* implicit */unsigned char) (-(16727979939273278897ULL)));
                    var_17 -= ((/* implicit */unsigned long long int) var_4);
                    arr_25 [15ULL] [i_1 - 1] [15ULL] = ((/* implicit */short) ((11098648462264411412ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166)))));
                    arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) 2067273509531488620LL);
                }
                /* LoopNest 3 */
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        for (signed char i_11 = 2; i_11 < 20; i_11 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (unsigned char)59);
                                var_19 = (~(((((/* implicit */_Bool) min((arr_6 [i_10]), (((/* implicit */short) (unsigned char)32))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)10]))))))));
                                arr_35 [i_10] [i_9] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_7 [i_1 - 1] [i_1 - 1] [i_11 - 1]), (((/* implicit */unsigned short) (short)-11754))))), (arr_16 [i_10])));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_7)) + (((/* implicit */int) arr_22 [i_0] [i_1 + 1])))) % (448976064))) - (((/* implicit */int) var_9))));
            }
        } 
    } 
}
