/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165648
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned char)17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_0] [(_Bool)1] [(_Bool)1] |= ((/* implicit */signed char) (-(arr_9 [i_0 + 1] [i_0 - 1])));
                            arr_14 [i_0] [12] [8ULL] [i_0] = ((/* implicit */unsigned char) (+(arr_9 [(unsigned short)14] [5ULL])));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                arr_17 [13] = ((/* implicit */unsigned short) ((long long int) (short)-1));
                                var_16 = ((/* implicit */unsigned char) arr_12 [14LL] [(unsigned short)10] [14LL] [14LL] [14LL] [(unsigned char)18]);
                                arr_18 [12ULL] [(short)1] [(short)17] [(short)17] [12ULL] = ((/* implicit */unsigned short) arr_6 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [(unsigned short)0]);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_26 [(signed char)1] [(unsigned short)9] [3ULL] [(unsigned short)5] [(signed char)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((6997779623680310892LL), (((/* implicit */long long int) ((arr_12 [16] [16] [8LL] [(unsigned char)4] [9LL] [(unsigned short)11]) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))))))))), (arr_2 [i_7 - 1])));
                                var_17 += ((/* implicit */signed char) 548033919439453768ULL);
                            }
                        } 
                    } 
                } 
                arr_27 [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
            }
        } 
    } 
}
