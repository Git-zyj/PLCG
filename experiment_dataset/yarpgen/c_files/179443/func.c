/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179443
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
    var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((_Bool) var_11)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) (-(var_3))))))) : ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned short) 16764490164850963614ULL)))))));
    var_15 = ((/* implicit */unsigned int) (((~(((var_6) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((int) var_4));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_1] [6U] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                    arr_11 [i_1] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2]);
                }
                for (unsigned short i_3 = 2; i_3 < 24; i_3 += 3) 
                {
                    arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) max(((signed char)80), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (23U)))) && (((/* implicit */_Bool) 16241368031630705456ULL)))))));
                    arr_15 [i_0] [i_0] [i_3 + 1] &= ((/* implicit */unsigned char) max((max((max((23U), (((/* implicit */unsigned int) (unsigned char)173)))), (((/* implicit */unsigned int) arr_12 [i_3 - 1] [i_3] [i_3] [i_0])))), (((/* implicit */unsigned int) var_8))));
                    arr_16 [i_0] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 1] [i_0] [i_1] [i_0])) ? (((((var_6) ? (-6583718952716494183LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3]))))) / (((/* implicit */long long int) arr_4 [i_0] [i_3])))) : (((/* implicit */long long int) ((int) var_3)))));
                }
                var_16 = ((/* implicit */signed char) var_3);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    arr_20 [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 386321430U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 799558630U)) ? (1042312801) : (((/* implicit */int) (unsigned char)0))))) : (6583718952716494187LL)));
                    arr_21 [i_1] [i_1] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_12 [(unsigned char)1] [i_0] [i_1] [i_1]))))) ? (((long long int) (signed char)56)) : (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_4])));
                }
            }
        } 
    } 
    var_17 -= ((/* implicit */int) min(((+(14997698752138399921ULL))), (((/* implicit */unsigned long long int) var_9))));
}
