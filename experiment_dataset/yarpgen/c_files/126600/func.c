/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126600
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
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_7)) : (1535479476U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (signed char)64)))))))) % (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0)))))))))));
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-37))))) : (min((657477486U), (((/* implicit */unsigned int) (signed char)65)))))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27)))));
    var_16 = (+(var_7));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)20)), ((+(((/* implicit */int) var_4))))))) ? ((-(max((657477486U), (((/* implicit */unsigned int) (signed char)-70)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (var_11))) ? (var_7) : (((/* implicit */int) (signed char)46))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (max((((var_1) ^ (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (-(var_11))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) (_Bool)1))))));
                        var_19 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_6 [i_0])))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_2] [i_2 + 3])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 3] [i_2 + 2] [i_2 + 1]))));
                    }
                    arr_13 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (((~(431302607))) ^ (((/* implicit */int) var_4))))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), ((((_Bool)1) ? (var_11) : (63U)))))));
                    arr_14 [i_0] [i_1] [(short)3] = ((/* implicit */unsigned short) (unsigned char)255);
                }
                var_20 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (68U)))))));
            }
        } 
    } 
}
