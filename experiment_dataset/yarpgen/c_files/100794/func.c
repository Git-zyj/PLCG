/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100794
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
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [(signed char)5] [2U] [i_0] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_16 [i_0] [8] [i_2] [i_0] [1ULL] = ((/* implicit */unsigned int) ((unsigned long long int) 7216308678486003906ULL));
                            var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) 520919616U)) ? (((/* implicit */int) arr_11 [i_1 + 2])) : (((/* implicit */int) (signed char)122))))));
                        }
                        arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) arr_9 [i_0])))));
                        var_16 += ((/* implicit */unsigned char) ((520919607U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))));
                        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)0))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-109))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) + (960483687U))))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)32749)) : (((/* implicit */int) (unsigned char)136)))))));
                        var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) 520919616U)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (int i_7 = 2; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (unsigned char)119)))));
                                var_20 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 2835217519U)) != (5624685063281813091ULL))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) | (4369549928954611178LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_7 - 2] [i_0 - 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58725))) : (2835217535U))))))));
                                var_21 = ((/* implicit */short) ((min((((long long int) arr_22 [i_7] [i_0] [i_0] [i_0])), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)14952)), (1459749776U)))))) + (((long long int) max((((/* implicit */unsigned int) var_5)), (arr_5 [i_0 + 1] [i_0 + 1] [8ULL]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(3189704248U)))) : (var_0)));
    var_23 = var_10;
}
