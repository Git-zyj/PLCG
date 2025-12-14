/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149348
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) min((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0 - 1]))))));
                var_11 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) var_8)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_11 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3 + 1] [i_2] [i_2] [i_3 + 1])) / (((/* implicit */int) arr_8 [i_3 + 2] [(unsigned char)2] [(unsigned char)2] [i_3 + 2]))))) : (arr_9 [i_1] [4LL])));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1665))));
                                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 6583005145048643341ULL)) ? ((-(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_6)))))), (((/* implicit */int) arr_12 [9U] [9U] [9U] [(short)2] [i_3] [i_3 - 2] [i_4]))));
                                arr_17 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) (short)-15990)), ((((_Bool)1) ? (1884928097267750780LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27963)))))))));
                                var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            }
                            arr_18 [i_3] [i_2] [i_1] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])))) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_0 - 1] [i_2] [(unsigned short)2])) : (((/* implicit */int) ((unsigned short) var_3)))));
                            var_14 = ((/* implicit */long long int) ((unsigned long long int) var_4));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 4; i_7 < 21; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((_Bool) min((((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (short)-5665)) : (-1486530220))), (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_19 [3ULL] [i_9])) : (((/* implicit */int) var_8)))))));
                                var_16 = ((/* implicit */unsigned short) (+(min((arr_28 [i_5] [i_5] [i_5] [i_5]), (((/* implicit */long long int) ((133688954979665711LL) != (((/* implicit */long long int) 2640246359U)))))))));
                                arr_33 [i_5] = ((/* implicit */signed char) ((((min((5ULL), (((/* implicit */unsigned long long int) (short)-2519)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5 - 1] [i_5] [i_7 - 3]))))) ? (((/* implicit */int) arr_30 [i_5 - 3] [i_5 - 3] [i_5] [(signed char)10] [(_Bool)1])) : (((/* implicit */int) ((((arr_19 [i_5] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5]))) : (1654720936U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [19U])) ? (((/* implicit */int) arr_23 [i_7] [i_6] [i_5])) : (((/* implicit */int) var_8))))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */int) min(((unsigned short)16738), (((/* implicit */unsigned short) arr_27 [i_5] [i_5] [(unsigned char)10] [i_7] [i_7]))))), ((-(((/* implicit */int) arr_31 [i_5 - 2] [i_5 - 2] [i_6] [i_6] [7ULL] [i_7]))))))), ((-(min((((/* implicit */long long int) (_Bool)1)), (7314178342781000197LL)))))));
                }
            } 
        } 
    } 
}
