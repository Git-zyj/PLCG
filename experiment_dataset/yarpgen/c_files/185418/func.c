/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185418
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) >> (((((/* implicit */int) arr_1 [i_1])) - (191))))) < (((/* implicit */int) arr_3 [i_0] [i_0]))))) % ((-((+(((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_0] [i_0] = ((((/* implicit */unsigned long long int) max(((~(arr_5 [i_1]))), (((/* implicit */unsigned int) arr_11 [i_3 - 2] [i_3 - 2] [i_3] [i_3]))))) == (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (signed char)-104))))) ? (((((/* implicit */_Bool) (signed char)103)) ? (arr_0 [3U] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] &= ((/* implicit */short) max((((/* implicit */int) (unsigned char)30)), (2147483647)));
                                var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [5U])), (arr_5 [i_3])))))))) > (17140722035552623358ULL)));
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_11 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -715226827))))));
                    arr_20 [i_1] [11ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) (unsigned short)17840))), (arr_4 [(_Bool)1] [i_1])))) == (arr_13 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])));
                }
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)9988)) || (arr_19 [i_1] [i_6] [i_1] [i_1])))), (((long long int) (_Bool)1))))) || (((/* implicit */_Bool) (+(arr_21 [i_6 - 1] [i_6 + 2] [i_1]))))));
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((max(((+(((/* implicit */int) arr_18 [i_0] [i_1] [i_6 - 1] [i_7])))), (((((/* implicit */_Bool) 1306022038156928257ULL)) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) var_0)))))) >> (((min((((((/* implicit */_Bool) var_1)) ? (arr_13 [i_6] [i_1] [i_6] [i_7] [i_7 - 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (0)))))) - (16896591734614388994ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) 17140722035552623363ULL);
}
